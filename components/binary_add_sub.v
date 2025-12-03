`default_nettype none

module binary_add_sub
#(
    parameter WORD_WIDTH = 32
)
(
    input   wire                         add_sub,
    input   wire                         carry_in,
    input   wire     [WORD_WIDTH-1:0]    A,
    input   wire     [WORD_WIDTH-1:0]    B,
    output  reg      [WORD_WIDTH-1:0]    sum,
    output  reg                          carry_out,
    output  wire     [WORD_WIDTH-1:0]    carries,
    output  reg                          overflow
);
    localparam ZERO = {WORD_WIDTH{1'b0}};
    localparam ONE  = {{WORD_WIDTH-1{1'b0}}, 1'b1};

    initial begin
        sum         = ZERO;
        carry_out   = 1'b0;
        overflow    = 1'b0;
    end

    wire [WORD_WIDTH-1:0] carry_in_unsigned_extended;
    wire [WORD_WIDTH-1:0] carry_in_signed_extended;

    width_extend
    #(
        .INPUT_WIDTH    (1),
        .OUTPUT_WIDTH   (WORD_WIDTH),
        .SIGNED         (0)
    )
    extend_carry_unsigned
    (
        .input_data     (carry_in),
        .output_data    (carry_in_unsigned_extended)
    );

    width_extend
    #(
        .INPUT_WIDTH    (1),
        .OUTPUT_WIDTH   (WORD_WIDTH),
        .SIGNED         (1)
    )
    extend_carry_signed
    (
        .input_data     (carry_in),
        .output_data    (carry_in_signed_extended)
    );

    reg [WORD_WIDTH-1:0] B_selected         = ZERO;
    reg [WORD_WIDTH-1:0] negated_offset     = ZERO;
    reg [WORD_WIDTH-1:0] carry_in_selected  = ZERO;

    always @(*) begin
        B_selected          = (add_sub == 1'b0) ? B : ~B;
        negated_offset      = (add_sub == 1'b0) ? ZERO : ONE;
        carry_in_selected   = (add_sub == 1'b0) ? carry_in_unsigned_extended : carry_in_signed_extended;
    end 

    always @(*) begin
        {carry_out, sum} = {1'b0, A} + {1'b0, B_selected} + {1'b0, negated_offset} + {1'b0, carry_in_selected};
    end

    carryin_binary
    #(
        .WORD_WIDTH (WORD_WIDTH)
    )
    carry_test
    (
        .A          (A),
        .B          (B_selected),
        .sum        (sum),
        .carryin    (carries)
    );

    always @(*) begin
        overflow = (carries[WORD_WIDTH-1] != carry_out);
    end

endmodule

