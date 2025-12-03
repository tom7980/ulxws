// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Varithmetic_predicates_binary__pch.h"
#include "Varithmetic_predicates_binary.h"
#include "Varithmetic_predicates_binary___024root.h"

// FUNCTIONS
Varithmetic_predicates_binary__Syms::~Varithmetic_predicates_binary__Syms()
{
}

Varithmetic_predicates_binary__Syms::Varithmetic_predicates_binary__Syms(VerilatedContext* contextp, const char* namep, Varithmetic_predicates_binary* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(100);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
