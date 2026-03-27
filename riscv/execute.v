`include "dyadic_boolean_operations.vh"
`include "opcode_masks.vh"

`default_nettype none
module execute 
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
    parameter OP_WIDTH = 7,
    `include "rv_widths.vh"
)
(
    input wire			    clk,
    input wire                      reset,
    output reg			    branch_flush,
    output reg [ADDR_WIDTH-1:0]	    branch_pc,

    input wire [WORD_WIDTH-1:0]	    immediate_in,
    input wire [WORD_WIDTH-1:0]	    rs1_val_in,	  // Values from registers will be fed in via the decode stage from either reg file or register bypass
    input wire [WORD_WIDTH-1:0]	    rs2_val_in,

    input wire [REG_ADDR_WIDTH-1:0] rd_addr_in,
    output reg [WORD_WIDTH-1:0]	    rd_val_out,
    output reg [REG_ADDR_WIDTH-1:0] rd_addr_out,

    input wire [6:0]		    funct7,
    input wire [2:0]		    funct3,

    input wire			    alusrc_a,	  // 0 instruction address, 1 register value
    input wire			    alusrc_b,	  // 0 immediate, 1 register value
    input wire			    addr_offset_from_reg,
    input wire [MEM_OP_WIDTH-1:0]   load_store_op_in,
    output reg [MEM_OP_WIDTH-1:0]   load_store_op_out,
    input wire [1:0]		    is_branch_op, // 01 branch, 10 jump op, 00 none
    input wire [ALU_OPS_WIDTH-1:0]  alu_op,

    input wire [ADDR_WIDTH-1:0]	    addr_offset_in,
    input wire [ADDR_WIDTH-1:0]	    instr_address_in,
    input wire			    branch_taken_in,

    output reg [ADDR_WIDTH-1:0]	    mem_addr_out,

    input wire			    decode_valid,
    output reg			    execute_ready,

    input wire			    memory_ready,
    output reg			    execute_valid
);
    `include "rv_internal_ops.vh"

    wire [WORD_WIDTH-1:0]    immediate_in_r;
    wire [WORD_WIDTH-1:0]    rs1_val_in_r;
    wire [WORD_WIDTH-1:0]    rs2_val_in_r;
    wire [6:0]		     funct7_r;
    wire [2:0]		     funct3_r;
    wire		     alusrc_a_r;
    wire		     alusrc_b_r;
    wire		     addr_offset_from_reg_r;
    wire [1:0]		     is_branch_op_r;
    wire [ALU_OPS_WIDTH-1:0] alu_op_r;
    wire [ADDR_WIDTH-1:0]    addr_offset_in_r;
    wire [ADDR_WIDTH-1:0]    instr_address_in_r;
    wire		     branch_taken_in_r;

    localparam INPUT_WIDTH = (WORD_WIDTH * 3) + REG_ADDR_WIDTH + 16 + MEM_OP_WIDTH + ALU_OPS_WIDTH + (ADDR_WIDTH * 2);

    // Clock in all input data - skid if pipeline stages after this one stall.
   
    skid_buffer
    #(
        .DATA_WIDTH(INPUT_WIDTH)
    )
    skid_buffer_in
    (
       	.clk(clk),
	.reset(reset),
	.i_valid(decode_valid),
	.i_ready(execute_ready),
	.o_valid(execute_valid),
	.o_ready(memory_ready),
	.i_data({immediate_in, 
		 rs1_val_in,
		 rs2_val_in,
		 rd_addr_in, 
		 funct7,
		 funct3,
		 alusrc_a,
		 alusrc_b,
		 addr_offset_from_reg,
		 load_store_op_in,
		 is_branch_op,
		 alu_op,
		 addr_offset_in,
		 instr_address_in,
		 branch_taken_in}),
	.o_data({immediate_in_r,
		 rs1_val_in_r,
		 rs2_val_in_r,
		 rd_addr_out,
		 funct7_r,
		 funct3_r,
		 alusrc_a_r,
		 alusrc_b_r,
		 addr_offset_from_reg_r,
		 load_store_op_out,
		 is_branch_op_r,
		 alu_op_r,
		 addr_offset_in_r,
		 instr_address_in_r,
		 branch_taken_in_r}) 
     );

    reg [WORD_WIDTH-1:0] alu_selector_a;
    reg [WORD_WIDTH-1:0] alu_selector_b;
   

    always @(*) begin
        alu_selector_a = (alusrc_a_r == 1'b1) ? rs1_val_in_r : instr_address_in_r; 
        alu_selector_b = (alusrc_b_r == 1'b1) ? rs2_val_in_r : immediate_in_r;
    end

    reg shift_direction;
    reg logical_or_arithmetic;
    reg [`DYADIC_TABLE_WIDTH-1:0] boolean_op;

    always @(*) begin
        shift_direction = (funct3_r == `FUNCT3_SLLI); // SLL == SLLI - shift direction 1 == left
        logical_or_arithmetic = (funct7_r == `FUNCT7_SRA); // SRA == SRAI (imm specialization) - 1 is Arithmetic

        casez (funct3_r)
            `FUNCT3_XOR: begin boolean_op = `DYADIC_A_XOR_B; end
            `FUNCT3_OR:  begin boolean_op = `DYADIC_A_OR_B; end
            `FUNCT3_AND: begin boolean_op = `DYADIC_A_AND_B; end
            default: begin boolean_op = `DYADIC_ZERO; end
        endcase
    end

    reg lt_signed = 1'b0;
    reg lt_unsigned = 1'b0;
    reg gte_signed = 1'b0;
    reg gte_unsigned = 1'b0;
    reg equal = 1'b0;
    reg not_equal = 1'b0;

    arithmetic_predicates_binary
    #(
        .WORD_WIDTH(WORD_WIDTH)
    )
    predicates_unit
    (
        .A(alu_selector_a),
        .B(alu_selector_b),

        .A_lt_B_signed(lt_signed),
        .A_lt_B_unsigned(lt_unsigned),
        .A_gte_B_signed(gte_signed),
        .A_gte_B_unsigned(gte_unsigned),
        .A_eq_B(equal),
        .A_gt_B_unsigned(),
        .A_lte_B_signed(),
        .A_gt_B_signed(),
        .A_lte_B_unsigned()
    );

    always @(*) begin
        not_equal = !equal;
    end

    reg [WORD_WIDTH-1:0] boolean_op_out;

    dyadic_boolean_operator
    #(
        .WORD_WIDTH(WORD_WIDTH)
    )
    boolean_ops
    (
        .A(alu_selector_a),
        .B(alu_selector_b),
        .truth_table(boolean_op),
        .result(boolean_op_out)
    );

    reg [WORD_WIDTH-1:0] add_sub_out;

    binary_add_sub
    #(
        .WORD_WIDTH(WORD_WIDTH)
    )
    add_sub_unit
    (
        .add_sub((alu_op_r == ALU_SUB)),
        .carry_in(1'b0),
        .A(alu_selector_a),
        .B(alu_selector_b),
        .sum(add_sub_out),
        .carries(),
        .overflow(),
        .carry_out()
    );

    reg [WORD_WIDTH-1:0] shift_out;
    reg [4:0] shift_amount;

    always @(*) begin
        shift_amount = immediate_in_r[4:0];
    end

    barrel_shifter
    #(
        .WORD_WIDTH(WORD_WIDTH)
    )
    shifter
    (
        .data_in(alu_selector_a),
        .shift_amount(shift_amount),
        .shift_dir(shift_direction),
        .shift_or_rotate(1'b0),
        .logi_or_arith(logical_or_arithmetic),

        .data_out(shift_out)
    );

    // Decide on the output - register the output as everything up until this point is combinatorial from outside of the module (so we can do register bypassing)

    reg branch_flush_out_c = 1'b0; // Decide if we need to take the branch in the execute unit & flush the pipeline
    reg branch_should_take = 1'b0; // Should we take the branch based on the compare we did
    reg branch_taken_is_not_same = 1'b0; // Is the branch taken value in different from whether we decide to take the branch? If it is we should branch.
    reg is_jump_and_not_taken = 1'b0; // If we have a jump op and we didn't take it in the fetch unit (JALR)
    reg [ADDR_WIDTH-1:0] address_target_c = {ADDR_WIDTH{1'b0}}; // This reg is used for branch address & load/store addresses
    reg [ADDR_WIDTH-1:0] branch_pc_c = {ADDR_WIDTH{1'b0}};

    always @(*) begin
        address_target_c = ((addr_offset_from_reg_r == 1'b1) ? rs1_val_in_r : instr_address_in_r) + addr_offset_in_r;

        case(alu_op)
            ALU_EQ: begin branch_should_take = (equal == 1'b1); end
            ALU_NEQ: begin branch_should_take = (not_equal == 1'b1); end
            ALU_LT: begin branch_should_take = (lt_signed == 1'b1); end
            ALU_LTU: begin branch_should_take = (lt_unsigned == 1'b1); end
            ALU_GTE: begin branch_should_take = (gte_signed == 1'b1); end
            ALU_GTEU: begin branch_should_take = (gte_unsigned == 1'b1); end
            default: begin branch_should_take = 1'b0; end
        endcase

        branch_taken_is_not_same = branch_should_take != branch_taken_in_r; // If it's a branch and we did the opposite in the fetch unit then do the branch, don't branch again if we already did

        is_jump_and_not_taken = (is_branch_op_r == 2'b10) ? (branch_taken_in_r == 1'b0) : 1'b0; // If it's a jump op & we didn't take the jump in the fetch unit, take the jump now and flush

        branch_flush_out_c = (branch_taken_is_not_same == 1'b1) && (is_branch_op_r == 2'b01) || (is_jump_and_not_taken == 1'b1);
        branch_pc_c = (branch_flush_out_c == 1'b1) ? address_target_c : {ADDR_WIDTH{1'b0}};
    end

    reg [WORD_WIDTH-1:0] rd_val_out_c;

    always @(*) begin
        case (alu_op)
            ALU_ADD  : begin rd_val_out_c = add_sub_out; end
            ALU_SUB  : begin rd_val_out_c = add_sub_out; end
            ALU_SLL  : begin rd_val_out_c = shift_out; end
            ALU_SRL  : begin rd_val_out_c = shift_out; end
            ALU_SRA  : begin rd_val_out_c = shift_out; end
            ALU_OR   : begin rd_val_out_c = boolean_op_out; end
            ALU_AND  : begin rd_val_out_c = boolean_op_out; end
            ALU_XOR  : begin rd_val_out_c = boolean_op_out; end
            ALU_LT   : begin rd_val_out_c = {{WORD_WIDTH-1{1'b0}}, lt_signed}; end
            ALU_LTU  : begin rd_val_out_c = {{WORD_WIDTH-1{1'b0}}, lt_unsigned}; end
            default  : begin rd_val_out_c = {WORD_WIDTH{1'b0}}; end
        endcase
    end // always @ (*)

   reg [WORD_WIDTH-1:0] val_out_store_or_rd; // If we're doing a memory store then the value out should be the value to store, otherwise output the value to go into register rd

   always @(*) begin
      casez (load_store_op_in)
	MEM_STORE_B: begin val_out_store_or_rd = rs2_val_in; end
	MEM_STORE_H: begin val_out_store_or_rd = rs2_val_in; end
	MEM_STORE_W: begin val_out_store_or_rd = rs2_val_in; end
	default: begin val_out_store_or_rd = rd_val_out_c; end
      endcase // casez (load_store_op_in)

      rd_val_out = val_out_store_or_rd;
      branch_pc = branch_pc_c;
      branch_flush = branch_flush_out_c;
      mem_addr_out = address_target_c;
   end

endmodule
