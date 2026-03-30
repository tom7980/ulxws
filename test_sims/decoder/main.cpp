#include "Vinstruction_decoder.h"
#include "verilated.h"

#include <memory>
#include <iostream>
#include <vector>
int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Vinstruction_decoder> top{new Vinstruction_decoder{contextp.get(), "TOP"}};

    std::cout << "Set initial settings" << std::endl;

    std::vector<uint32_t> instructions = {
        0b10101010101010101010000010110111,
        0b10101010101010101010000100010111,
        0b10101010101011111000111111101111,
        0b10101010101000011000111111100111,
        0b10101010101010101000111111100011,
        0b10101010101010101100111111100011,
        0b10101010101010101101111111100011,
        0b10101010101010101110111111100011,
        0b10101010101010101111111111100011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110100011,
        0b10101010101010101010111110100011,
        0b10101010101010101010111110100011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110010011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110110011,
        0b10101010101010101010111110001111,
        0b10101010101010101010111110001111,
        0b10101010101010101010111111110011,
        0b10101010101010101010111111110011,
        0b00000000000000000000000000000000,
        0b11111111111111111111111111111111,
        0b10101010101010101010111111111011,
        0b10101010101010101010111111010011,
        0b10101010101010101010111111110001,
    };

    top->instr = 0b10101010101010101010111110110111;
    top->instr_address_in = 0b10101010101010101010111110110111;

    top->clk = 1;

    top->branch_flush = 0;

    top->fetch_valid = 1;
    top->execute_ready = 1;

    top->eval();

    for(const auto& instruction : instructions) {
        for (size_t i = 0; i < 2; i++) {
            contextp->timeInc(1);
            top->clk = !top->clk;

            if(!top->clk) {
                top->instr = instruction;
                top->instr_address_in = instruction;
            }    
            top->eval();

            VL_PRINTF("[%.1b] Instr = %.32b Addr = %.32b imm = %.32b \n Decode Ready = %.1b Op = %.7b funct3 = %.3b funct7 = %.7b Decode Valid = %.1b rs1 = %.5b rs2 = %.5b rd = %.5b IEE = %.1b\n\n",
                top->clk, top->instr, top->instr_address_out, top->immediate_out, top->decode_ready, top->opcode, top->funct3, top->funct7, top->decode_valid, top->rs1_out, top->rs2_out, top->rd_out, top->illegal_instruction_exception);
        }
    }

    for (size_t i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();

        VL_PRINTF("[%.1b] Instr = %.32b Addr = %.32b imm = %.32b \n Decode Ready = %.1b Op = %.7b funct3 = %.3b funct7 = %.7b Decode Valid = %.1b rs1 = %.5b rs2 = %.5b rd = %.5b IEE = %.1b\n\n",
            top->clk, top->instr, top->instr_address_out, top->immediate_out, top->decode_ready, top->opcode, top->funct3, top->funct7, top->decode_valid, top->rs1_out, top->rs2_out, top->rd_out, top->illegal_instruction_exception);
    }

    top->branch_flush = 1;

    for (size_t i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }

    VL_PRINTF("Check Reset Values for Flush\n");

    VL_PRINTF("[%.1b] Instr = %.32b Addr = %.32b imm = %.32b \n Decode Ready = %.1b Op = %.7b funct3 = %.3b funct7 = %.7b Decode Valid = %.1b rs1 = %.5b rs2 = %.5b rd = %.5b IIE = %.1b\n\n",
            top->clk, top->instr, top->instr_address_out, top->immediate_out, top->decode_ready, top->opcode, top->funct3, top->funct7, top->decode_valid, top->rs1_out, top->rs2_out, top->rd_out, top->illegal_instruction_exception);

    // top->decode_ready
    // top->immediate_out
    // top->rs1_out
    // top->rs2_out
    // top->rd_out

    // top->opcode
    // top->funct7
    // top->funct3

    // top->instr_address_out

    // top->decode_valid
    // top->illegal_instruction_exception

    // VL_PRINTF("[%" PRId64 "] A = %" PRId32 " B = %" PRId32 " A_eq_B = %x A_lt_B_unsigned = %x A_lte_B_unsigned = %x A_gt_B_unsigned = %x \
    //     A_gte_B_unsigned = %x A_lt_B_signed = %x A_lte_B_signed = %x A_gt_B_signed = %x A_gte_B_signed = %x \n",
    // contextp->time(), top->A, top->B, top->A_eq_B, top->A_lt_B_unsigned, top->A_lte_B_unsigned, top->A_gt_B_unsigned, top->A_gte_B_unsigned,
    // top->A_lt_B_signed, top->A_lte_B_signed, top->A_gt_B_signed, top->A_gte_B_signed);

    top->final();

    return 0;
}
