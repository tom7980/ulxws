// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "Vbarrel_shifter__pch.h"
#include "Vbarrel_shifter___024root.h"

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_static__TOP(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_static(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbarrel_shifter___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_static__TOP(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_static__TOP\n"); );
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
    // Body
    barrel_shifter__DOT__shift_impl_data_in = 0U;
    barrel_shifter__DOT__rotated_data_out = 0U;
    barrel_shifter__DOT__shifted_data_out = 0U;
    barrel_shifter__DOT__sign_in = 0U;
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_initial__TOP(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_initial(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbarrel_shifter___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__0 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__0 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__1 
        = vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__1 
        = vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_initial__TOP(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[0U] = 0U;
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[1U] = 0U;
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[2U] = 0U;
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[3U] = 0U;
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[4U] = 0U;
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[0U] = 0U;
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[1U] = 0U;
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[2U] = 0U;
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[3U] = 0U;
    vlSelfRef.barrel_shifter__DOT__shift_right__DOT__partial[4U] = 0U;
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_final(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__stl(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbarrel_shifter___024root___eval_phase__stl(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_settle(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_settle\n"); );
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
            Vbarrel_shifter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../components/barrel_shifter.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbarrel_shifter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__stl(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] barrel_shifter.rotate_right.partial)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] barrel_shifter.shift_right.partial)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf);
VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__1(Vbarrel_shifter___024root* vlSelf);
VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__2(Vbarrel_shifter___024root* vlSelf);
VL_ATTR_COLD void Vbarrel_shifter___024root___stl_comb__TOP__0(Vbarrel_shifter___024root* vlSelf);
VL_ATTR_COLD void Vbarrel_shifter___024root___stl_comb__TOP__1(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_stl(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___stl_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___stl_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___stl_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.data_out = vlSelfRef.barrel_shifter__DOT__reg_data_out;
    barrel_shifter__DOT__sign_in = (vlSelfRef.data_in 
                                    >> 0x1fU);
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

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__1(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___stl_sequent__TOP__1\n"); );
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
}

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_sequent__TOP__2(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___stl_sequent__TOP__2\n"); );
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
}

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_comb__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___stl_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__partial[4U] 
        = ((0x10U & (IData)(vlSelfRef.shift_amount))
            ? ((vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                << 0x10U) | (vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 
                             >> 0x10U)) : vlSelfRef.barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1);
}

VL_ATTR_COLD void Vbarrel_shifter___024root___stl_comb__TOP__1(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___stl_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_triggers__stl(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD bool Vbarrel_shifter___024root___eval_phase__stl(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbarrel_shifter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbarrel_shifter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__ico(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__act(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] barrel_shifter.rotate_right.partial)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] barrel_shifter.shift_right.partial)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__nba(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] barrel_shifter.rotate_right.partial)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] barrel_shifter.shift_right.partial)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbarrel_shifter___024root___ctor_var_reset(Vbarrel_shifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->shift_amount = VL_RAND_RESET_I(5);
    vlSelf->shift_dir = VL_RAND_RESET_I(1);
    vlSelf->shift_or_rotate = VL_RAND_RESET_I(1);
    vlSelf->logi_or_arith = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT____Vcellinp__shift_right__sign_in = VL_RAND_RESET_I(1);
    vlSelf->barrel_shifter__DOT__right_or_left_out = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__reg_data_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->barrel_shifter__DOT__rotate_right__DOT__partial[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__1__KET____DOT__tmp1 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__2__KET____DOT__tmp1 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__3__KET____DOT__tmp1 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__rotate_right__DOT__gen_rotate__DOT__genblk1__BRA__4__KET____DOT__tmp1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->barrel_shifter__DOT__shift_right__DOT__partial[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->barrel_shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__barrel_shifter__DOT__rotate_right__DOT__partial__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__barrel_shifter__DOT__shift_right__DOT__partial__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
