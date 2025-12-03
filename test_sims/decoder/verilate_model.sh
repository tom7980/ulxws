#!/bin/bash
verilator --cc --exe --build -j 0 -I../../components -I../../riscv main.cpp ../../riscv/instruction_decoder.v