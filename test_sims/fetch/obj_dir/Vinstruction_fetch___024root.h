// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_fetch.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_FETCH___024ROOT_H_
#define VERILATED_VINSTRUCTION_FETCH___024ROOT_H_  // guard

#include "verilated.h"


class Vinstruction_fetch__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinstruction_fetch___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(fetch_addr_valid,0,0);
    VL_IN8(mem_addr_ready,0,0);
    VL_OUT8(fetch_instr_in_ready,0,0);
    VL_IN8(mem_instr_in_valid,0,0);
    VL_OUT8(fetch_instr_out_valid,0,0);
    VL_IN8(decode_ready,0,0);
    VL_OUT8(branch_taken,0,0);
    VL_IN8(branch_flush,0,0);
    CData/*0:0*/ instruction_fetch__DOT____Vcellinp__addr_reg_one__write_enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(mem_addr_out,31,0);
    VL_IN(instr_in,31,0);
    VL_OUT(instr_out,31,0);
    VL_OUT(decode_addr_out,31,0);
    VL_IN(branch_pc_in,31,0);
    IData/*31:0*/ instruction_fetch__DOT__instr_buf_one;
    IData/*31:0*/ instruction_fetch__DOT__addr_buf_one;
    IData/*31:0*/ instruction_fetch__DOT__pc_addr_buf;
    IData/*31:0*/ instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data;
    IData/*31:0*/ instruction_fetch__DOT__predicted_branch_address;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinstruction_fetch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstruction_fetch___024root(Vinstruction_fetch__Syms* symsp, const char* v__name);
    ~Vinstruction_fetch___024root();
    VL_UNCOPYABLE(Vinstruction_fetch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
