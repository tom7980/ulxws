#include "Vload_store.h"
#include "verilated.h"

#include <memory>
#include <iostream>
#include <vector>
#include <array>

int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Vload_store> top{new Vload_store{contextp.get(), "TOP"}};

    std::cout << "Set initial settings" << std::endl;

    std::vector<uint32_t> instructions = {
        // 0b10101010101010101010000010110111,
        0b00000100000000000000111111101111,
        0b10101010101010101010000100010111,
        0b11111111100111111111111111101111,
        0b10101010101000011000111111100111,
        0b10101010101010101000111111100011,
        0b10101010101010101100111111100011,
        0b10101010101010101101111111100011,
        0b10101010101010101110111111100011,
        0b10101010101010101111111111100011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110000011,
        0b11111111100111111111111111101111,
        0b10101010101010101010111110000011,
        0b10101010101010101010111110100011,
        0b10101010101010101010111110100011,
        0b00000010000000000000111111101111,
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
        0b11111111111111111101110011100011,
        0b10101010101010101010111110110011,
        0b10101010101010101100111111100011,
        0b11111100000111111111111111101111,
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

    top->clk = 0;
    top->mem_addr_ready = 1;
    top->mem_instr_in_valid = 1;
    top->decode_ready = 1;

    top->branch_pc_in = 0;
    top->branch_flush = 0;

    for (size_t i = 0; i < 20; i++) {
        top->instr_in = instructions[top->mem_addr_out >> 2];
        top->clk = 0;
        top->mem_addr_ready = !top->mem_addr_ready;
        top->eval();

        VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    

        top->clk = 1;
        top->eval();
        VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    
    }

    // for(const auto& instruction : instructions) {

    //     top->clk = 0;
    //     top->instr_in = instruction;
    //     contextp->timeInc(1);
    //     top->eval();

    //     top->clk = 1;
    //     contextp->timeInc(1);
    //     top->eval();

    //     VL_PRINTF("[%.1b] Instr_in = %.32b instr_out = %.32b N_Addr = %.32b (%u) Addr_dec = %.32b (%u) Fetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
    //         top->clk, top->instr_in, top->instr_out, top->mem_addr_out, top->mem_addr_out >> 2, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    // }

    VL_PRINTF("===========CHECK FLUSH===========\n\n");

    top->branch_flush = 1;
    top->branch_pc_in = 0b00000100;
    top->instr_in = instructions[top->mem_addr_out >> 2];

    top->clk = 0;
    top->eval();

    VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    
    top-> clk = 1;
    top->eval();

    VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    

    top->clk = 0;
    top->instr_in = instructions[top->mem_addr_out >> 2];
    top->branch_flush = 0;
    top->eval();

    VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    

    top->clk = 1;
    top->eval();

    VL_PRINTF("[%.1b] Instr_in = %.32b N_Addr = %.32b (%u) instr_out = %.32b Instr_Addr = %.32b (%u) \nFetch_addr_valid = %.1b fetch_instr_in_ready = %.1b branch_taken = %.1b\n\n",
            top->clk, top->instr_in, top->mem_addr_out, top->mem_addr_out >> 2, top->instr_out, top->decode_addr_out, top->decode_addr_out >> 2, top->fetch_addr_valid, top->fetch_instr_in_ready, top->branch_taken);
    
    top->final();

    contextp->statsPrintSummary();
    return 0;
}
