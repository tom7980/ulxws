#!/bin/bash
verilator --cc --exe --build -j 0 -I../../components shifter_main.cpp ../../components/barrel_shifter.v