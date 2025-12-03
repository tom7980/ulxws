`default_nettype none

module barrel_shifter
#(
    parameter WORD_WIDTH = 32,
    parameter SHIFT_WIDTH = $clog2(WORD_WIDTH)
)
(
    input wire [WORD_WIDTH-1:0] data_in,
    input wire [SHIFT_WIDTH-1:0] shift_amount,
    input wire shift_dir, // 0 Right - 1 Left
    input wire shift_or_rotate, // 0 Shift - 1 Rotate
    input wire logi_or_arith, // 0 logical - 1 arith

    output reg [WORD_WIDTH-1:0] data_out
);

    localparam ZERO = {WORD_WIDTH{1'b0}};
    localparam ONES = {WORD_WIDTH{1'b1}};

    reg [WORD_WIDTH-1:0] shift_impl_data_in = ZERO;
    reg [WORD_WIDTH-1:0] rotated_data_out = ZERO;
    reg [WORD_WIDTH-1:0] shifted_data_out = ZERO;

    reg sign_in = 0;

    always @(*) begin
        // Get sign bit for arithmatical shift - reverse the input for left shift
        sign_in = data_in[WORD_WIDTH-1];
        shift_impl_data_in = (shift_dir == 0'b0) ? data_in : {<<{data_in}};
    end

    // Rotate the input right by shift amount
    shifter_impl
    #(
        .WORD_WIDTH(WORD_WIDTH),
        .IMPLEMENTATION("ROTATE")
    )
    rotate_right
    (
        .data_in(shift_impl_data_in),
        .shift_amount(shift_amount),
        .sign_in(0'b0), // Sign isn't used in rotate

        .data_out(rotated_data_out)
    );

    shifter_impl
    #(
        .WORD_WIDTH(WORD_WIDTH),
        .IMPLEMENTATION("SHIFT")
    )
    shift_right
    (
        .data_in(shift_impl_data_in),
        .shift_amount(shift_amount),
        .sign_in((logi_or_arith == 1'b0) ? 0'b0 : sign_in), // If we're doing arith shift pass in the sign otherwise we shift in 0's always

        .data_out(shifted_data_out)
    );

    reg [WORD_WIDTH-1:0] shift_or_rotate_out;
    reg [WORD_WIDTH-1:0] right_or_left_out;

    always @(*) begin
        shift_or_rotate_out = (shift_or_rotate == 0'b0) ? shifted_data_out : rotated_data_out;
        right_or_left_out = (shift_dir == 0'b0) ? shift_or_rotate_out : {<<{shift_or_rotate_out}};
        data_out = right_or_left_out;
    end
endmodule
