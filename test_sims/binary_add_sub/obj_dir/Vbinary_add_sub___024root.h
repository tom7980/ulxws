// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbinary_add_sub.h for the primary calling header

#ifndef VERILATED_VBINARY_ADD_SUB___024ROOT_H_
#define VERILATED_VBINARY_ADD_SUB___024ROOT_H_  // guard

#include "verilated.h"


class Vbinary_add_sub__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbinary_add_sub___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(add_sub,0,0);
    VL_IN8(carry_in,0,0);
    VL_OUT8(carry_out,0,0);
    VL_OUT8(overflow,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VL_OUT(sum,31,0);
    VL_OUT(carries,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbinary_add_sub__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbinary_add_sub___024root(Vbinary_add_sub__Syms* symsp, const char* v__name);
    ~Vbinary_add_sub___024root();
    VL_UNCOPYABLE(Vbinary_add_sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
