`default_nettype none

module instruction_fetch
#(
    parameter WORD_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter REG_ADDR_WIDTH = 5,
    parameter RESET_ADDR = 32'h00000000
)
(
    input wire clk,
    
    // Address out
    output reg [ADDR_WIDTH-1:0] mem_addr_out,
    output reg fetch_addr_valid,
    input wire mem_addr_ready,

    // Instruction in
    input wire [WORD_WIDTH-1:0] instr_in,
    output reg fetch_instr_in_ready,
    input wire mem_instr_in_valid,

    // Instruction out
    output reg [WORD_WIDTH-1:0] instr_out,
    output reg [ADDR_WIDTH-1:0] decode_addr_out,
    output reg fetch_instr_out_valid,
    input wire decode_ready,
    output reg branch_taken,

    // Branch PC in
    input wire branch_flush, // Flush on branch, this may be due to a miss predict or just a regular branch
    input wire [ADDR_WIDTH-1:0] branch_pc_in
);

    localparam NOP = 32'b00000000000000000000000000010011; // Use NOP as a bubble for flush to prevent illegal instruction traps on flush

    reg [WORD_WIDTH-1:0] instr_buf_one = NOP;
    reg [ADDR_WIDTH-1:0] addr_buf_one = NOP;

    // reg [WORD_WIDTH-1:0] instr_buf_two = NOP;
    // reg [ADDR_WIDTH-1:0] addr_buf_two = NOP;

    always @(*) begin
        instr_out = instr_buf_one; // Insert NOP on a branch flush
        decode_addr_out = addr_buf_one;
    end

    skid_buffer
    #(
        .DATA_WIDTH(WORD_WIDTH + ADDR_WIDTH),
	.RESET_VALUE({NOP, {ADDR_WIDTH{1'b0}}})
    )
    skid_input_r
    (
	.clk(clk),
	.reset(branch_flush),
	.i_valid(mem_instr_in_valid),
	.i_ready(fetch_instr_in_ready),
	.o_valid(fetch_instr_out_valid),
	.o_ready(decode_ready),
	.i_data({instr_in, mem_addr_out}),
	.o_data({instr_buf_one, addr_buf_one})
     );

    // PC selection
    reg [ADDR_WIDTH-1:0] pc_next_comb;
    reg [ADDR_WIDTH-1:0] pc_addr_buf;
    reg [ADDR_WIDTH-1:0] next_pc_or_external_branch;
   
   
    always @(*) begin
        // Next PC is either branch PC from execute (in which case we flush the pipeline), predicted address + 4, or current PC + 4.
        pc_next_comb = (branch_taken == 1'b1) ? (predicted_branch_address + 32'h4) : (pc_addr_buf + 32'h4);

        // Current requested address is either predicted branch address in the case of predicted branch, or the stored next calculated PC.
        mem_addr_out = (branch_taken == 1'b1) ? predicted_branch_address : pc_addr_buf;

	next_pc_or_external_branch = (branch_flush == 1'b1) ? branch_pc_in : pc_next_comb;
    end

    skid_buffer
    #(
        .DATA_WIDTH(WORD_WIDTH),
	.RESET_VALUE(RESET_ADDR)
    )
    skid_pc_buf
    (
       	.clk(clk),
	.reset(1'b0),
	.i_valid(1'b1), // This input is always valid in this stage
	.i_ready(),
	.o_valid(fetch_addr_valid),
	.o_ready(mem_addr_ready), // We can keep fetching instructions if the decode stage is stalled but we can't if the memory controller is stalled
	.i_data(next_pc_or_external_branch),
	.o_data(pc_addr_buf)
     );

    // Branch Prediction

    reg is_jal;
    reg is_branch;
    
    wire [ADDR_WIDTH-1:0] imm_jal = {{WORD_WIDTH-20{instr_buf_one[31]}}, instr_buf_one[19:12], instr_buf_one[20], instr_buf_one[30:21], 1'b0};
    wire [ADDR_WIDTH-1:0] imm_branch = {{WORD_WIDTH-12{instr_buf_one[31]}}, instr_buf_one[7], instr_buf_one[30:25], instr_buf_one[11:8], 1'b0};

    reg [ADDR_WIDTH-1:0] predicted_branch_address = 32'd0;
    reg branch_backwards = 1'b0;

    reg [ADDR_WIDTH-1:0] is_branch_offset;
    reg partial_branch_taken;

    always @(*) begin
        is_jal = (instr_buf_one[6:0] == 7'b1101111);
        is_branch = (instr_buf_one[6:0] == 7'b1100011);

        branch_backwards = instr_buf_one[31]; // Branch is backwards if offset has negative sign

        is_branch_offset = (is_branch == 1'b1) ? imm_branch : 32'h00000000;

        predicted_branch_address = addr_buf_one + ((is_jal == 1'b1) ? imm_jal : is_branch_offset); // Predicted address is the current instruction address plus branch offset

        partial_branch_taken = ((branch_backwards == 1'b1) & (is_branch == 1'b1)) ? 1'b1 : 1'b0;
        branch_taken = (is_jal == 1'b1) ? 1'b1 : partial_branch_taken;
    end

endmodule
