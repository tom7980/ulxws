// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarrel_shifter.h for the primary calling header

#ifndef VERILATED_VBARREL_SHIFTER___024ROOT_H_
#define VERILATED_VBARREL_SHIFTER___024ROOT_H_  // guard

#include "verilated.h"


class Vbarrel_shifter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbarrel_shifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(shift_amount,4,0);
    VL_IN8(shift_dir,0,0);
    VL_IN8(shift_or_rotate,0,0);
    VL_IN8(logi_or_arith,0,0);
    CData/*0:0*/ barrel_shifter__DOT____Vcellinp__shift_right__sign_in;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ barrel_shifter__DOT__right_or_left_out;
    IData/*31:0*/ barrel_shifter__DOT__reg_data_out;
    IData/*31:0*/ barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1;
    IData/*31:0*/ barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1;
    IData/*31:0*/ barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1;
    IData/*31:0*/ barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1;
    IData/*31:0*/ barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2;
    IData/*31:0*/ barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2;
    IData/*31:0*/ barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2;
    IData/*31:0*/ barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> barrel_shifter__DOT__rotate_right__DOT__partial;
    VlUnpacked<IData/*31:0*/, 5> barrel_shifter__DOT__shift_right__DOT__partial;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__0;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__0;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__1;
    VlUnpacked<IData/*31:0*/, 5> __Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__1;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbarrel_shifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbarrel_shifter___024root(Vbarrel_shifter__Syms* symsp, const char* v__name);
    ~Vbarrel_shifter___024root();
    VL_UNCOPYABLE(Vbarrel_shifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
