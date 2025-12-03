// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute.h for the primary calling header

#include "Vexecute__pch.h"
#include "Vexecute___024root.h"

VL_ATTR_COLD void Vexecute___024root___eval_static__TOP(Vexecute___024root* vlSelf);

VL_ATTR_COLD void Vexecute___024root___eval_static(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vexecute___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vexecute___024root___eval_static__TOP(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ execute__DOT__gte_signed;
    execute__DOT__gte_signed = 0;
    CData/*0:0*/ execute__DOT__gte_unsigned;
    execute__DOT__gte_unsigned = 0;
    CData/*0:0*/ execute__DOT__equal;
    execute__DOT__equal = 0;
    CData/*0:0*/ execute__DOT__not_equal;
    execute__DOT__not_equal = 0;
    CData/*0:0*/ execute__DOT__branch_should_take;
    execute__DOT__branch_should_take = 0;
    CData/*0:0*/ execute__DOT__branch_taken_is_not_same;
    execute__DOT__branch_taken_is_not_same = 0;
    CData/*0:0*/ execute__DOT__is_jump_and_not_taken;
    execute__DOT__is_jump_and_not_taken = 0;
    IData/*31:0*/ execute__DOT__address_target_c;
    execute__DOT__address_target_c = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__negative;
    execute__DOT__predicates_unit__DOT__negative = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected = 0;
    IData/*31:0*/ execute__DOT__add_sub_unit__DOT__B_selected;
    execute__DOT__add_sub_unit__DOT__B_selected = 0;
    IData/*31:0*/ execute__DOT__add_sub_unit__DOT__negated_offset;
    execute__DOT__add_sub_unit__DOT__negated_offset = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_impl_data_in;
    execute__DOT__shifter__DOT__shift_impl_data_in = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__shifted_data_out;
    execute__DOT__shifter__DOT__shifted_data_out = 0;
    CData/*0:0*/ execute__DOT__shifter__DOT__sign_in;
    execute__DOT__shifter__DOT__sign_in = 0;
    // Body
    vlSelfRef.execute__DOT__lt_signed = 0U;
    vlSelfRef.execute__DOT__lt_unsigned = 0U;
    execute__DOT__gte_signed = 0U;
    execute__DOT__gte_unsigned = 0U;
    execute__DOT__equal = 0U;
    execute__DOT__not_equal = 0U;
    vlSelfRef.execute__DOT__branch_flush_out_c = 0U;
    execute__DOT__branch_should_take = 0U;
    execute__DOT__branch_taken_is_not_same = 0U;
    execute__DOT__is_jump_and_not_taken = 0U;
    execute__DOT__address_target_c = 0U;
    vlSelfRef.execute__DOT__branch_pc_c = 0U;
    execute__DOT__predicates_unit__DOT__negative = 0U;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected = 0U;
    vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset = 0U;
    vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected = 0U;
    execute__DOT__add_sub_unit__DOT__B_selected = 0U;
    execute__DOT__add_sub_unit__DOT__negated_offset = 0U;
    vlSelfRef.execute__DOT__add_sub_unit__DOT__carry_in_selected = 0U;
    execute__DOT__shifter__DOT__shift_impl_data_in = 0U;
    execute__DOT__shifter__DOT__shifted_data_out = 0U;
    execute__DOT__shifter__DOT__sign_in = 0U;
}

VL_ATTR_COLD void Vexecute___024root___eval_initial__TOP(Vexecute___024root* vlSelf);

VL_ATTR_COLD void Vexecute___024root___eval_initial(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vexecute___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__0 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__1 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vexecute___024root___eval_initial__TOP(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ execute__DOT__gte_signed;
    execute__DOT__gte_signed = 0;
    CData/*0:0*/ execute__DOT__gte_unsigned;
    execute__DOT__gte_unsigned = 0;
    CData/*0:0*/ execute__DOT__equal;
    execute__DOT__equal = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__difference;
    execute__DOT__predicates_unit__DOT__difference = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__carry_out;
    execute__DOT__predicates_unit__DOT__carry_out = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__overflow_signed;
    execute__DOT__predicates_unit__DOT__overflow_signed = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__carries;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__carries = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out = 0;
    // Body
    vlSelfRef.execute_ready = 1U;
    vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset = 1U;
    vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected = 0U;
    vlSelfRef.execute__DOT__add_sub_unit__DOT__carry_in_selected = 0U;
    execute__DOT__equal = 0U;
    execute__DOT__gte_unsigned = 0U;
    vlSelfRef.execute__DOT__lt_signed = 0U;
    execute__DOT__gte_signed = 0U;
    execute__DOT__predicates_unit__DOT__difference = 0U;
    execute__DOT__predicates_unit__DOT__carry_out = 0U;
    execute__DOT__predicates_unit__DOT__overflow_signed = 0U;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__carries = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out = 0U;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out = 0U;
    vlSelfRef.execute__DOT__add_sub_out = 0U;
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[0U] = 0U;
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[1U] = 0U;
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[2U] = 0U;
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[3U] = 0U;
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[4U] = 0U;
    vlSelfRef.branch_flush = 0U;
    vlSelfRef.branch_pc = 0U;
    vlSelfRef.rd_addr_out = 0U;
    vlSelfRef.rd_val_out = 0U;
    vlSelfRef.load_store_op_out = 0U;
}

VL_ATTR_COLD void Vexecute___024root___eval_final(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__stl(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vexecute___024root___eval_phase__stl(Vexecute___024root* vlSelf);

VL_ATTR_COLD void Vexecute___024root___eval_settle(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_settle\n"); );
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
            Vexecute___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/execute.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vexecute___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__stl(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] execute.shifter.shift_right.partial)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexecute___024root___stl_sequent__TOP__0(Vexecute___024root* vlSelf);
VL_ATTR_COLD void Vexecute___024root___stl_sequent__TOP__1(Vexecute___024root* vlSelf);
VL_ATTR_COLD void Vexecute___024root___stl_comb__TOP__0(Vexecute___024root* vlSelf);

VL_ATTR_COLD void Vexecute___024root___eval_stl(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vexecute___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vexecute___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vexecute___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vexecute___024root___stl_sequent__TOP__0(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ execute__DOT__alu_selector_a;
    execute__DOT__alu_selector_a = 0;
    IData/*31:0*/ execute__DOT__alu_selector_b;
    execute__DOT__alu_selector_b = 0;
    CData/*3:0*/ execute__DOT__boolean_op;
    execute__DOT__boolean_op = 0;
    CData/*0:0*/ execute__DOT__gte_signed;
    execute__DOT__gte_signed = 0;
    CData/*0:0*/ execute__DOT__gte_unsigned;
    execute__DOT__gte_unsigned = 0;
    CData/*0:0*/ execute__DOT__equal;
    execute__DOT__equal = 0;
    CData/*0:0*/ execute__DOT__not_equal;
    execute__DOT__not_equal = 0;
    CData/*0:0*/ execute__DOT__branch_should_take;
    execute__DOT__branch_should_take = 0;
    CData/*0:0*/ execute__DOT__branch_taken_is_not_same;
    execute__DOT__branch_taken_is_not_same = 0;
    CData/*0:0*/ execute__DOT__is_jump_and_not_taken;
    execute__DOT__is_jump_and_not_taken = 0;
    IData/*31:0*/ execute__DOT__address_target_c;
    execute__DOT__address_target_c = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__difference;
    execute__DOT__predicates_unit__DOT__difference = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__carry_out;
    execute__DOT__predicates_unit__DOT__carry_out = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__overflow_signed;
    execute__DOT__predicates_unit__DOT__overflow_signed = 0;
    CData/*0:0*/ execute__DOT__predicates_unit__DOT__negative;
    execute__DOT__predicates_unit__DOT__negative = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__carries;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__carries = 0;
    IData/*31:0*/ execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected;
    execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out = 0;
    CData/*0:0*/ execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out;
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out = 0;
    IData/*31:0*/ execute__DOT__add_sub_unit__DOT__B_selected;
    execute__DOT__add_sub_unit__DOT__B_selected = 0;
    IData/*31:0*/ execute__DOT__add_sub_unit__DOT__negated_offset;
    execute__DOT__add_sub_unit__DOT__negated_offset = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_impl_data_in;
    execute__DOT__shifter__DOT__shift_impl_data_in = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__shifted_data_out;
    execute__DOT__shifter__DOT__shifted_data_out = 0;
    CData/*0:0*/ execute__DOT__shifter__DOT__sign_in;
    execute__DOT__shifter__DOT__sign_in = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__shift_or_rotate_out;
    execute__DOT__shifter__DOT__shift_or_rotate_out = 0;
    IData/*31:0*/ execute__DOT__shifter__DOT__right_or_left_out;
    execute__DOT__shifter__DOT__right_or_left_out = 0;
    // Body
    execute__DOT__boolean_op = ((4U == (IData)(vlSelfRef.funct3))
                                 ? 6U : ((6U == (IData)(vlSelfRef.funct3))
                                          ? 0xeU : 
                                         ((7U == (IData)(vlSelfRef.funct3))
                                           ? 8U : 0U)));
    execute__DOT__alu_selector_b = ((IData)(vlSelfRef.alusrc_b)
                                     ? vlSelfRef.rs2_val_in
                                     : vlSelfRef.immediate_in);
    if ((1U == (IData)(vlSelfRef.alu_op))) {
        execute__DOT__add_sub_unit__DOT__negated_offset = 1U;
        execute__DOT__add_sub_unit__DOT__B_selected 
            = (~ execute__DOT__alu_selector_b);
    } else {
        execute__DOT__add_sub_unit__DOT__negated_offset = 0U;
        execute__DOT__add_sub_unit__DOT__B_selected 
            = execute__DOT__alu_selector_b;
    }
    execute__DOT__alu_selector_a = ((IData)(vlSelfRef.alusrc_a)
                                     ? vlSelfRef.rs1_val_in
                                     : vlSelfRef.instr_address_in);
    execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected 
        = (~ execute__DOT__alu_selector_b);
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x1eU)) | (execute__DOT__alu_selector_b 
                                          >> 0x1fU))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x1dU)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x1eU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x1cU)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x1dU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x1bU)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x1cU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x1aU)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x1bU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x19U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x1aU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x18U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x19U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x17U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x18U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x16U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x17U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x15U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x16U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x14U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x15U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x13U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x14U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x12U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x13U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x11U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x12U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0x10U)) | (1U & (execute__DOT__alu_selector_b 
                                                >> 0x11U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xfU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0x10U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xeU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0xfU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xdU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0xeU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xcU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0xdU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xbU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0xcU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 0xaU)) | (1U & (execute__DOT__alu_selector_b 
                                               >> 0xbU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 9U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 0xaU)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 8U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 9U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 7U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 8U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 6U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 7U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 5U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 6U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 4U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 5U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 3U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 4U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 2U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 3U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            >> 1U)) | (1U & (execute__DOT__alu_selector_b 
                                             >> 2U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & execute__DOT__alu_selector_a) 
                     | (1U & (execute__DOT__alu_selector_b 
                              >> 1U)))));
    execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out 
        = (1U & ((IData)(execute__DOT__boolean_op) 
                 >> ((2U & (execute__DOT__alu_selector_a 
                            << 1U)) | (1U & execute__DOT__alu_selector_b))));
    execute__DOT__shifter__DOT__sign_in = (execute__DOT__alu_selector_a 
                                           >> 0x1fU);
    vlSelfRef.execute__DOT__add_sub_out = (((execute__DOT__alu_selector_a 
                                             + execute__DOT__add_sub_unit__DOT__B_selected) 
                                            + execute__DOT__add_sub_unit__DOT__negated_offset) 
                                           + vlSelfRef.execute__DOT__add_sub_unit__DOT__carry_in_selected);
    execute__DOT__predicates_unit__DOT__carry_out = 
        (1U & (IData)((1ULL & (((((QData)((IData)(execute__DOT__alu_selector_a)) 
                                  + (QData)((IData)(execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected))) 
                                 + (QData)((IData)(vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset))) 
                                + (QData)((IData)(vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected))) 
                               >> 0x20U))));
    execute__DOT__predicates_unit__DOT__difference 
        = (((execute__DOT__alu_selector_a + execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected) 
            + vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset) 
           + vlSelfRef.execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected);
    vlSelfRef.execute__DOT__boolean_op_out = (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__31__KET____DOT__select_bit__word_out) 
                                               << 0x1fU) 
                                              | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__30__KET____DOT__select_bit__word_out) 
                                                  << 0x1eU) 
                                                 | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__29__KET____DOT__select_bit__word_out) 
                                                     << 0x1dU) 
                                                    | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__28__KET____DOT__select_bit__word_out) 
                                                        << 0x1cU) 
                                                       | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__27__KET____DOT__select_bit__word_out) 
                                                           << 0x1bU) 
                                                          | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__26__KET____DOT__select_bit__word_out) 
                                                              << 0x1aU) 
                                                             | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__25__KET____DOT__select_bit__word_out) 
                                                                 << 0x19U) 
                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__24__KET____DOT__select_bit__word_out) 
                                                                    << 0x18U) 
                                                                   | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__23__KET____DOT__select_bit__word_out) 
                                                                       << 0x17U) 
                                                                      | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__22__KET____DOT__select_bit__word_out) 
                                                                          << 0x16U) 
                                                                         | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__21__KET____DOT__select_bit__word_out) 
                                                                             << 0x15U) 
                                                                            | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__20__KET____DOT__select_bit__word_out) 
                                                                                << 0x14U) 
                                                                               | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__19__KET____DOT__select_bit__word_out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__18__KET____DOT__select_bit__word_out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__17__KET____DOT__select_bit__word_out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__16__KET____DOT__select_bit__word_out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__15__KET____DOT__select_bit__word_out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__14__KET____DOT__select_bit__word_out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__13__KET____DOT__select_bit__word_out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__12__KET____DOT__select_bit__word_out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__11__KET____DOT__select_bit__word_out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__10__KET____DOT__select_bit__word_out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__9__KET____DOT__select_bit__word_out) 
                                                                                << 9U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__8__KET____DOT__select_bit__word_out) 
                                                                                << 8U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__7__KET____DOT__select_bit__word_out) 
                                                                                << 7U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__6__KET____DOT__select_bit__word_out) 
                                                                                << 6U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__5__KET____DOT__select_bit__word_out) 
                                                                                << 5U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__4__KET____DOT__select_bit__word_out) 
                                                                                << 4U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__3__KET____DOT__select_bit__word_out) 
                                                                                << 3U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__2__KET____DOT__select_bit__word_out) 
                                                                                << 2U) 
                                                                                | (((IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__1__KET____DOT__select_bit__word_out) 
                                                                                << 1U) 
                                                                                | (IData)(execute__DOT__boolean_ops__DOT____Vcellout__per_bit__BRA__0__KET____DOT__select_bit__word_out))))))))))))))))))))))))))))))));
    vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in 
        = ((0x20U == (IData)(vlSelfRef.funct7)) & (IData)(execute__DOT__shifter__DOT__sign_in));
    execute__DOT__predicates_unit__DOT__subtractor__DOT__carries 
        = (execute__DOT__alu_selector_a ^ (execute__DOT__predicates_unit__DOT__difference 
                                           ^ execute__DOT__predicates_unit__DOT__subtractor__DOT__B_selected));
    execute__DOT__shifter__DOT__shift_impl_data_in 
        = ((1U == (IData)(vlSelfRef.funct3)) ? VL_STREAML_FAST_III(32, execute__DOT__alu_selector_a, 0)
            : execute__DOT__alu_selector_a);
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[0U] 
        = ((1U & vlSelfRef.immediate_in) ? (((IData)(vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in) 
                                             << 0x1fU) 
                                            | (execute__DOT__shifter__DOT__shift_impl_data_in 
                                               >> 1U))
            : execute__DOT__shifter__DOT__shift_impl_data_in);
    execute__DOT__shifter__DOT__shifted_data_out = 
        vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial
        [4U];
    execute__DOT__predicates_unit__DOT__overflow_signed 
        = ((execute__DOT__predicates_unit__DOT__subtractor__DOT__carries 
            >> 0x1fU) != (IData)(execute__DOT__predicates_unit__DOT__carry_out));
    execute__DOT__shifter__DOT__shift_or_rotate_out 
        = execute__DOT__shifter__DOT__shifted_data_out;
    execute__DOT__shifter__DOT__right_or_left_out = 
        ((1U == (IData)(vlSelfRef.funct3)) ? VL_STREAML_FAST_III(32, execute__DOT__shifter__DOT__shift_or_rotate_out, 0)
          : execute__DOT__shifter__DOT__shift_or_rotate_out);
    vlSelfRef.execute__DOT__shift_out = execute__DOT__shifter__DOT__right_or_left_out;
    execute__DOT__predicates_unit__DOT__negative = 
        (execute__DOT__predicates_unit__DOT__difference 
         >> 0x1fU);
    execute__DOT__equal = (0U == execute__DOT__predicates_unit__DOT__difference);
    vlSelfRef.execute__DOT__lt_unsigned = (1U & (~ (IData)(execute__DOT__predicates_unit__DOT__carry_out)));
    execute__DOT__gte_unsigned = execute__DOT__predicates_unit__DOT__carry_out;
    vlSelfRef.execute__DOT__lt_signed = ((IData)(execute__DOT__predicates_unit__DOT__negative) 
                                         != (IData)(execute__DOT__predicates_unit__DOT__overflow_signed));
    execute__DOT__gte_signed = ((IData)(execute__DOT__predicates_unit__DOT__negative) 
                                == (IData)(execute__DOT__predicates_unit__DOT__overflow_signed));
    execute__DOT__not_equal = (1U & (~ (IData)(execute__DOT__equal)));
    execute__DOT__address_target_c = (((IData)(vlSelfRef.addr_offset_from_reg)
                                        ? vlSelfRef.rs1_val_in
                                        : vlSelfRef.instr_address_in) 
                                      + vlSelfRef.addr_offset_in);
    execute__DOT__branch_should_take = ((1U & ((IData)(vlSelfRef.alu_op) 
                                               >> 3U)) 
                                        && ((4U & (IData)(vlSelfRef.alu_op))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.alu_op))
                                                  ? (IData)(execute__DOT__not_equal)
                                                  : (IData)(execute__DOT__equal))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.alu_op))
                                                  ? (IData)(execute__DOT__gte_unsigned)
                                                  : (IData)(execute__DOT__gte_signed)))
                                             : ((1U 
                                                 & ((IData)(vlSelfRef.alu_op) 
                                                    >> 1U)) 
                                                && ((1U 
                                                     & (IData)(vlSelfRef.alu_op))
                                                     ? (IData)(vlSelfRef.execute__DOT__lt_unsigned)
                                                     : (IData)(vlSelfRef.execute__DOT__lt_signed)))));
    execute__DOT__branch_taken_is_not_same = ((IData)(execute__DOT__branch_should_take) 
                                              != (IData)(vlSelfRef.branch_taken_in));
    execute__DOT__is_jump_and_not_taken = ((2U == (IData)(vlSelfRef.is_branch_op)) 
                                           & (~ (IData)(vlSelfRef.branch_taken_in)));
    vlSelfRef.execute__DOT__branch_flush_out_c = (((IData)(execute__DOT__branch_taken_is_not_same) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.is_branch_op))) 
                                                  | (IData)(execute__DOT__is_jump_and_not_taken));
    vlSelfRef.execute__DOT__branch_pc_c = ((IData)(vlSelfRef.execute__DOT__branch_flush_out_c)
                                            ? execute__DOT__address_target_c
                                            : 0U);
}

