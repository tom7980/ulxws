// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute.h for the primary calling header

#include "Vexecute__pch.h"
#include "Vexecute__Syms.h"
#include "Vexecute___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__stl(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexecute___024root___eval_triggers__stl(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__0.neq(vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial));
    vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__0.assign(vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexecute___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
