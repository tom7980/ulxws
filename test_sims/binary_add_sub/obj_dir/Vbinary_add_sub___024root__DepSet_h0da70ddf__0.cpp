// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_add_sub.h for the primary calling header

#include "Vbinary_add_sub__pch.h"
#include "Vbinary_add_sub__Syms.h"
#include "Vbinary_add_sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__ico(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG

void Vbinary_add_sub___024root___eval_triggers__ico(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbinary_add_sub___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__act(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG

void Vbinary_add_sub___024root___eval_triggers__act(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbinary_add_sub___024root___dump_triggers__act(vlSelf);
    }
#endif
}
