// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute.h for the primary calling header

#include "Vexecute__pch.h"
#include "Vexecute__Syms.h"
#include "Vexecute___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__ico(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute___024root___eval_triggers__ico(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexecute___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__act(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute___024root___eval_triggers__act(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__1.neq(vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__1.assign(vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexecute___024root___dump_triggers__act(vlSelf);
    }
#endif
}
