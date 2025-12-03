#!/bin/bash
./verilate -I ../../components ../../riscv -m ../../riscv/instruction_decoder.v ../../riscv/execute.v ../../riscv/instruction_fetch.v -- main.cpp