// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic_predicates_binary.h for the primary calling header

#include "Varithmetic_predicates_binary__pch.h"
#include "Varithmetic_predicates_binary__Syms.h"
#include "Varithmetic_predicates_binary___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__stl(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_triggers__stl(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varithmetic_predicates_binary___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
