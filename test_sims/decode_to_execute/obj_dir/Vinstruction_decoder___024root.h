// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_decoder.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_DECODER___024ROOT_H_
#define VERILATED_VINSTRUCTION_DECODER___024ROOT_H_  // guard

#include "verilated.h"


class Vinstruction_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinstruction_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(branch_flush,0,0);
    VL_IN8(pipeline_stall,0,0);
    VL_IN8(branch_taken_in,0,0);
    VL_IN8(fetch_valid,0,0);
    VL_OUT8(decode_ready,0,0);
    VL_OUT8(rs1_out,4,0);
    VL_OUT8(rs2_out,4,0);
    VL_OUT8(rd_out,4,0);
    VL_OUT8(opcode,6,0);
    VL_OUT8(funct7,6,0);
    VL_OUT8(funct3,2,0);
    VL_OUT8(alusrc_a,0,0);
    VL_OUT8(alusrc_b,0,0);
    VL_OUT8(load_store_op,3,0);
    VL_OUT8(addr_offset_from_reg,0,0);
    VL_OUT8(is_branch_op,1,0);
    VL_OUT8(alu_op,3,0);
    VL_OUT8(branch_taken_out,0,0);
    VL_OUT8(decode_valid,0,0);
    VL_IN8(execute_ready,0,0);
    VL_OUT8(illegal_instruction_exception,0,0);
    CData/*0:0*/ instruction_decoder__DOT__insert_next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    VL_IN(instr_address_in,31,0);
    VL_OUT(immediate_out,31,0);
    VL_OUT(addr_offset_out,31,0);
    VL_OUT(instr_address_out,31,0);
    IData/*31:0*/ instruction_decoder__DOT__instruction_r;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinstruction_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstruction_decoder___024root(Vinstruction_decoder__Syms* symsp, const char* v__name);
    ~Vinstruction_decoder___024root();
    VL_UNCOPYABLE(Vinstruction_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
