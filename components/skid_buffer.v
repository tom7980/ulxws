`default_nettype none

module skid_buffer
#(
    parameter DATA_WIDTH = 8,
    parameter RESET_VALUE = {DATA_WIDTH{1'b0}}
)
(
    input wire			 clk,
    input wire			 reset,
 

    input wire			 i_valid,
    output wire			 i_ready,
    input wire [DATA_WIDTH-1:0]	 i_data,

    output wire			 o_valid,
    input wire			 o_ready,
    output wire [DATA_WIDTH-1:0] o_data
);

    localparam WORD_ZERO = {DATA_WIDTH{1'b0}};

    reg                      r_write_enable = 1'b0;
    wire [DATA_WIDTH-1:0]    r_data;

    // Register the input data into the internal buffer when we are ready to accept data via o_ready

    register
    #(
        .WORD_WIDTH     (DATA_WIDTH),
        .RESET_VALUE    (RESET_VALUE)
    )
    internal_reg
    (
        .clock (clk),
        .reset (reset),
        .write_enable (r_write_enable),
        .input_data (i_data),
        .output_data (r_data)
     );

    reg                     out_write_enable    = 1'b1;
    reg                     use_internal        = 1'b0;
    reg [DATA_WIDTH-1:0]    selected_data       = WORD_ZERO;

    always @(*) begin
        selected_data = (use_internal == 1'b1) ? r_data : i_data;
    end

    register
    #(
        .WORD_WIDTH     (DATA_WIDTH),
        .RESET_VALUE    (RESET_VALUE)
    )
    output_reg
    (
        .clock (clk),
        .reset (reset),
        .write_enable (out_write_enable),
        .input_data (selected_data),
        .output_data (o_data)
     );

    localparam STATE_BITS = 2;

    localparam [STATE_BITS-1:0] EMPTY = 'd0; // No Data moving through the buffer currently
    localparam [STATE_BITS-1:0] BUSY  = 'd1; // Data moving from input directly to output
    localparam [STATE_BITS-1:0] FULL  = 'd2; // Data in internal buffer


    //             flow            
    //             ┌──┐            
    //        load │  ▼ fill       
    // ┌─────┬───►┌────┬────►┌────┐
    // │EMPTY│    │BUSY│     │FULL│
    // └─────◄────┴────┘◄────┴────┘
    //         unload    flush      


    wire [STATE_BITS-1:0] state;
    reg  [STATE_BITS-1:0] state_next = EMPTY;

    register
    #(
        .WORD_WIDTH  (1),
        .RESET_VALUE (1'b1)
    )
    i_ready_reg
    (
        .clock (clk),
        .reset (reset),
        .write_enable (1'b1),
        .input_data (state_next != FULL),
        .output_data (i_ready)
    );

    register
    #(
        .WORD_WIDTH  (1),
        .RESET_VALUE (1'b1)
    )
    o_valid_reg
    (
        .clock (clk),
        .reset (reset),
        .write_enable (1'b1),
        .input_data (state_next != EMPTY),
        .output_data (o_valid)
    );

    // Insert and Remove logic for data in & out

    reg insert = 1'b0;
    reg remove = 1'b0;

    always @(*) begin
        insert = (i_valid == 1'b1) && (i_ready == 1'b1);
        remove = (o_valid == 1'b1) && (o_ready == 1'b1);
    end

    reg load    = 1'b0; // EMPTY - insert
    reg unload  = 1'b0; // BUSY - remove
    reg flow    = 1'b0; // BUSY - insert && remove
    reg fill    = 1'b0; // BUSY - insert
    reg flush   = 1'b0; // FULL - remove

    always @(*) begin
        load    = (state == EMPTY)  && (insert == 1'b1) && (remove == 1'b0);
        unload  = (state == BUSY)   && (insert == 1'b0) && (remove == 1'b1);
        flow    = (state == BUSY)   && (insert == 1'b1) && (remove == 1'b1);
        fill    = (state == BUSY)   && (insert == 1'b1) && (remove == 1'b0);
        flush   = (state == FULL)   && (insert == 1'b0) && (remove == 1'b1);
    end

    always @(*) begin
        state_next = (load   == 1'b1) ? BUSY  : state;
        state_next = (unload == 1'b1) ? EMPTY : state;
        state_next = (flow   == 1'b1) ? BUSY  : state;
        state_next = (fill   == 1'b1) ? FULL  : state;
        state_next = (flush  == 1'b1) ? BUSY  : state;
    end

    // Register next state
    register
    #(
        .WORD_WIDTH(STATE_BITS),
        .RESET_VALUE(EMPTY)
    )
    state_reg
    (
        .clock (clk),
        .reset (reset),
        .write_enable (1'b1),
        .input_data (state_next),
        .output_data (state)
     );

    always @(*) begin
        out_write_enable = (load == 1'b1) || (flow == 1'b1) || (flush = 1'b1);
        r_write_enable = (fill == 1'b1);
        use_internal = (flush == 1'b1);
    end

endmodule
