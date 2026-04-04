`default_nettype none
`include "opcode_masks.vh"

module writeback
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
    `include "rv_widths.vh"
)
(
    input wire			    clk,
    input wire [WORD_WIDTH-1:0]	    rd_val_in_mem,
    input wire [WORD_WIDTH-1:0]     rd_val_in_ex,

    input wire [REG_ADDR_WIDTH-1:0] rd_addr_in_mem,
    input wire [REG_ADDR_WIDTH-1:0] rd_addr_in_ex,

    input wire [REG_ADDR_WIDTH-1:0] rs1_addr_in,

    output reg [WORD_WIDTH-1:0]	    rs1_val_out,

    input wire [REG_ADDR_WIDTH-1:0] rs2_addr_in,

    output reg [WORD_WIDTH-1:0]	    rs2_val_out

);
   
    // This module sits between the rest of the cpu and the reg file, does register
    // bypass for any instructions that might be accessing registers being written

   reg [WORD_WIDTH-1:0] rs1_reg_data;
   reg [WORD_WIDTH-1:0] rs2_reg_data;
   
   register_file
   #(
       .WORD_WIDTH(WORD_WIDTH),
       .ADDR_WIDTH(REG_ADDR_WIDTH)
   )
   registers
   (
       .clk(clk),
       .rd_data(rd_val_in_mem),
       .rd_addr(rd_addr_in_mem),
       .rd_valid(1'b1), // rd in is always valid

       .rs1_addr(rs1_addr_in),
       .rs1_data(rs1_reg_data),
       .rs2_addr(rs2_addr_in),
       .rs2_data(rs2_reg_data)
   );

   always @(*) begin
       rs1_val_out = (rd_addr_in_ex == rs1_addr_in) ? rd_val_in_ex : (rd_addr_in_mem == rs1_addr_in) ? rd_val_in_mem : rs1_reg_data;
       rs2_val_out = (rd_addr_in_ex == rs2_addr_in) ? rd_val_in_ex : (rd_addr_in_mem == rs2_addr_in) ? rd_val_in_mem : rs2_reg_data;
   end

endmodule
