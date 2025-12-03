`include "dyadic_boolean_operations.vh"

`default_nettype none

module dyadic_boolean_operator
#(
    WORD_WIDTH = 0
)
(
    input wire [`DYADIC_TABLE_WIDTH-1:0] truth_table,
    input wire [WORD_WIDTH-1:0] A,
    input wire [WORD_WIDTH-1:0] B,
    output wire [WORD_WIDTH-1:0] result
);

    generate
        genvar i;
        for(i = 0; i < WORD_WIDTH; i = i + 1) begin : per_bit
            multiplexer_binary_behavioural
            #(
                .WORD_WIDTH(1),
                .ADDR_WIDTH(`DYADIC_SELECTOR_WIDTH),
                .INPUT_COUNT(`DYADIC_TABLE_WIDTH)
            )
            select_bit
            (
                .selector ({A[i], B[i]}),
                .words_in (truth_table),
                .word_out (result[i])
            );
        end
    endgenerate

endmodule
