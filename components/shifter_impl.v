`default_nettype none

module shifter_impl
#(
    parameter WORD_WIDTH = 0,
    parameter SHIFT_WIDTH = $clog2(WORD_WIDTH),
    parameter IMPLEMENTATION = ""
)
(
    input wire [WORD_WIDTH-1:0] data_in,
    input wire [SHIFT_WIDTH-1:0] shift_amount,
    input wire sign_in,

    output reg [WORD_WIDTH-1:0] data_out
);
    /* verilator lint_off UNOPTFLAT */
    reg [WORD_WIDTH-1:0] partial [SHIFT_WIDTH-1:0];
    /* verilator lint_on UNOPTFLAT */

    localparam ZERO = {WORD_WIDTH{1'b0}};

    integer i;

    initial begin
        for(i=0; i < SHIFT_WIDTH; i=i+1) begin
            partial[i] = ZERO;
        end
    end

    
    generate
        genvar j;
        /* verilator lint_off WIDTHEXPAND */
        if (IMPLEMENTATION == "ROTATE") begin : gen_rotate
        /* verilator lint_on WIDTHEXPAND */

            always @(*) begin
                partial[0] = (shift_amount[0] == 1'b1) ? {data_in[0], data_in[WORD_WIDTH-1:1]} : data_in;

                data_out = partial[SHIFT_WIDTH-1];
            end

            for(j=1; j < SHIFT_WIDTH; j=j+1) begin
                wire [WORD_WIDTH-1:0] tmp1 = partial[j-1];
                always @(*) begin
                    partial[j] = (shift_amount[j] == 1'b1) ? {tmp1[(2**j)-1:0], tmp1[WORD_WIDTH-1:2**j]} : tmp1;
                end
            end
        end
        else
        /* verilator lint_off WIDTHEXPAND */
        if (IMPLEMENTATION == "SHIFT") begin : gen_shift
        /* verilator lint_on WIDTHEXPAND */
            always @(*) begin
                partial[0] = (shift_amount[0] == 1'b1) ? {sign_in, data_in[WORD_WIDTH-1:1]} : data_in;

                data_out = partial[SHIFT_WIDTH-1];
            end

            for(j=1; j < SHIFT_WIDTH; j=j+1) begin
                wire [WORD_WIDTH-1:0] tmp2 = partial[j-1];
                always @(*) begin
                partial[j] = (shift_amount[j] == 1'b1) ? {{2**j{(sign_in == 1'b0) ? 1'b0 : 1'b1}}, tmp2[WORD_WIDTH-1:2**j]} : tmp2;
                end
            end
        end
    endgenerate

endmodule
