`default_nettype none

module register_file
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 5,
    parameter DEPTH = 2 ** ADDR_WIDTH
)
(
    input wire clk,

    input wire [WORD_WIDTH-1:0] rd_data,
    input wire [ADDR_WIDTH-1:0] rd_addr,
    input wire rd_valid,

    input wire [ADDR_WIDTH-1:0] rs1_addr,
    output reg [WORD_WIDTH-1:0] rs1_data,

    input wire [ADDR_WIDTH-1:0] rs2_addr,
    output reg [WORD_WIDTH-1:0] rs2_data
);

    reg [WORD_WIDTH-1:0] register_file_block [DEPTH-1:0];

    localparam WORD_ZERO = {WORD_WIDTH{1'b0}};
    localparam ADDR_ZERO = {ADDR_WIDTH{1'b0}};

    integer i;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            register_file_block[i] = WORD_ZERO;
        end
    end

    always @(posedge clk) begin
        if (rd_valid) begin
            register_file_block[rd_addr] <= (rd_addr != ADDR_ZERO) ? rd_data : WORD_ZERO;
        end
        rs1_data <= (rs1_addr != ADDR_ZERO) ? register_file_block[rs1_addr] : WORD_ZERO;
        rs2_data <= (rs2_addr != ADDR_ZERO) ? register_file_block[rs2_addr] : WORD_ZERO;
    end

endmodule
