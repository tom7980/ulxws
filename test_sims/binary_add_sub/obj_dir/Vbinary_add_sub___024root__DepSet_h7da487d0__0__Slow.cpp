// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_add_sub.h for the primary calling header

#include "Vbinary_add_sub__pch.h"
#include "Vbinary_add_sub___024root.h"

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_static__TOP(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_static(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbinary_add_sub___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_static__TOP(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ binary_add_sub__DOT__B_selected;
    binary_add_sub__DOT__B_selected = 0;
    IData/*31:0*/ binary_add_sub__DOT__negated_offset;
    binary_add_sub__DOT__negated_offset = 0;
    IData/*31:0*/ binary_add_sub__DOT__carry_in_selected;
    binary_add_sub__DOT__carry_in_selected = 0;
    // Body
    binary_add_sub__DOT__B_selected = 0U;
    binary_add_sub__DOT__negated_offset = 0U;
    binary_add_sub__DOT__carry_in_selected = 0U;
}

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_initial__TOP(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_initial(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbinary_add_sub___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_initial__TOP(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum = 0U;
    vlSelfRef.carry_out = 0U;
    vlSelfRef.overflow = 0U;
    vlSelfRef.carries = 0U;
}

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_final(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__stl(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbinary_add_sub___024root___eval_phase__stl(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_settle(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbinary_add_sub___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../components/binary_add_sub.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbinary_add_sub___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__stl(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbinary_add_sub___024root___ico_sequent__TOP__0(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_stl(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbinary_add_sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbinary_add_sub___024root___eval_triggers__stl(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD bool Vbinary_add_sub___024root___eval_phase__stl(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbinary_add_sub___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbinary_add_sub___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__ico(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__act(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__nba(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbinary_add_sub___024root___ctor_var_reset(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->add_sub = VL_RAND_RESET_I(1);
    vlSelf->carry_in = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->B = VL_RAND_RESET_I(32);
    vlSelf->sum = VL_RAND_RESET_I(32);
    vlSelf->carry_out = VL_RAND_RESET_I(1);
    vlSelf->carries = VL_RAND_RESET_I(32);
    vlSelf->overflow = VL_RAND_RESET_I(1);
}
