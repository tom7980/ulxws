`default_nettype none
module mem_file
#(
    WORD_WIDTH = 32,
    ADDR_WIDTH = 32
)
(
    input wire clk,
    input wire [ADDR_WIDTH-1:0] addr_in,
    input wire addr_valid,
    output reg addr_ready,

    output wire [WORD_WIDTH-1:0] data_out,
    output wire data_valid,
    input wire data_ready
);

   reg [ADDR_WIDTH-1:0] mem_blk [WORD_WIDTH-1:0];
   

    assign addr_ready = 1'b1;

    always @(posedge clk) begin
        if (addr_valid == 1'b1) begin
            data_out <= mem_blk[addr_in];
            data_valid <= 1'b1;
        end
    end

endmodule
