#include "Vbarrel_shifter.h"
#include "verilated.h"

#include <memory>
#include <iostream>
int main(int argc, char** argv) {

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->commandArgs(argc, argv);
    std::unique_ptr<Vbarrel_shifter> top{new Vbarrel_shifter{contextp.get(), "TOP"}};

    std::cout << "Set initial settings" << std::endl;

    top->clk = 0;
    std::cout << "Set Clk" << std::endl;
    // top->data_in = 0b11111111111111111111111111111111;
    top->data_in = 0b10000000000000000000000000000001;
    std::cout << "Set datain" << std::endl;
    top->shift_amount = 0b00000;
    std::cout << "Set shiftamount" << std::endl;
    top->shift_dir = 1; // 0 Right - 1 Left
    std::cout << "Set direction" << std::endl;
    top->shift_or_rotate = 1; // 0 Shift - 1 Rotate
    std::cout << "Set shift or rotate" << std::endl;
    top->logi_or_arith = 0; // 0 logical - 1 arith
    std::cout << "Set logical or arith" << std::endl;

    std::cout << "Done initial settings" << std::endl;

    for (size_t i = 0; i < 65; i++) {

        contextp->timeInc(1);
        
        top->clk = !top->clk;

        if (!top->clk) {
            // top->data_in = top->data_in + 1;
            top->shift_amount = i / 2;
            // top->shift_dir = !top->shift_dir; // 0 Right - 1 Left
            // top->shift_or_rotate = !top->shift_or_rotate; // 0 Shift - 1 Rotate
            // top->logi_or_arith = !top->logi_or_arith; // 0 logical - 1 arith
        }

        top->eval();

        if(top->clk) {

            VL_PRINTF("[%.5" PRId64 "] clk=%x data_in=%.32b shift_amount=%.5b data_out=%.32b shift_dir=%x shift_or_rotate=%x logi_arith=%x \n",
            contextp->time(), top->clk, top->data_in, top->shift_amount, top->data_out, top->shift_dir, top->shift_or_rotate, top->logi_or_arith);

        }  
    }

    top->final();

    contextp->statsPrintSummary();
    return 0;
}