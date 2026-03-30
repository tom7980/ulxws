`default_nettype none

module instruction_decoder
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
    parameter OP_WIDTH = 7,

    `include "rv_widths.vh"
)
(
    input wire clk,
    input wire branch_flush, // Flush is reset (flush on branch taken)

    // Input from fetch stage
    input wire [WORD_WIDTH-1:0] instr,
    input wire [ADDR_WIDTH-1:0] instr_address_in, // Keep track of current instruction address for exceptions & branch miss predict
    input wire branch_taken_in,
    input wire fetch_valid,
    output reg decode_ready,

    // Output to execute stage
    output reg [WORD_WIDTH-1:0] immediate_out,
    output reg [REG_ADDR_WIDTH-1:0] rs1_out,
    output reg [REG_ADDR_WIDTH-1:0] rs2_out,
    output reg [REG_ADDR_WIDTH-1:0] rd_out,

    output reg [OP_WIDTH-1:0] opcode,
    output reg [6:0] funct7,
    output reg [2:0] funct3,

    output reg alusrc_a, // 0 instruction address, 1 register value
    output reg alusrc_b, // 0 immediate, 1 register value
    output reg [MEM_OP_WIDTH-1:0] load_store_op,
    output reg [ADDR_WIDTH-1:0] addr_offset_out,
    output reg addr_offset_from_reg,
    output reg [1:0] is_branch_op, // 01 branch, 10 jump op, 00 none
    output reg [ALU_OPS_WIDTH-1:0] alu_op,

    output reg [ADDR_WIDTH-1:0] instr_address_out,
    output reg branch_taken_out,

    output reg decode_valid,
    input wire execute_ready,
    output reg illegal_instruction_exception
);
    `include "opcode_masks.vh"
    `include "rv_internal_ops.vh"

    // ============= Register Signals In & Out for pipelining ============= //

    wire [WORD_WIDTH-1:0] instruction_r;

    localparam NOP = 32'b00000000000000000000000000010011;

    // Buffer all incoming data in a skid buffer for stalls
    skid_buffer
    #(
        .DATA_WIDTH(WORD_WIDTH + ADDR_WIDTH + 1),
	.RESET_VALUE({NOP, {ADDR_WIDTH{1'b0}}, 1'b0}) // Set instr to NOP on branch flush
    )
    skid_buffer_in
    (
	.clk(clk),
	.reset(branch_flush),
	.i_valid(fetch_valid),
	.i_ready(decode_ready),
	.o_valid(decode_valid),
	.o_ready(execute_ready),
	.i_data({instr, instr_address_in, branch_taken_in}),
	.o_data({instruction_r, instr_address_out, branch_taken_out})
    );

    // ============= Part Decodes ============= //

    always @(*) begin
        funct7 = instruction_r[31:25];
        funct3 = instruction_r[14:12];
        opcode = instruction_r[6:0];
    end

    // ============= Decode Immediates ============= //

    reg [WORD_WIDTH-1:0] imm_r;
    reg [WORD_WIDTH-1:0] imm_i;
    reg [WORD_WIDTH-1:0] imm_s;
    reg [WORD_WIDTH-1:0] imm_b;
    reg [WORD_WIDTH-1:0] imm_u;
    reg [WORD_WIDTH-1:0] imm_j;

    reg sign_in = instruction_r[31];

    always @(*) begin
        imm_r = {WORD_WIDTH{1'b0}};
        imm_i = {{WORD_WIDTH-11{(sign_in == 1'b1)}}, instruction_r[30:20]};
        imm_s = {{WORD_WIDTH-11{(sign_in == 1'b1)}}, instruction_r[30:25], instruction_r[11:7]};
        imm_b = {{WORD_WIDTH-12{(sign_in == 1'b1)}}, instruction_r[7], instruction_r[30:25], instruction_r[11:8], 1'b0};
        imm_u = {sign_in, instruction_r[30:20], instruction_r[19:12], {12{1'b0}}};
        imm_j = {{WORD_WIDTH-20{(sign_in == 1'b1)}}, instruction_r[19:12], instruction_r[20], instruction_r[30:25], instruction_r[24:21], 1'b0};
    end

    localparam alusrca_rs1 = 1'b1;
    localparam alusrca_addr = 1'b0;

    localparam alusrcb_rs2 = 1'b1;
    localparam alusrcb_imm = 1'b0;

    always @(*) begin

        rs1_out = instruction_r[19:15];
        rs2_out = instruction_r[24:20];
        rd_out = instruction_r[11:7];
        load_store_op = MEM_NO_OP;
        addr_offset_from_reg = 1'b0;
        is_branch_op = 2'b0;
        alusrc_a = alusrca_rs1;
        alusrc_b = alusrcb_rs2;
        immediate_out = imm_r;
        addr_offset_out = {ADDR_WIDTH{1'b0}};
        alu_op = ALU_ADD;

        casez (instruction_r) 
            `OP_BEQ    : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_EQ; end
            `OP_BNE    : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_NEQ; end
            `OP_BLT    : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_LT; end
            `OP_BGE    : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_GTE; end
            `OP_BLTU   : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_LTU; end
            `OP_BGEU   : begin is_branch_op = 2'b01; rd_out = 5'b0; addr_offset_out = imm_b; alu_op = ALU_GTEU; end
            `OP_JALR   : begin is_branch_op = 2'b10; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; immediate_out = 32'h4; rs2_out = 5'b0; alusrc_a = alusrca_addr; alusrc_b = alusrcb_imm; end
            `OP_JAL    : begin is_branch_op = 2'b10; addr_offset_out = imm_j; immediate_out = 32'h4; rs2_out = 5'b0; alusrc_a = alusrca_addr; alusrc_b = alusrcb_imm; end
            `OP_LUI    : begin immediate_out = imm_u; rs1_out = 5'b0; rs2_out = 5'b0; alusrc_b = alusrcb_imm; end
            `OP_AUIPC  : begin immediate_out = imm_u; alusrc_a = alusrca_addr; alusrc_b = alusrcb_imm; rs1_out = 5'b0; rs2_out = 5'b0; end
            `OP_ADDI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_ADD; end
            `OP_SLLI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_SLL; end
            `OP_SLTI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_LT;  end
            `OP_SLTIU  : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_LTU; end
            `OP_XORI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_XOR;  end
            `OP_SRLI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_SRL;  end
            `OP_SRAI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_SRA;  end
            `OP_ORI    : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_OR;   end
            `OP_ANDI   : begin immediate_out = imm_i; alusrc_b = alusrcb_imm; rs2_out = 5'b0; alu_op = ALU_AND;  end
            `OP_ADD    : begin alu_op = ALU_ADD;  end
            `OP_SUB    : begin alu_op = ALU_SUB;  end
            `OP_SLL    : begin alu_op = ALU_SLL;  end
            `OP_SLT    : begin alu_op = ALU_LT;   end
            `OP_SLTU   : begin alu_op = ALU_LTU;  end
            `OP_XOR    : begin alu_op = ALU_XOR;  end
            `OP_SRL    : begin alu_op = ALU_SRL;  end
            `OP_SRA    : begin alu_op = ALU_SRA;  end
            `OP_OR     : begin alu_op = ALU_OR;   end
            `OP_AND    : begin alu_op = ALU_AND;  end
            `OP_LB     : begin load_store_op = MEM_LOAD_B; rs2_out = 5'b0; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; end
            `OP_LH     : begin load_store_op = MEM_LOAD_H; rs2_out = 5'b0; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; end
            `OP_LW     : begin load_store_op = MEM_LOAD_W; rs2_out = 5'b0; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; end
            `OP_LBU    : begin load_store_op = MEM_LOAD_BU; rs2_out = 5'b0; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; end
            `OP_LHU    : begin load_store_op = MEM_LOAD_HU; rs2_out = 5'b0; addr_offset_from_reg = 1'b1; addr_offset_out = imm_i; end
            `OP_SB     : begin load_store_op = MEM_STORE_B; addr_offset_from_reg = 1'b1; rd_out = 5'b0; addr_offset_out = imm_s; end
            `OP_SH     : begin load_store_op = MEM_STORE_H; addr_offset_from_reg = 1'b1; rd_out = 5'b0; addr_offset_out = imm_s; end
            `OP_SW     : begin load_store_op = MEM_STORE_W; addr_offset_from_reg = 1'b1; rd_out = 5'b0; addr_offset_out = imm_s; end
            `OP_FENCE  : begin rs2_out = 5'b0; end
        endcase        
    end


endmodule
