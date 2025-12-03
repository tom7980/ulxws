// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_fetch.h for the primary calling header

#include "Vinstruction_fetch__pch.h"
#include "Vinstruction_fetch__Syms.h"
#include "Vinstruction_fetch___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__stl(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_triggers__stl(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_fetch___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
