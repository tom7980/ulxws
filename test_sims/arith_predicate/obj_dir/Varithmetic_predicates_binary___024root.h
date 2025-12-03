// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varithmetic_predicates_binary.h for the primary calling header

#ifndef VERILATED_VARITHMETIC_PREDICATES_BINARY___024ROOT_H_
#define VERILATED_VARITHMETIC_PREDICATES_BINARY___024ROOT_H_  // guard

#include "verilated.h"


class Varithmetic_predicates_binary__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varithmetic_predicates_binary___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(A_eq_B,0,0);
    VL_OUT8(A_lt_B_unsigned,0,0);
    VL_OUT8(A_lte_B_unsigned,0,0);
    VL_OUT8(A_gt_B_unsigned,0,0);
    VL_OUT8(A_gte_B_unsigned,0,0);
    VL_OUT8(A_lt_B_signed,0,0);
    VL_OUT8(A_lte_B_signed,0,0);
    VL_OUT8(A_gt_B_signed,0,0);
    VL_OUT8(A_gte_B_signed,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset;
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Varithmetic_predicates_binary__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varithmetic_predicates_binary___024root(Varithmetic_predicates_binary__Syms* symsp, const char* v__name);
    ~Varithmetic_predicates_binary___024root();
    VL_UNCOPYABLE(Varithmetic_predicates_binary___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
