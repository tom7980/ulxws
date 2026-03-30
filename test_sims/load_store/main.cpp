#include "Vload_store.h"
#include "verilated.h"

#include <cstdint>
#include <memory>
#include <iostream>
#include <vector>
#include <array>

enum mem_ops {
  MEM_NO_OP = 0b0000,
  MEM_LOAD_B = 0b0001,
  MEM_LOAD_H = 0b0010,
  MEM_LOAD_W = 0b0011,
  MEM_LOAD_BU = 0b0100,
  MEM_LOAD_HU = 0b0101,
  MEM_STORE_B = 0b0110,
  MEM_STORE_H = 0b0111,
  MEM_STORE_W = 0b1000
};

void print_module_stats(std::unique_ptr<Vload_store> &module) {
  VL_PRINTF(
      "[%.1b] rd_val_out = %.32b | rd_addr_out = %.5b | controller_addr_o = "
      "%.32b | controller_data_o = %.32b | controller_we = %.1b | "
      "mem_controller_valid = %.1b | mem_controller_ready = %.1b | "
      "mem_execute_ready = %.1b | mem_writeback_valid = %.1b \n",
      module->clk, module->rd_val_out, module->rd_addr_out,
      module->controller_addr_o, module->controller_data_o,
      module->controller_we, module->mem_controller_valid,
      module->mem_controller_ready, module->mem_execute_ready,
      module->mem_writeback_valid);  
}

bool test_no_op(std::unique_ptr<Vload_store> &module, std::unique_ptr<VerilatedContext> &contextp) {
  // No Op is writeback straight through
  // rd_val_out = rd_val_in
  // rd_addr_out = rd_addr_in
  // Single cycle
  // mem_writeback_valid = 1
  // mem_execute_ready = 1
  // mem_controller_valid = 0
  // mem_controller_ready = 0

  uint8_t mem_op = MEM_NO_OP;

  module->clk = 0;
  module->rd_val_in = 0b01010101010101010101010101010101;
  module->rd_addr_in = 1;

  module->load_store_op_in = mem_op;

  module->mem_addr_in = 0;

  module->controller_data_i =
      0b00000000000000001111111111111111; // Check this doesn't end up in the
                                          // output

  module->controller_mem_valid =
      1; // Fake incoming data valid - this should be ignored;

  module->controller_mem_ready = 1; // This should also be ignored

  module->execute_mem_valid = 1; // Execute to mem stage is valid we should be
  // in writeback state as mem op is no_op;

  module->writeback_mem_ready =
      1; // Only test the writethrough by specifying writeback as always ready

  contextp->timeInc(1);
  module->eval();

  module->clk = 1; // Clock in the data

  contextp->timeInc(1);
  module->eval();

  module->clk = 0;

  contextp->timeInc(1);
  module->eval();

  // After a single cycle - all the outputs should be in the specified states
  // above.

  VL_PRINTF("rd_val_out = %.32b | rd_addr_out = %.5b | controller_addr_o = "
            "%.32b | controller_data_o = %.32b | controller_we = %.1b | "
            "mem_controller_valid = %.1b | mem_controller_ready = %.1b | "
            "mem_execute_ready = %.1b | mem_writeback_valid = %.1b \n",
            module->rd_val_out, module->rd_addr_out, module->controller_addr_o,
            module->controller_data_o, module->controller_we,
            module->mem_controller_valid, module->mem_controller_ready,
            module->mem_execute_ready, module->mem_writeback_valid);


  if (module->rd_val_out != 0b01010101010101010101010101010101)
    return false;
  if (module->rd_addr_out != 1)
    return false;
  
  return true;
}

