#include "Vbinary_add_sub.h"
#include "verilated.h"

#include <memory>
#include <iostream>
int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Vbinary_add_sub> top{new Vbinary_add_sub{contextp.get(), "TOP"}};

    std::cout << "Set initial settings" << std::endl;

    top->add_sub = 0;
    top->carry_in = 0;
    top->A = 10;
    top->B = -25;

    contextp->timeInc(1);
    top->eval();

    VL_PRINTF("[%" PRId64 "] A =% " PRId32 " B =% " PRId32 " sum =% " PRId32 " carry_out = %x carries = %b overflow = %x \n",
    contextp->time(), top->A, top->B, top->sum, top->carry_out, top->carries, top->overflow);

    top->final();

    contextp->statsPrintSummary();
    return 0;
}