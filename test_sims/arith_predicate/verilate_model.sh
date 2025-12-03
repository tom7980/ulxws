#!/bin/bash
verilator --cc --exe --build -j 0 -I../../components main.cpp ../../components/arithmetic_predicates_binary.v