VL_ATTR_COLD void Vexecute___024root___stl_sequent__TOP__1(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___stl_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial
        [0U];
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial
        [1U];
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial
        [2U];
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 
        = vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial
        [3U];
}

VL_ATTR_COLD void Vexecute___024root___stl_comb__TOP__0(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___stl_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[1U] 
        = ((2U & vlSelfRef.immediate_in) ? (((- (IData)((IData)(vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in))) 
                                             << 0x1eU) 
                                            | (vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 
                                               >> 2U))
            : vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2);
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[2U] 
        = ((4U & vlSelfRef.immediate_in) ? (((- (IData)((IData)(vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in))) 
                                             << 0x1cU) 
                                            | (vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 
                                               >> 4U))
            : vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2);
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[3U] 
        = ((8U & vlSelfRef.immediate_in) ? (((- (IData)((IData)(vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in))) 
                                             << 0x18U) 
                                            | (vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 
                                               >> 8U))
            : vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2);
    vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__partial[4U] 
        = ((0x10U & vlSelfRef.immediate_in) ? (((- (IData)((IData)(vlSelfRef.execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in))) 
                                                << 0x10U) 
                                               | (vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 
                                                  >> 0x10U))
            : vlSelfRef.execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2);
}

VL_ATTR_COLD void Vexecute___024root___eval_triggers__stl(Vexecute___024root* vlSelf);

