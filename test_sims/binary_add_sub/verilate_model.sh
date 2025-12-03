#!/bin/bash
verilator --cc --exe --build -j 0 -I../../components main.cpp ../../components/binary_add_sub.v