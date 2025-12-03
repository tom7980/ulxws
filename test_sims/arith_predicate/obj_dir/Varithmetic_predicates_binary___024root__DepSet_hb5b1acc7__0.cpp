// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic_predicates_binary.h for the primary calling header

#include "Varithmetic_predicates_binary__pch.h"
#include "Varithmetic_predicates_binary___024root.h"

void Varithmetic_predicates_binary___024root___ico_sequent__TOP__0(Varithmetic_predicates_binary___024root* vlSelf);

void Varithmetic_predicates_binary___024root___eval_ico(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Varithmetic_predicates_binary___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Varithmetic_predicates_binary___024root___ico_sequent__TOP__0(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ arithmetic_predicates_binary__DOT__difference;
    arithmetic_predicates_binary__DOT__difference = 0;
    CData/*0:0*/ arithmetic_predicates_binary__DOT__carry_out;
    arithmetic_predicates_binary__DOT__carry_out = 0;
    CData/*0:0*/ arithmetic_predicates_binary__DOT__overflow_signed;
    arithmetic_predicates_binary__DOT__overflow_signed = 0;
    CData/*0:0*/ arithmetic_predicates_binary__DOT__negative;
    arithmetic_predicates_binary__DOT__negative = 0;
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__carries;
    arithmetic_predicates_binary__DOT__subtractor__DOT__carries = 0;
    IData/*31:0*/ arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected;
    arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected = 0;
    // Body
    arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected 
        = (~ vlSelfRef.B);
    arithmetic_predicates_binary__DOT__carry_out = 
        (1U & (IData)((1ULL & (((((QData)((IData)(vlSelfRef.A)) 
                                  + (QData)((IData)(arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected))) 
                                 + (QData)((IData)(vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset))) 
                                + (QData)((IData)(vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected))) 
                               >> 0x20U))));
    arithmetic_predicates_binary__DOT__difference = 
        (((vlSelfRef.A + arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected) 
          + vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__negated_offset) 
         + vlSelfRef.arithmetic_predicates_binary__DOT__subtractor__DOT__carry_in_selected);
    arithmetic_predicates_binary__DOT__subtractor__DOT__carries 
        = (vlSelfRef.A ^ (arithmetic_predicates_binary__DOT__difference 
                          ^ arithmetic_predicates_binary__DOT__subtractor__DOT__B_selected));
    arithmetic_predicates_binary__DOT__overflow_signed 
        = ((arithmetic_predicates_binary__DOT__subtractor__DOT__carries 
            >> 0x1fU) != (IData)(arithmetic_predicates_binary__DOT__carry_out));
    arithmetic_predicates_binary__DOT__negative = (arithmetic_predicates_binary__DOT__difference 
                                                   >> 0x1fU);
    vlSelfRef.A_eq_B = (0U == arithmetic_predicates_binary__DOT__difference);
    vlSelfRef.A_lt_B_unsigned = (1U & (~ (IData)(arithmetic_predicates_binary__DOT__carry_out)));
    vlSelfRef.A_lte_B_unsigned = ((IData)(vlSelfRef.A_lt_B_unsigned) 
                                  | (IData)(vlSelfRef.A_eq_B));
    vlSelfRef.A_gte_B_unsigned = arithmetic_predicates_binary__DOT__carry_out;
    vlSelfRef.A_gt_B_unsigned = ((IData)(vlSelfRef.A_gte_B_unsigned) 
                                 & (~ (IData)(vlSelfRef.A_eq_B)));
    vlSelfRef.A_lt_B_signed = ((IData)(arithmetic_predicates_binary__DOT__negative) 
                               != (IData)(arithmetic_predicates_binary__DOT__overflow_signed));
    vlSelfRef.A_lte_B_signed = ((IData)(vlSelfRef.A_lt_B_signed) 
                                | (IData)(vlSelfRef.A_eq_B));
    vlSelfRef.A_gte_B_signed = ((IData)(arithmetic_predicates_binary__DOT__negative) 
                                == (IData)(arithmetic_predicates_binary__DOT__overflow_signed));
    vlSelfRef.A_gt_B_signed = ((IData)(vlSelfRef.A_gte_B_signed) 
                               & (~ (IData)(vlSelfRef.A_eq_B)));
}

void Varithmetic_predicates_binary___024root___eval_triggers__ico(Varithmetic_predicates_binary___024root* vlSelf);

bool Varithmetic_predicates_binary___024root___eval_phase__ico(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Varithmetic_predicates_binary___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Varithmetic_predicates_binary___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Varithmetic_predicates_binary___024root___eval_act(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Varithmetic_predicates_binary___024root___eval_nba(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Varithmetic_predicates_binary___024root___eval_triggers__act(Varithmetic_predicates_binary___024root* vlSelf);

bool Varithmetic_predicates_binary___024root___eval_phase__act(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Varithmetic_predicates_binary___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Varithmetic_predicates_binary___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Varithmetic_predicates_binary___024root___eval_phase__nba(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Varithmetic_predicates_binary___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__ico(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__nba(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic_predicates_binary___024root___dump_triggers__act(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG

void Varithmetic_predicates_binary___024root___eval(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Varithmetic_predicates_binary___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../components/arithmetic_predicates_binary.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Varithmetic_predicates_binary___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Varithmetic_predicates_binary___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../components/arithmetic_predicates_binary.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Varithmetic_predicates_binary___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../components/arithmetic_predicates_binary.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Varithmetic_predicates_binary___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Varithmetic_predicates_binary___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Varithmetic_predicates_binary___024root___eval_debug_assertions(Varithmetic_predicates_binary___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varithmetic_predicates_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic_predicates_binary___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
