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

    top->clk = 0;

    

    // Check all memory Ops
    // Check pipeline outputs (valid & ready signals)
    // Check output of load ops


    
    top->final();

    contextp->statsPrintSummary();
    return 0;
}
