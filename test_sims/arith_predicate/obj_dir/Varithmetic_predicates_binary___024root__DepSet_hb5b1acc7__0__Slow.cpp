// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic_predicates_binary.h for the primary calling header

#include "Varithmetic_predicates_binary__pch.h"
#include "Varithmetic_predicates_binary___024root.h"

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_static__TOP(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_static(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varithmetic_predicates_binary___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_static__TOP(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ arithmetic_predicates_binary__DOT__negative;
    arithmetic_predicates_binary__DOT__negative = 0;
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected;
    arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected = 0;
    // Body
    arithmetic_predicates_binary__DOT__negative = 0U;
    arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected = 0U;
    vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset = 0U;
    vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected = 0U;
}

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_initial__TOP(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_initial(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varithmetic_predicates_binary___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_initial__TOP(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ arithmetic_predicates_binary__DOT__difference;
    arithmetic_predicates_binary__DOT__difference = 0;
    CData/*0:0*/ arithmetic_predicates_binary__DOT__carry_out;
    arithmetic_predicates_binary__DOT__carry_out = 0;
    CData/*0:0*/ arithmetic_predicates_binary__DOT__overflow_signed;
    arithmetic_predicates_binary__DOT__overflow_signed = 0;
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__carries;
    arithmetic_predicates_binary__DOT__subtractor__DOT__carries = 0;
    // Body
    vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset = 1U;
    vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected = 0U;
    vlSelfRef.A_eq_B = 0U;
    vlSelfRef.A_lte_B_unsigned = 0U;
    vlSelfRef.A_gt_B_unsigned = 0U;
    vlSelfRef.A_gte_B_unsigned = 0U;
    vlSelfRef.A_lt_B_signed = 0U;
    vlSelfRef.A_lte_B_signed = 0U;
    vlSelfRef.A_gt_B_signed = 0U;
    vlSelfRef.A_gte_B_signed = 0U;
    arithmetic_predicates_binary__DOT__difference = 0U;
    arithmetic_predicates_binary__DOT__carry_out = 0U;
    arithmetic_predicates_binary__DOT__overflow_signed = 0U;
    arithmetic_predicates_binary__DOT__subtractor__DOT__carries = 0U;
}

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_final(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__stl(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Varithmetic_predicates_binary___024root___eval_phase__stl(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_settle(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_settle\n"); );
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
            Varithmetic_predicates_binary___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../components/arithmetic_predicates_binary.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Varithmetic_predicates_binary___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__stl(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___dump_triggers__stl\n"); );
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

void Varithmetic_predicates_binary___024root___ico_sequent__TOP__0(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_stl(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Varithmetic_predicates_binary___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___eval_triggers__stl(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD bool Varithmetic_predicates_binary___024root___eval_phase__stl(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Varithmetic_predicates_binary___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Varithmetic_predicates_binary___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__ico(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__act(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__nba(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Varithmetic_predicates_binary___024root___ctor_var_reset(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->B = VL_RAND_RESET_I(32);
    vlSelf->A_eq_B = VL_RAND_RESET_I(1);
    vlSelf->A_lt_B_unsigned = VL_RAND_RESET_I(1);
    vlSelf->A_lte_B_unsigned = VL_RAND_RESET_I(1);
    vlSelf->A_gt_B_unsigned = VL_RAND_RESET_I(1);
    vlSelf->A_gte_B_unsigned = VL_RAND_RESET_I(1);
    vlSelf->A_lt_B_signed = VL_RAND_RESET_I(1);
    vlSelf->A_lte_B_signed = VL_RAND_RESET_I(1);
    vlSelf->A_gt_B_signed = VL_RAND_RESET_I(1);
    vlSelf->A_gte_B_signed = VL_RAND_RESET_I(1);
    vlSelf->arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset = VL_RAND_RESET_I(32);
    vlSelf->arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected = VL_RAND_RESET_I(32);
}