bool test_specific_load(std::array<uint32_t, 32> &memory,
                        std::unique_ptr<Vload_store> &module,
                        std::unique_ptr<VerilatedContext> &contextp,
                        uint32_t mem_op, uint32_t expected) {
  module->clk = 0;
  
  module->rd_val_in = 0b01010101010101010101010101010101; // This should be ignored
  module->rd_addr_in = 5; // Should output addr 5

  module->load_store_op_in = mem_op;

  module->mem_addr_in = 10 << 2; // the "memory" is 32 bit aligned so we have to pretend the hardware is returning us the 32bit value at the requested address by shifting the values

  module->execute_mem_valid = 1; // Execute to mem stage is valid we should be
  // in writeback state as mem op is no_op;

  module->writeback_mem_ready =
      1; // Only test the writethrough by specifying writeback as always ready

  module->controller_mem_ready = 1;  

  contextp->timeInc(1);
  module->eval();

  module->clk = 1; // Clock in the data

  contextp->timeInc(1);
  module->eval();

  if ((module->controller_addr_o != (10 << 2)) &&
      (module->mem_controller_valid != 0b1)) {
    VL_PRINTF(
        "Controller output addr incorrect & no transfer request initiated");
    return false;
  }

  if ((module->controller_we != 0)) {
    VL_PRINTF("ERROR: Module request store on load op");
    return false;
  }

  module->clk = 0;

  module->rd_val_in = 0b01010101010101010101010101010101; // This should be ignored while waiting on memory
  module->rd_addr_in = 10; // Should be ignored

  module->load_store_op_in = MEM_NO_OP;

  module->controller_data_i = memory[module->controller_addr_o >> 2];
  module->controller_mem_valid = 1;

  contextp->timeInc(1);
  module->eval();

  module->clk = 1; // Move to wait_load_data state here - one clock after the
                   // data is clocked in, data above is stored in skid buffer because input_data_ready goes low.

  contextp->timeInc(1);
  module->eval();

  if (module->rd_val_out != expected) {
    VL_PRINTF(
        "ERROR: Module loaded wrong value from memory got %.32b expected %.32b \n",
        module->rd_val_out, expected);
    return false;
  }

  if (module->rd_addr_out != 5) {
    VL_PRINTF("ERROR: Module outputting incorrect rd address for load got %.5b \n"
              "expected %.5b",
              module->rd_addr_out, 5);
    return false;
  }

  module->clk = 0;

  contextp->timeInc(1);  
  module->eval();

  if (module->mem_execute_ready != 0b1) {
    module->clk = 1; // We have to clock an extra time because we inserted a no
                     // op into the pipeline
    contextp->timeInc(1);    
    module->eval();
  }

  return true;
}

bool test_load_ops(std::unique_ptr<Vload_store> &module, std::unique_ptr<VerilatedContext> &contextp) {
  // load ops write requested size of load to rd
  // rd_val_out = loaded memory value of requested size
  // rd_addr_out = rd_addr_in
  // two cycles plus memory lag

  std::array<uint32_t, 32> memory;
  memory[10] = 0b00001111000011111101010101010101;
  
  bool res = test_specific_load(memory, module, contextp, MEM_LOAD_B, 0b01010101);
  if (res)
    res = test_specific_load(memory, module, contextp, MEM_LOAD_H, 0b11111111111111111101010101010101);
  if (res)
    res = test_specific_load(memory, module, contextp, MEM_LOAD_W, 0b00001111000011111101010101010101);
  if (res)
    res = test_specific_load(memory, module, contextp, MEM_LOAD_BU, 0b01010101);
  if (res)
    res = test_specific_load(memory, module, contextp, MEM_LOAD_HU, 0b1101010101010101);
  
  
  return res;
}

int main(int argc, char** argv) {

  std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  contextp->traceEverOn(true);

  contextp->commandArgs(argc, argv);
  std::unique_ptr<Vload_store> load_store{
      new Vload_store{contextp.get(), "TOP"}};

  std::cout << "Set initial settings" << std::endl;

  bool result = test_no_op(load_store, contextp);

  if (result == true) {
    VL_PRINTF("NO OP TEST PASSED\n\n");
  } else {
    VL_PRINTF("NO OP TEST FAILED\n\n");
  }

  bool load_res = test_load_ops(load_store, contextp);

  if (load_res == true) {
    VL_PRINTF("LOAD TEST PASSED\n\n");
  } else {
    VL_PRINTF("LOAD TEST FAILED\n\n");
  }

  // Check all memory Ops
  // Check pipeline outputs (valid & ready signals)
  // Check output of load ops

  load_store->final();

  return 0;
}

