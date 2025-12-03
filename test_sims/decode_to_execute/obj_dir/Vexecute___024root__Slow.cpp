// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute.h for the primary calling header

#include "Vexecute__pch.h"
#include "Vexecute__Syms.h"
#include "Vexecute___024root.h"

void Vexecute___024root___ctor_var_reset(Vexecute___024root* vlSelf);

Vexecute___024root::Vexecute___024root(Vexecute__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vexecute___024root___ctor_var_reset(this);
}

void Vexecute___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vexecute___024root::~Vexecute___024root() {
}
