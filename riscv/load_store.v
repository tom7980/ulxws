`default_nettype none
`include "opcode_masks.vh"

module load_store
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
	`include "rv_widths.vh"
)
(
    input wire			    clk,

    input wire [WORD_WIDTH-1:0]	    rd_val_in,		  // This is either the value to store to memory or the value to store to rd 
    output reg [WORD_WIDTH-1:0]	    rd_val_out,		  // This is either the val from execute or the data from memory we fetch here if it's a mem op or nothing if it's a store.

    input wire [REG_ADDR_WIDTH-1:0] rd_addr_in,
    output reg [REG_ADDR_WIDTH-1:0] rd_addr_out,

    input wire [MEM_OP_WIDTH-1:0]   load_store_op_in,	  // Whole module is just passthrough if no mem operation
    input wire [ADDR_WIDTH-1:0]	    mem_addr_in,
 
    output reg [ADDR_WIDTH-1:0]	    controller_addr_o,	  // addr out to memory controller
    output reg [WORD_WIDTH-1:0]	    controller_data_o,
    input wire [WORD_WIDTH-1:0]	    controller_data_i,
    output reg			    controller_we,	  // High for a store, low for load
 
    output reg			    mem_controller_valid, // High when transaction to controller is valid
    input wire			    controller_mem_ready, // High when controller is ready for transaction

    output reg			    mem_controller_ready, // High when module can recieve data from controller
    input wire			    controller_mem_valid, // High when data is ready to be transmit from controller back to module
 
    input wire			    execute_mem_valid,
    output reg			    mem_execute_ready,

    input wire			    writeback_mem_ready,
    output reg			    mem_writeback_valid
);
   `include "rv_internal_ops.vh"

    initial begin
       $dumpfile("load_store.fst");
       $dumpvars(0, load_store);
    end

    reg [WORD_WIDTH-1:0]     rd_val_in_r;
    reg [REG_ADDR_WIDTH-1:0] rd_addr_in_r;
    reg [MEM_OP_WIDTH-1:0]   load_store_op_in_r;
    reg [ADDR_WIDTH-1:0]     mem_addr_in_r;

    wire		     input_data_valid;
    reg			     input_data_ready;
   
    skid_buffer
    #(
        .DATA_WIDTH(WORD_WIDTH + REG_ADDR_WIDTH + MEM_OP_WIDTH + ADDR_WIDTH)
    )
    skid_buf_load_store_in
    (
	.clk(clk),
	.reset(1'b0),
	.i_valid(execute_mem_valid),
	.i_ready(mem_execute_ready),
	.o_valid(input_data_valid),
	.o_ready(input_data_ready),
	.i_data({rd_val_in, rd_addr_in, load_store_op_in, mem_addr_in}),
	.o_data({rd_val_in_r, rd_addr_in_r, load_store_op_in_r, mem_addr_in_r})
    );       

   localparam STATE_BITS = 2;

   wire [STATE_BITS-1:0] state;
   reg [STATE_BITS-1:0]	 next_state = WRITEBACK;
   
   localparam WRITEBACK = 2'b00;
   localparam WAIT_LOAD_DATA = 2'b10;

   reg	      flow = 1'b0;
   reg	      load = 1'b0;
   reg	      store = 1'b0;
   reg	      writeback_load = 1'b0;
   
   reg	      is_load_op;
   reg	      is_store_op;

    always @(*) begin
	is_load_op = (load_store_op_in_r == MEM_LOAD_B) ||
		     (load_store_op_in_r == MEM_LOAD_H) ||
		     (load_store_op_in_r == MEM_LOAD_W) ||
		     (load_store_op_in_r == MEM_LOAD_BU) ||
		     (load_store_op_in_r == MEM_LOAD_HU);
	is_store_op = (load_store_op_in_r == MEM_STORE_B) ||
		      (load_store_op_in_r == MEM_STORE_B) ||
		      (load_store_op_in_r == MEM_STORE_B);
   end
	
   always @(*) begin
      flow = (state == WRITEBACK) && (load_store_op_in_r == MEM_NO_OP) && (input_data_valid == 1'b1) && (writeback_mem_ready == 1'b1);
      load = (state == WRITEBACK) && is_load_op && (input_data_valid == 1'b1) && (controller_mem_ready == 1'b1);
      store = (state == WRITEBACK) && is_store_op && (input_data_valid == 1'b1) && (controller_mem_ready == 1'b1);
      writeback_load = (state == WAIT_LOAD_DATA) && (controller_mem_valid == 1'b1);
   end

   always @(*) begin
      next_state = (flow == 1'b1) ? WRITEBACK : state;
      next_state = (load == 1'b1) ? WAIT_LOAD_DATA : next_state;
      next_state = (writeback_load == 1'b1) ? WRITEBACK : next_state;
      next_state = (store == 1'b1) ? WRITEBACK : next_state;
   end

   register
   #(
       .WORD_WIDTH(STATE_BITS),
       .RESET_VALUE(WRITEBACK)
   )
   state_reg
   (
       .clock(clk),
       .reset(1'b0),
       .write_enable(1'b1),
       .input_data(next_state),
       .output_data(state)
    );

    reg [WORD_WIDTH-1:0] load_data;

    always @(*) begin
	case (load_store_op_in_r)
	    MEM_LOAD_B: begin load_data = {{WORD_WIDTH-8{controller_data_i[7]}}, controller_data_i[7:0]}; end
	    MEM_LOAD_H: begin load_data = {{WORD_WIDTH-16{controller_data_i[15]}}, controller_data_i[15:0]}; end
	    MEM_LOAD_W: begin load_data =  controller_data_i; end
	    MEM_LOAD_BU: begin load_data = {{WORD_WIDTH-8{1'b0}}, controller_data_i[7:0]}; end
	    MEM_LOAD_HU: begin load_data = {{WORD_WIDTH-16{1'b0}}, controller_data_i[15:0]}; end
	    default: begin load_data = {WORD_WIDTH{1'b0}}; end
	endcase // case (load_store_op_in_r)
    end

    always @(*) begin
	rd_val_out = (state == WAIT_LOAD_DATA) ? load_data : rd_val_in_r;
	rd_addr_out = rd_addr_in_r;
	controller_data_o = rd_val_in_r;
	controller_addr_o = mem_addr_in_r;
	controller_we = is_store_op;

	input_data_ready = (next_state == WRITEBACK) && (writeback_mem_ready == 1'b1);
	mem_controller_valid = load || store;
	mem_controller_ready = (state == WAIT_LOAD_DATA);
	mem_writeback_valid = writeback_load || flow;
    end
    

endmodule
