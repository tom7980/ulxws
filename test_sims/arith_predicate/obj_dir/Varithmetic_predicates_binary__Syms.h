// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARITHMETIC_PREDICATES_BINARY__SYMS_H_
#define VERILATED_VARITHMETIC_PREDICATES_BINARY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Varithmetic_predicates_binary.h"

// INCLUDE MODULE CLASSES
#include "Varithmetic_predicates_binary___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Varithmetic_predicates_binary__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Varithmetic_predicates_binary* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Varithmetic_predicates_binary___024root TOP;

    // CONSTRUCTORS
    Varithmetic_predicates_binary__Syms(VerilatedContext* contextp, const char* namep, Varithmetic_predicates_binary* modelp);
    ~Varithmetic_predicates_binary__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
