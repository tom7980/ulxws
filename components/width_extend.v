`default_nettype none

module width_extend
#(
    parameter INPUT_WIDTH       = 0,
    parameter OUTPUT_WIDTH      = 0,
    parameter SIGNED            = 0
)
(
    input   wire    [INPUT_WIDTH-1:0]   input_data,
    output  reg     [OUTPUT_WIDTH-1:0]  output_data
);

    localparam PAD_WIDTH = OUTPUT_WIDTH - INPUT_WIDTH;

    generate
        if (PAD_WIDTH == 0) begin: zero
            always @(*) begin
                output_data = input_data;
            end
        end

        if (PAD_WIDTH > 0) begin: extend
            localparam PAD_ZEROS = {PAD_WIDTH{1'b0}};
            localparam PAD_ONES  = {PAD_WIDTH{1'b1}};
            always @(*) begin
                output_data = ((SIGNED != 0) && (input_data[INPUT_WIDTH - 1] == 1'b1)) ? {PAD_ONES, input_data} : {PAD_ZEROS, input_data};
            end
        end

        if (PAD_WIDTH < 0) begin: truncate
            always @(*) begin
                output_data = input_data[OUTPUT_WIDTH-1:0];
            end
        end
    endgenerate
endmodule
