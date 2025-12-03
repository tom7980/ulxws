// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINSTRUCTION_DECODER__SYMS_H_
#define VERILATED_VINSTRUCTION_DECODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vinstruction_decoder.h"

// INCLUDE MODULE CLASSES
#include "Vinstruction_decoder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vinstruction_decoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vinstruction_decoder* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vinstruction_decoder___024root TOP;

    // CONSTRUCTORS
    Vinstruction_decoder__Syms(VerilatedContext* contextp, const char* namep, Vinstruction_decoder* modelp);
    ~Vinstruction_decoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
