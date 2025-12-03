#include "Varithmetic_predicates_binary.h"
#include "verilated.h"

#include <memory>
#include <iostream>
int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Varithmetic_predicates_binary> top{new Varithmetic_predicates_binary{contextp.get(), "TOP"}};

    std::cout << "Set initial settings" << std::endl;

    top->A = 50;
    top->B = -25;

    contextp->timeInc(1);
    top->eval();

    /*
    output reg A_eq_B,

    output reg A_lt_B_unsigned,
    output reg A_lte_B_unsigned,
    output reg A_gt_B_unsigned,
    output reg A_gte_B_unsigned,

    output reg A_lt_B_signed,
    output reg A_lte_B_signed,
    output reg A_gt_B_signed,
    output reg A_gte_B_signed
    */

    VL_PRINTF("[%" PRId64 "] A = %" PRId32 " B = %" PRId32 " A_eq_B = %x A_lt_B_unsigned = %x A_lte_B_unsigned = %x A_gt_B_unsigned = %x \
        A_gte_B_unsigned = %x A_lt_B_signed = %x A_lte_B_signed = %x A_gt_B_signed = %x A_gte_B_signed = %x \n",
    contextp->time(), top->A, top->B, top->A_eq_B, top->A_lt_B_unsigned, top->A_lte_B_unsigned, top->A_gt_B_unsigned, top->A_gte_B_unsigned,
    top->A_lt_B_signed, top->A_lte_B_signed, top->A_gt_B_signed, top->A_gte_B_signed);

    top->final();

    contextp->statsPrintSummary();
    return 0;
}