VL_ATTR_COLD bool Vexecute___024root___eval_phase__stl(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vexecute___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vexecute___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__ico(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vexecute___024root___dump_triggers__act(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] execute.shifter.shift_right.partial)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__nba(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] execute.shifter.shift_right.partial)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexecute___024root___ctor_var_reset(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->branch_flush = VL_RAND_RESET_I(1);
    vlSelf->branch_pc = VL_RAND_RESET_I(32);
    vlSelf->immediate_in = VL_RAND_RESET_I(32);
    vlSelf->rs1_val_in = VL_RAND_RESET_I(32);
    vlSelf->rs2_val_in = VL_RAND_RESET_I(32);
    vlSelf->rd_addr_in = VL_RAND_RESET_I(5);
    vlSelf->rd_val_out = VL_RAND_RESET_I(32);
    vlSelf->rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->alusrc_a = VL_RAND_RESET_I(1);
    vlSelf->alusrc_b = VL_RAND_RESET_I(1);
    vlSelf->addr_offset_from_reg = VL_RAND_RESET_I(1);
    vlSelf->load_store_op_in = VL_RAND_RESET_I(4);
    vlSelf->load_store_op_out = VL_RAND_RESET_I(4);
    vlSelf->is_branch_op = VL_RAND_RESET_I(2);
    vlSelf->alu_op = VL_RAND_RESET_I(4);
    vlSelf->addr_offset_in = VL_RAND_RESET_I(32);
    vlSelf->instr_address_in = VL_RAND_RESET_I(32);
    vlSelf->branch_taken_in = VL_RAND_RESET_I(1);
    vlSelf->decode_valid = VL_RAND_RESET_I(1);
    vlSelf->execute_ready = VL_RAND_RESET_I(1);
    vlSelf->memory_ready = VL_RAND_RESET_I(1);
    vlSelf->execute_valid = VL_RAND_RESET_I(1);
    vlSelf->execute__DOT__lt_signed = VL_RAND_RESET_I(1);
    vlSelf->execute__DOT__lt_unsigned = VL_RAND_RESET_I(1);
    vlSelf->execute__DOT__boolean_op_out = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__add_sub_out = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__shift_out = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__branch_flush_out_c = VL_RAND_RESET_I(1);
    vlSelf->execute__DOT__branch_pc_c = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__predicates_unit__DOT__subtractor__DOT__negated_offset = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__predicates_unit__DOT__subtractor__DOT__carry_in_selected = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__add_sub_unit__DOT__carry_in_selected = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__shifter__DOT____Vcellinp__shift_right__sign_in = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->execute__DOT__shifter__DOT__shift_right__DOT__partial[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__1__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__2__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__3__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    vlSelf->execute__DOT__shifter__DOT__shift_right__DOT__gen_shift__DOT__genblk1__BRA__4__KET____DOT__tmp2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__execute__DOT__shifter__DOT__shift_right__DOT__partial__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
