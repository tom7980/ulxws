// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBINARY_ADD_SUB__SYMS_H_
#define VERILATED_VBINARY_ADD_SUB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbinary_add_sub.h"

// INCLUDE MODULE CLASSES
#include "Vbinary_add_sub___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbinary_add_sub__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbinary_add_sub* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbinary_add_sub___024root      TOP;

    // CONSTRUCTORS
    Vbinary_add_sub__Syms(VerilatedContext* contextp, const char* namep, Vbinary_add_sub* modelp);
    ~Vbinary_add_sub__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
