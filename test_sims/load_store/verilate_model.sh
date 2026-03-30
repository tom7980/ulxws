#!/bin/bash
verilator --trace-fst --cc --exe --build -j 0 -I../../components -I../../riscv main.cpp ../../riscv/load_store.v 
