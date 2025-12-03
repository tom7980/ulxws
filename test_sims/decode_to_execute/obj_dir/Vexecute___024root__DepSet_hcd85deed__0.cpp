// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute.h for the primary calling header

#include "Vexecute__pch.h"
#include "Vexecute___024root.h"

void Vexecute___024root___ico_sequent__TOP__0(Vexecute___024root* vlSelf);

void Vexecute___024root___eval_ico(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vexecute___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexecute___024root___ico_sequent__TOP__0(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___ico_sequent__TOP__0\n"); );
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

void Vexecute___024root___eval_triggers__ico(Vexecute___024root* vlSelf);

bool Vexecute___024root___eval_phase__ico(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vexecute___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vexecute___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vexecute___024root___act_sequent__TOP__0(Vexecute___024root* vlSelf);

void Vexecute___024root___eval_act(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vexecute___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexecute___024root___act_sequent__TOP__0(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___act_sequent__TOP__0\n"); );
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

void Vexecute___024root___nba_sequent__TOP__0(Vexecute___024root* vlSelf);

void Vexecute___024root___eval_nba(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vexecute___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexecute___024root___nba_sequent__TOP__0(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.load_store_op_out = vlSelfRef.load_store_op_in;
    vlSelfRef.rd_addr_out = vlSelfRef.rd_addr_in;
    vlSelfRef.branch_pc = vlSelfRef.execute__DOT__branch_pc_c;
    vlSelfRef.rd_val_out = ((8U & (IData)(vlSelfRef.alu_op))
                             ? ((4U & (IData)(vlSelfRef.alu_op))
                                 ? 0U : ((2U & (IData)(vlSelfRef.alu_op))
                                          ? ((1U & (IData)(vlSelfRef.alu_op))
                                              ? (IData)(vlSelfRef.execute__DOT__lt_unsigned)
                                              : (IData)(vlSelfRef.execute__DOT__lt_signed))
                                          : 0U)) : 
                            ((4U & (IData)(vlSelfRef.alu_op))
                              ? ((2U & (IData)(vlSelfRef.alu_op))
                                  ? vlSelfRef.execute__DOT__boolean_op_out
                                  : ((1U & (IData)(vlSelfRef.alu_op))
                                      ? vlSelfRef.execute__DOT__boolean_op_out
                                      : vlSelfRef.execute__DOT__shift_out))
                              : ((2U & (IData)(vlSelfRef.alu_op))
                                  ? vlSelfRef.execute__DOT__shift_out
                                  : vlSelfRef.execute__DOT__add_sub_out)));
    if (vlSelfRef.branch_flush) {
        vlSelfRef.load_store_op_out = 0U;
        vlSelfRef.rd_addr_out = 0U;
        vlSelfRef.branch_pc = 0U;
        vlSelfRef.rd_val_out = 0U;
    }
    vlSelfRef.branch_flush = vlSelfRef.execute__DOT__branch_flush_out_c;
}

void Vexecute___024root___eval_triggers__act(Vexecute___024root* vlSelf);

bool Vexecute___024root___eval_phase__act(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexecute___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vexecute___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexecute___024root___eval_phase__nba(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexecute___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__ico(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__nba(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute___024root___dump_triggers__act(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute___024root___eval(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval\n"); );
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
            Vexecute___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/execute.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vexecute___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexecute___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/execute.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vexecute___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../riscv/execute.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vexecute___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vexecute___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexecute___024root___eval_debug_assertions(Vexecute___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rd_addr_in & 0xe0U))) {
        Verilated::overWidthError("rd_addr_in");}
    if (VL_UNLIKELY((vlSelfRef.opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelfRef.funct7 & 0x80U))) {
        Verilated::overWidthError("funct7");}
    if (VL_UNLIKELY((vlSelfRef.funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelfRef.alusrc_a & 0xfeU))) {
        Verilated::overWidthError("alusrc_a");}
    if (VL_UNLIKELY((vlSelfRef.alusrc_b & 0xfeU))) {
        Verilated::overWidthError("alusrc_b");}
    if (VL_UNLIKELY((vlSelfRef.addr_offset_from_reg 
                     & 0xfeU))) {
        Verilated::overWidthError("addr_offset_from_reg");}
    if (VL_UNLIKELY((vlSelfRef.load_store_op_in & 0xf0U))) {
        Verilated::overWidthError("load_store_op_in");}
    if (VL_UNLIKELY((vlSelfRef.is_branch_op & 0xfcU))) {
        Verilated::overWidthError("is_branch_op");}
    if (VL_UNLIKELY((vlSelfRef.alu_op & 0xf0U))) {
        Verilated::overWidthError("alu_op");}
    if (VL_UNLIKELY((vlSelfRef.branch_taken_in & 0xfeU))) {
        Verilated::overWidthError("branch_taken_in");}
    if (VL_UNLIKELY((vlSelfRef.decode_valid & 0xfeU))) {
        Verilated::overWidthError("decode_valid");}
    if (VL_UNLIKELY((vlSelfRef.memory_ready & 0xfeU))) {
        Verilated::overWidthError("memory_ready");}
}
#endif  // VL_DEBUG
