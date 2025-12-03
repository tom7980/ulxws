#include "Vinstruction_decoder.h"
#include "Vexecute.h"
#include "verilated.h"
#include "Vinstruction_fetch.h"

#include <memory>
#include <iostream>
#include <vector>
#include <bitset>
int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Vinstruction_fetch> fetch{new Vinstruction_fetch{contextp.get(), "TOP"}};
    std::unique_ptr<Vinstruction_decoder> decode{new Vinstruction_decoder{contextp.get(), "TOP"}};
    std::unique_ptr<Vexecute> execute{new Vexecute{contextp.get(), "TOP"}};

    std::vector<uint32_t> reg_file(32, 0);

    std::cout << "Set initial settings" << std::endl;

    std::vector<uint32_t> instructions = {
        0b00000011111000000000001000010011,
        0b00000001010100000000001010010011,
        0b00000000010100100000010000110011,
        0b00000001010000000000000010010011,
        0b00000001111000000000000100010011,
        0b00000000001000001000000110110011,
        0b00000000110000000000010101101111,
        0b00000000000000000000000000010011,
        0b00000000000000000000000000010011,
        0b00000000000000000000000000010011,
        0b00000000000000000000000000010011
        // 0b00000001000000000000000101101111,
        // 0b00000000110000000000001010010011,
        // 0b00000000110000000000001100010011,
        // 0b00000000010100110000001110110011,
        // 0b00000000010100000000000010010011,
        // 0b00000000010100000000000100010011,
        // 0b00000000001000001000000110110011,
        // 0b00000000001000011001011000010011,
        // 0b00111000000000011010011100010011,
        // 0b00000000000000010000000001100111,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011
        // 0b00000000010100000000000010010011,
        // 0b00000000010100000000000100010011,
        // 0b00000000001000001000000110110011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011,
        // 0b00000000000000000000000000010011 // END ADDI x1 x0 5, ADDI x2 x0 5, ADD x3, x2, x1
        // 0b00000100000000000000111101101111,
        // 0b10101010101010101010000100010111,
        // 0b11111111100111111111110111101111,
        // 0b10101010101000011000111011100111,
        // 0b10101010101010101000101111100011,
        // 0b10101010101010101100110011100011,
        // 0b10101010101010101101111111100011,
        // 0b10101010101010101110111111100011,
        // 0b10101010101010101111111111100011,
        // 0b10101010101010101010111110000011,
        // 0b10101010101010101010111110000011,
        // 0b10101010101010101010111110000011,
        // 0b11111111100111111111000101101111,
        // 0b10101010101010101010111110000011,
        // 0b10101010101010101010111110100011,
        // 0b10101010101010101010111110100011,
        // 0b00000010000000000000000011101111,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110010011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b11111111111111111101110011100011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101100111111100011,
        // 0b11111100000111111111111111101111,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110110011,
        // 0b10101010101010101010111110001111,
        // 0b10101010101010101010111110001111,
        // 0b10101010101010101010111111110011,
        // 0b10101010101010101010111111110011,
        // 0b00000000000000000000000000000000,
        // 0b11111111111111111111111111111111,
        // 0b10101010101010101010111111111011,
        // 0b10101010101010101010111111010011,
        // 0b10101010101010101010111111110001,
    };

    decode->pipeline_stall = 0; // Ignore these for now
    
    fetch->mem_addr_ready = 1;
    fetch->mem_instr_in_valid = 1;

    decode->clk = 0;
    execute->clk = 0;
    fetch->clk = 0;

    fetch->decode_ready = decode->decode_ready;
    decode->execute_ready = execute->execute_ready;

    // Initialise outputs

    decode->eval_step();
    execute->eval_step();
    fetch->eval_step();

    decode->eval_end_step();
    execute->eval_end_step();
    fetch->eval_end_step();

    for(size_t i = 0; i < instructions.size(); i++) {
        decode->clk = 0;
        execute->clk = 0;
        fetch->clk = 0;

        auto instruction = instructions[fetch->mem_addr_out >> 2]; // Shift by two because we're working on 4 bytes boundaries

        fetch->instr_in = instruction;
        fetch->decode_ready = decode->decode_ready;
        
        fetch->branch_flush = execute->branch_flush;
        decode->branch_flush = execute->branch_flush;
        fetch->branch_pc_in = execute->branch_pc;
        
        decode->branch_taken_in = fetch->branch_taken;

        decode->instr = fetch->instr_out;
        decode->instr_address_in = fetch->decode_addr_out;
        decode->fetch_valid = fetch->fetch_instr_out_valid;

        std::bitset<32> instr(instruction);

        std::cout << "Instruction Counter: " << (fetch->mem_addr_out >> 2);
        std::cout << " Decode instr in: " << instr << " ready: " << static_cast<int16_t>(decode->decode_ready) << std::endl;

        execute->immediate_in = decode->immediate_out;
        execute->rs1_val_in = reg_file[decode->rs1_out];
        execute->rs2_val_in = reg_file[decode->rs2_out];
        execute->rd_addr_in = decode->rd_out;

        execute->opcode = decode->opcode;
        execute->funct7 = decode->funct7;
        execute->funct3 = decode->funct3;

        execute->alusrc_a = decode->alusrc_a;
        execute->alusrc_b = decode->alusrc_b;
        execute->load_store_op_in = decode->load_store_op;
        execute->addr_offset_in = decode->addr_offset_out;
        execute->addr_offset_from_reg = decode->addr_offset_from_reg;
        execute->is_branch_op = decode->is_branch_op;
        execute->alu_op = decode->alu_op;

        execute->instr_address_in = decode->instr_address_out;
        execute->branch_taken_in = decode->branch_taken_out;

        execute->decode_valid = decode->decode_valid;
        decode->execute_ready = execute->execute_ready;

        decode->eval_step();
        execute->eval_step();
        fetch->eval_step();

        decode->eval_end_step();
        execute->eval_end_step();
        fetch->eval_end_step();

        decode->clk = 1;
        execute->clk = 1;
        fetch->clk = 1;

        decode->eval_step();
        execute->eval_step();
        fetch->eval_step();

        decode->eval_end_step();
        execute->eval_end_step();
        fetch->eval_end_step();

        decode->clk = 0;
        execute->clk = 0;
        fetch->clk = 0;

        decode->eval_step();
        execute->eval_step();
        fetch->eval_step();

        decode->eval_end_step();
        execute->eval_end_step();
        fetch->eval_end_step();

        std::bitset<7> opcode(decode->opcode);

        std::cout << "--------------------Decoder outputs----------------------------------\n";

        std::cout << "Execute alusrca : " << static_cast<uint16_t>(decode->alusrc_a) << " alusrcb: " << static_cast<uint16_t>(decode->alusrc_b) << std::endl;
        std::cout << "op: " << opcode << " imm: " << static_cast<int32_t>(decode->immediate_out) << " addr offset: " << static_cast<int32_t>(decode->addr_offset_out) << std::endl;
        std::cout << "decode rs1: " << static_cast<int16_t>(decode->rs1_out) << " rs2: " << static_cast<int16_t>(decode->rs2_out) << " rd: " << static_cast<int16_t>(decode->rd_out) << std::endl;
        if(decode->is_branch_op) {
            std::cout << "Jump or Branch: " << static_cast<uint16_t>(decode->is_branch_op) << " Branch distance: " << static_cast<int32_t>(decode->addr_offset_out) << std::endl;
        }

        std::cout << "---------------------Execute Stage Outputs (1 Clock Behind Decode Output)--------------------------" << std::endl;
        std::cout << "RD Out: " << static_cast<int32_t>(execute->rd_val_out) << " RD address: " << static_cast<uint16_t>(execute->rd_addr_out) << std::endl;
        std::cout << "Branch Flush: " << static_cast<uint16_t>(execute->branch_flush) << "\n" << std::endl;

        reg_file[execute->rd_addr_out] = execute->rd_val_out;
    }

    decode->final();
    execute->final();
    fetch->final();

    for (size_t i = 0; i < 32; i ++) {
        std::cout << "x" << i << ": " << reg_file[i] << std::endl;
    }

    contextp->statsPrintSummary();
    return 0;
}