// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_decoder.h for the primary calling header

#include "Vinstruction_decoder__pch.h"
#include "Vinstruction_decoder__Syms.h"
#include "Vinstruction_decoder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__ico(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_decoder___024root___eval_triggers__ico(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_decoder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__act(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_decoder___024root___eval_triggers__act(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_decoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
