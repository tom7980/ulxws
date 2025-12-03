// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "Vbarrel_shifter__pch.h"
#include "Vbarrel_shifter___024root.h"

void Vbarrel_shifter___024root___ico_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf);

void Vbarrel_shifter___024root___eval_ico(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbarrel_shifter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbarrel_shifter___024root___ico_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ barrel_shifter__DOT__shift_impl_data_in;
    barrel_shifter__DOT__shift_impl_data_in = 0;
    IData/*31:0*/ barrel_shifter__DOT__rotated_data_out;
    barrel_shifter__DOT__rotated_data_out = 0;
    IData/*31:0*/ barrel_shifter__DOT__shifted_data_out;
    barrel_shifter__DOT__shifted_data_out = 0;
    CData/*0:0*/ barrel_shifter__DOT__sign_in;
    barrel_shifter__DOT__sign_in = 0;
    IData/*31:0*/ barrel_shifter__DOT__shift_or_rotate_out;
    barrel_shifter__DOT__shift_or_rotate_out = 0;
    // Body
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[1U] 
        = ((2U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 
             << 0x1eU) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 
                          >> 2U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[2U] 
        = ((4U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 
             << 0x1cU) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 
                          >> 4U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[3U] 
        = ((8U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 
             << 0x18U) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 
                          >> 8U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1);
    barrel_shifter__DOT__sign_in = (vlSelfRef.data_in 
                                    >> 0x1fU);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[4U] 
        = ((0x10U & (IData)(vlSelfRef.shift_amount))
            ? ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                << 0x10U) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                             >> 0x10U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1);
    barrel_shifter__DOT__shift_impl_data_in = ((IData)(vlSelfRef.shift_dir)
                                                ? VL_STREAML_FAST_III(32, vlSelfRef.data_in, 0)
                                                : vlSelfRef.data_in);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[0U] 
        = ((1U & (IData)(vlSelfRef.shift_amount)) ? 
           ((barrel_shifter__DOT__shift_impl_data_in 
             << 0x1fU) | (barrel_shifter__DOT__shift_impl_data_in 
                          >> 1U)) : barrel_shifter__DOT__shift_impl_data_in);
    barrel_shifter__DOT__rotated_data_out = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial
        [4U];
    vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in 
        = ((IData)(barrel_shifter__DOT__sign_in) & (IData)(vlSelfRef.logi_or_arith));
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[1U] 
        = ((2U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x1eU) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 
                          >> 2U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[2U] 
        = ((4U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x1cU) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 
                          >> 4U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[3U] 
        = ((8U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x18U) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 
                          >> 8U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[4U] 
        = ((0x10U & (IData)(vlSelfRef.shift_amount))
            ? (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
                << 0x10U) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 
                             >> 0x10U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[0U] 
        = ((1U & (IData)(vlSelfRef.shift_amount)) ? 
           (((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in) 
             << 0x1fU) | (barrel_shifter__DOT__shift_impl_data_in 
                          >> 1U)) : barrel_shifter__DOT__shift_impl_data_in);
    barrel_shifter__DOT__shifted_data_out = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial
        [4U];
    barrel_shifter__DOT__shift_or_rotate_out = ((IData)(vlSelfRef.shift_or_rotate)
                                                 ? barrel_shifter__DOT__rotated_data_out
                                                 : barrel_shifter__DOT__shifted_data_out);
    vlSelfRef.barrel_shifter__DOT__right_or_left_out 
        = ((IData)(vlSelfRef.shift_dir) ? VL_STREAML_FAST_III(32, barrel_shifter__DOT__shift_or_rotate_out, 0)
            : barrel_shifter__DOT__shift_or_rotate_out);
}

void Vbarrel_shifter___024root___eval_triggers__ico(Vbarrel_shifter___024root* vlSelf);

bool Vbarrel_shifter___024root___eval_phase__ico(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbarrel_shifter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbarrel_shifter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbarrel_shifter___024root___act_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf);
void Vbarrel_shifter___024root___act_sequent__TOP__1(Vbarrel_shifter___024root* vlSelf);

void Vbarrel_shifter___024root___eval_act(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vbarrel_shifter___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vbarrel_shifter___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vbarrel_shifter___024root___act_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial
        [0U];
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial
        [1U];
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial
        [2U];
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial
        [3U];
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[1U] 
        = ((2U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 
             << 0x1eU) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 
                          >> 2U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[2U] 
        = ((4U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 
             << 0x1cU) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 
                          >> 4U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[3U] 
        = ((8U & (IData)(vlSelfRef.shift_amount)) ? 
           ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 
             << 0x18U) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 
                          >> 8U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1);
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[4U] 
        = ((0x10U & (IData)(vlSelfRef.shift_amount))
            ? ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                << 0x10U) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                             >> 0x10U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1);
}

VL_INLINE_OPT void Vbarrel_shifter___024root___act_sequent__TOP__1(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial
        [0U];
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial
        [1U];
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial
        [2U];
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial
        [3U];
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[1U] 
        = ((2U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x1eU) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 
                          >> 2U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[2U] 
        = ((4U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x1cU) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 
                          >> 4U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[3U] 
        = ((8U & (IData)(vlSelfRef.shift_amount)) ? 
           (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
             << 0x18U) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 
                          >> 8U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2);
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[4U] 
        = ((0x10U & (IData)(vlSelfRef.shift_amount))
            ? (((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT____Vcellinp__shift_right__sign_in))) 
                << 0x10U) | (vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 
                             >> 0x10U)) : vlSelfRef.barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2);
}

void Vbarrel_shifter___024root___nba_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf);

void Vbarrel_shifter___024root___eval_nba(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbarrel_shifter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbarrel_shifter___024root___nba_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.barrel_shifter__DOT__reg_data_out = vlSelfRef.barrel_shifter__DOT__right_or_left_out;
    vlSelfRef.data_out = vlSelfRef.barrel_shifter__DOT__reg_data_out;
}

void Vbarrel_shifter___024root___eval_triggers__act(Vbarrel_shifter___024root* vlSelf);

bool Vbarrel_shifter___024root___eval_phase__act(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbarrel_shifter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbarrel_shifter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbarrel_shifter___024root___eval_phase__nba(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbarrel_shifter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__ico(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__nba(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__act(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter___024root___eval(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval\n"); );
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
            Vbarrel_shifter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../components/barrel_shifter.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbarrel_shifter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbarrel_shifter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../components/barrel_shifter.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbarrel_shifter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../components/barrel_shifter.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbarrel_shifter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbarrel_shifter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbarrel_shifter___024root___eval_debug_assertions(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.shift_amount & 0xe0U))) {
        Verilated::overWidthError("shift_amount");}
    if (VL_UNLIKELY((vlSelfRef.shift_dir & 0xfeU))) {
        Verilated::overWidthError("shift_dir");}
    if (VL_UNLIKELY((vlSelfRef.shift_or_rotate & 0xfeU))) {
        Verilated::overWidthError("shift_or_rotate");}
    if (VL_UNLIKELY((vlSelfRef.logi_or_arith & 0xfeU))) {
        Verilated::overWidthError("logi_or_arith");}
}
#endif  // VL_DEBUG
