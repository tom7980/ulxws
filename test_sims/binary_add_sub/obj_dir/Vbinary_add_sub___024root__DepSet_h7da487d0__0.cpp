// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_add_sub.h for the primary calling header

#include "Vbinary_add_sub__pch.h"
#include "Vbinary_add_sub___024root.h"

void Vbinary_add_sub___024root___ico_sequent__TOP__0(Vbinary_add_sub___024root* vlSelf);

void Vbinary_add_sub___024root___eval_ico(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbinary_add_sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbinary_add_sub___024root___ico_sequent__TOP__0(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ binary_add_sub__DOT__B_selected;
    binary_add_sub__DOT__B_selected = 0;
    IData/*31:0*/ binary_add_sub__DOT__negated_offset;
    binary_add_sub__DOT__negated_offset = 0;
    IData/*31:0*/ binary_add_sub__DOT__carry_in_selected;
    binary_add_sub__DOT__carry_in_selected = 0;
    // Body
    if (vlSelfRef.add_sub) {
        binary_add_sub__DOT__negated_offset = 1U;
        binary_add_sub__DOT__carry_in_selected = ((IData)(vlSelfRef.carry_in)
                                                   ? 
                                                  (0xfffffffeU 
                                                   | (IData)(vlSelfRef.carry_in))
                                                   : (IData)(vlSelfRef.carry_in));
        binary_add_sub__DOT__B_selected = (~ vlSelfRef.B);
    } else {
        binary_add_sub__DOT__negated_offset = 0U;
        binary_add_sub__DOT__carry_in_selected = vlSelfRef.carry_in;
        binary_add_sub__DOT__B_selected = vlSelfRef.B;
    }
    vlSelfRef.carry_out = (1U & (IData)((1ULL & (((
                                                   ((QData)((IData)(vlSelfRef.A)) 
                                                    + (QData)((IData)(binary_add_sub__DOT__B_selected))) 
                                                   + (QData)((IData)(binary_add_sub__DOT__negated_offset))) 
                                                  + (QData)((IData)(binary_add_sub__DOT__carry_in_selected))) 
                                                 >> 0x20U))));
    vlSelfRef.sum = (((vlSelfRef.A + binary_add_sub__DOT__B_selected) 
                      + binary_add_sub__DOT__negated_offset) 
                     + binary_add_sub__DOT__carry_in_selected);
    vlSelfRef.carries = (vlSelfRef.A ^ (binary_add_sub__DOT__B_selected 
                                        ^ vlSelfRef.sum));
    vlSelfRef.overflow = ((vlSelfRef.carries >> 0x1fU) 
                          != (IData)(vlSelfRef.carry_out));
}

void Vbinary_add_sub___024root___eval_triggers__ico(Vbinary_add_sub___024root* vlSelf);

bool Vbinary_add_sub___024root___eval_phase__ico(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbinary_add_sub___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbinary_add_sub___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbinary_add_sub___024root___eval_act(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vbinary_add_sub___024root___eval_nba(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vbinary_add_sub___024root___eval_triggers__act(Vbinary_add_sub___024root* vlSelf);

bool Vbinary_add_sub___024root___eval_phase__act(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbinary_add_sub___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbinary_add_sub___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbinary_add_sub___024root___eval_phase__nba(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbinary_add_sub___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__ico(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__nba(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_add_sub___024root___dump_triggers__act(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG

void Vbinary_add_sub___024root___eval(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval\n"); );
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
            Vbinary_add_sub___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../components/binary_add_sub.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbinary_add_sub___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbinary_add_sub___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../components/binary_add_sub.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbinary_add_sub___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../components/binary_add_sub.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbinary_add_sub___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbinary_add_sub___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbinary_add_sub___024root___eval_debug_assertions(Vbinary_add_sub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbinary_add_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_add_sub___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.add_sub & 0xfeU))) {
        Verilated::overWidthError("add_sub");}
    if (VL_UNLIKELY((vlSelfRef.carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
}
#endif  // VL_DEBUG
