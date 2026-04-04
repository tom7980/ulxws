`default_nettype none

module top
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
    parameter OP_WIDTH = 7,
    `include "rv_widths.vh"
)
(
    input wire clk,

    output reg [ADDR_WIDTH-1:0] fetch_mem_addr_out,
    output reg fetch_addr_valid,
    input wire mem_addr_ready,

    input wire [WORD_WIDTH-1:0] fetch_instr_in,
    output reg fetch_instr_in_ready,
    input wire instr_in_valid,

    

);

   wire [WORD_WIDTH-1:0] fetch_instr_out;
   wire [ADDR_WIDTH-1:0] fetch_decode_addr_out;
   wire			 fetch_instr_out_valid;
   wire			 branch_taken;

   wire			 decode_ready;
   wire			 branch_flush_signal;
   wire [ADDR_WIDTH-1:0] branch_pc_addr;

   instruction_fetch
   #(
       .WORD_WIDTH(WORD_WIDTH),
       .ADDR_WIDTH(ADDR_WIDTH),
       .REG_ADDR_WIDTH(REG_ADDR_WIDTH)
   )
   instruction_fetch_module
   (
       .clk(clk),
       .mem_addr_out(fetch_mem_addr_out),
       .fetch_addr_valid(fetch_addr_valid),
       .mem_addr_ready(mem_addr_ready),
       .instr_in(fetch_instr_in),
       .fetch_instr_in_ready(fetch_instr_in_ready),
       .mem_instr_in_valid(instr_in_valid),
       .instr_out(fetch_instr_out),
       .decode_addr_out(fetch_decode_addr_out),
       .fetch_instr_out_valid(fetch_instr_out_valid),
       .branch_taken(branch_taken),
       .decode_ready(decode_ready),
       .branch_flush(branch_flush_signal),
       .branch_pc_in(branch_pc_addr)
    );

    wire [WORD_WIDTH-1:0]     immediate_out;
    wire [REG_ADDR_WIDTH-1:0] rs1_out;
    wire [REG_ADDR_WIDTH-1:0] rs2_out;
    wire [REG_ADDR_WIDTH-1:0] rd_out;
    wire [OP_WIDTH-1:0]	      opcode;
    wire [6:0]		      funct7;
    wire [2:0]		      funct3;
    wire		      alusrc_a;
    wire		      alusrc_b;
    wire [MEM_OP_WIDTH-1:0]   load_store_op;
    wire [ADDR_WIDTH-1:0]     addr_offset_out;
    wire		      addr_offset_from_reg;
    wire [1:0]		      is_branch_op;    
    wire [ALU_OPS_WIDTH-1:0]  alu_op;
    wire [ADDR_WIDTH-1:0]     instr_address_out;
    wire		      branch_taken_out;
    wire		      decode_valid;
    wire		      execute_ready;
    wire		      illegal_instruction_exception;

   instruction_decoder
   #(
       .WORD_WIDTH(WORD_WIDTH),
       .ADDR_WIDTH(ADDR_WIDTH),
       .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
       .OP_WIDTH(OP_WIDTH)
   )
   decoder_module
   (
       .clk(clk),
       .branch_flush(branch_flush_signal),
       .instr(fetch_instr_out),
       .instr_address_in(fetch_decode_addr_out),
       .branch_taken_in(branch_taken),
       .fetch_valid(fetch_instr_out_valid),
       .decode_ready(decode_ready),
       .immediate_out(immediate_out),
       .rs1_out(rs1_out),
       .rs2_out(rs2_out),
       .rd_out(rd_out),
       .opcode(opcode),
       .funct7(funct7),
       .funct3(funct3),
       .alusrc_a(alusrc_a),	     
       .alusrc_b(alusrc_b),	     
       .load_store_op(load_store_op),
       .addr_offset_out(addr_offset_out),
       .addr_offset_from_reg(addr_offset_from_reg),
       .is_branch_op(is_branch_op),    
       .alu_op(alu_op),
       .instr_address_out(instr_address_out),
       .branch_taken_out(branch_taken_out),
       .decode_valid(decode_valid),
       .execute_ready(execute_ready),
       .illegal_instruction_exception(illegal_instruction_exception)
    );

   wire [WORD_WIDTH-1:0]     rd_val_out_ex;
   wire [REG_ADDR_WIDTH-1:0] rd_addr_out_ex;

   wire [MEM_OP_WIDTH-1:0]   load_store_op_out_ex;
   wire [ADDR_WIDTH-1:0]     mem_addr_out_ex;

   wire			     execute_valid;
   wire			     memory_ready;
   
   execute
   #(
       .WORD_WIDTH(WORD_WIDTH),
       .ADDR_WIDTH(ADDR_WIDTH),
       .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
       .OP_WIDTH(OP_WIDTH)
   )
   execute_module
   (
    /*AUTOINST*/
    // Outputs
    .branch_flush			(branch_flush_signal),
    .branch_pc				(branch_pc_addr),
    .rd_val_out				(rd_val_out_ex),
    .rd_addr_out			(rd_addr_out_ex),
    .load_store_op_out			(load_store_op_out_ex),
    .mem_addr_out			(mem_addr_out_ex),
    .execute_ready			(execute_ready),
    .execute_valid			(execute_valid),
    // Inputs
    .clk				(clk),
    .reset				(0'b0),
    .immediate_in			(immediate_out),
    .rs1_val_in				(rs1_out),
    .rs2_val_in				(rs2_out),
    .rd_addr_in				(rd_out),
    .funct7				(funct7),
    .funct3				(funct3),
    .alusrc_a				(alusrc_a),
    .alusrc_b				(alusrc_b),
    .addr_offset_from_reg		(addr_offset_from_reg),
    .load_store_op_in			(load_store_op),
    .is_branch_op			(is_branch_op),
    .alu_op				(alu_op),
    .addr_offset_in			(addr_offset_out),
    .instr_address_in			(instr_address_out),
    .branch_taken_in			(branch_taken_in),
    .decode_valid			(decode_valid),
    .memory_ready			(memory_ready)
   );
   
   wire [WORD_WIDTH-1:0] rd_val_out_mem;
   wire	[REG_ADDR_WIDTH-1:0] rd_addr_out_mem;

   wire	[ADDR_WIDTH-1:0] controller_addr_out;
   wire	[WORD_WIDTH-1:0] controller_data_out;
   wire [WORD_WIDTH-1:0] controller_data_in;
   wire			 controller_we;
   
   

endmodule : top

