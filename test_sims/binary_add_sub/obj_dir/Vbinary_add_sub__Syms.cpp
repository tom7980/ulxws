// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbinary_add_sub__pch.h"
#include "Vbinary_add_sub.h"
#include "Vbinary_add_sub___024root.h"

// FUNCTIONS
Vbinary_add_sub__Syms::~Vbinary_add_sub__Syms()
{
}

Vbinary_add_sub__Syms::Vbinary_add_sub__Syms(VerilatedContext* contextp, const char* namep, Vbinary_add_sub* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(85);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
