// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexecute.h for the primary calling header

#ifndef VERILATED_VEXECUTE___024ROOT_H_
#define VERILATED_VEXECUTE___024ROOT_H_  // guard

#include "verilated.h"


class Vexecute__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexecute___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(branch_flush,0,0);
    VL_IN8(rd_addr_in,4,0);
    VL_OUT8(rd_addr_out,4,0);
    VL_IN8(opcode,6,0);
    VL_IN8(funct7,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(alusrc_a,0,0);
    VL_IN8(alusrc_b,0,0);
    VL_IN8(addr_offset_from_reg,0,0);
    VL_IN8(load_store_op_in,3,0);
    VL_OUT8(load_store_op_out,3,0);
    VL_IN8(is_branch_op,1,0);
    VL_IN8(alu_op,3,0);
    VL_IN8(branch_taken_in,0,0);
    VL_IN8(decode_valid,0,0);
    VL_OUT8(execute_ready,0,0);
    VL_IN8(memory_ready,0,0);
    VL_OUT8(execute_valid,0,0);
    CData/*0:0*/ execute__DOT__lt_signed;
    CData/*0:0*/ execute__DOT__lt_unsigned;
    CData/*0:0*/ execute__DOT__branch_flush_out_c;
    CData/*0:0*/ execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(branch_pc,31,0);
    VL_IN(immediate_in,31,0);
    VL_IN(rs1_val_in,31,0);
    VL_IN(rs2_val_in,31,0);
    VL_OUT(rd_val_out,31,0);
    VL_IN(addr_offset_in,31,0);
    VL_IN(instr_address_in,31,0);
    IData/*31:0*/ execute__DOT__boolean_op_out;
    IData/*31:0*/ execute__DOT__add_sub_out;
    IData/*31:0*/ execute__DOT__shift_out;
    IData/*31:0*/ execute__DOT__branch_pc_c;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected;
    IData/*31:0*/ execute__DOT__add_sub_unit__DOT__carry_in_selected;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> execute__DOT__shifter__DOT__shift_right__DOT__partial;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__0;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__1;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexecute__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexecute___024root(Vexecute__Syms* symsp, const char* v__name);
    ~Vexecute___024root();
    VL_UNCOPYABLE(Vexecute___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
