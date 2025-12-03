// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "Vbarrel_shifter__pch.h"
#include "Vbarrel_shifter__Syms.h"
#include "Vbarrel_shifter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__stl(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_triggers__stl(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__0.neq(vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial));
    vlSelfRef.__VstlTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__0.neq(vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial));
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__0.assign(vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial);
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__0.assign(vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbarrel_shifter___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
