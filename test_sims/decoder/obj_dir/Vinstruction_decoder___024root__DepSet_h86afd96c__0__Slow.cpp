// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_decoder.h for the primary calling header

#include "Vinstruction_decoder__pch.h"
#include "Vinstruction_decoder___024root.h"

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_static__TOP(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_static(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinstruction_decoder___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_static__TOP(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ instruction_decoder__DOT__op_imm;
    instruction_decoder__DOT__op_imm = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_r_to_r;
    instruction_decoder__DOT__op_r_to_r = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_jal;
    instruction_decoder__DOT__op_jal = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_jalr;
    instruction_decoder__DOT__op_jalr = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_auipc;
    instruction_decoder__DOT__op_auipc = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_lui;
    instruction_decoder__DOT__op_lui = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_branch;
    instruction_decoder__DOT__op_branch = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_load;
    instruction_decoder__DOT__op_load = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_store;
    instruction_decoder__DOT__op_store = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_misc_mem;
    instruction_decoder__DOT__op_misc_mem = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_sys;
    instruction_decoder__DOT__op_sys = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_r;
    instruction_decoder__DOT__op_type_r = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_i;
    instruction_decoder__DOT__op_type_i = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_s;
    instruction_decoder__DOT__op_type_s = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_b;
    instruction_decoder__DOT__op_type_b = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_u;
    instruction_decoder__DOT__op_type_u = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_j;
    instruction_decoder__DOT__op_type_j = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_unknown;
    instruction_decoder__DOT__op_unknown = 0;
    // Body
    instruction_decoder__DOT__op_imm = 0U;
    instruction_decoder__DOT__op_r_to_r = 0U;
    instruction_decoder__DOT__op_jal = 0U;
    instruction_decoder__DOT__op_jalr = 0U;
    instruction_decoder__DOT__op_auipc = 0U;
    instruction_decoder__DOT__op_lui = 0U;
    instruction_decoder__DOT__op_branch = 0U;
    instruction_decoder__DOT__op_load = 0U;
    instruction_decoder__DOT__op_store = 0U;
    instruction_decoder__DOT__op_misc_mem = 0U;
    instruction_decoder__DOT__op_sys = 0U;
    instruction_decoder__DOT__op_type_r = 0U;
    instruction_decoder__DOT__op_type_i = 0U;
    instruction_decoder__DOT__op_type_s = 0U;
    instruction_decoder__DOT__op_type_b = 0U;
    instruction_decoder__DOT__op_type_u = 0U;
    instruction_decoder__DOT__op_type_j = 0U;
    instruction_decoder__DOT__op_unknown = 0U;
}

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_initial__TOP(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_initial(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinstruction_decoder___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_initial__TOP(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction_decoder__DOT__instruction_r = 0x13U;
    vlSelfRef.instr_address_out = 0U;
}

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_final(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__stl(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinstruction_decoder___024root___eval_phase__stl(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_settle(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_settle\n"); );
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
            Vinstruction_decoder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_decoder.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vinstruction_decoder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__stl(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vinstruction_decoder___024root___stl_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_stl(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vinstruction_decoder___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vinstruction_decoder___024root___stl_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ instruction_decoder__DOT__op_imm;
    instruction_decoder__DOT__op_imm = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_r_to_r;
    instruction_decoder__DOT__op_r_to_r = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_jal;
    instruction_decoder__DOT__op_jal = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_jalr;
    instruction_decoder__DOT__op_jalr = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_auipc;
    instruction_decoder__DOT__op_auipc = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_lui;
    instruction_decoder__DOT__op_lui = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_branch;
    instruction_decoder__DOT__op_branch = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_load;
    instruction_decoder__DOT__op_load = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_store;
    instruction_decoder__DOT__op_store = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_misc_mem;
    instruction_decoder__DOT__op_misc_mem = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_sys;
    instruction_decoder__DOT__op_sys = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_r;
    instruction_decoder__DOT__op_type_r = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_i;
    instruction_decoder__DOT__op_type_i = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_s;
    instruction_decoder__DOT__op_type_s = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_b;
    instruction_decoder__DOT__op_type_b = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_u;
    instruction_decoder__DOT__op_type_u = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_type_j;
    instruction_decoder__DOT__op_type_j = 0;
    CData/*0:0*/ instruction_decoder__DOT__op_unknown;
    instruction_decoder__DOT__op_unknown = 0;
    // Body
    vlSelfRef.rs1_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                  >> 0xfU));
    vlSelfRef.rs2_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                  >> 0x14U));
    vlSelfRef.rd_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                 >> 7U));
    vlSelfRef.funct7 = (vlSelfRef.instruction_decoder__DOT__instruction_r 
                        >> 0x19U);
    vlSelfRef.funct3 = (7U & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                              >> 0xcU));
    vlSelfRef.opcode = (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r);
    vlSelfRef.decode_ready = ((IData)(vlSelfRef.execute_ready) 
                              & (~ (IData)(vlSelfRef.stall)));
    instruction_decoder__DOT__op_imm = (0x13U == (0x7fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_branch = (0x63U == 
                                           (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_r_to_r = (0x33U == 
                                           (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_jal = (0x6fU == (0x7fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_jalr = (0x67U == (0x7fU 
                                                   & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_auipc = (0x17U == 
                                          (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_lui = (0x37U == (0x7fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_load = (3U == (0x7fU 
                                                & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_store = (0x23U == 
                                          (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_misc_mem = (0x17U 
                                             == (0x7fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r));
    instruction_decoder__DOT__op_sys = (0x73U == (0x7fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r));
    vlSelfRef.instruction_decoder__DOT____Vcellinp__instr_address_reg_in__write_enable 
        = ((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.instr_valid));
    instruction_decoder__DOT__op_type_r = instruction_decoder__DOT__op_r_to_r;
    instruction_decoder__DOT__op_type_i = (((IData)(instruction_decoder__DOT__op_imm) 
                                            | (IData)(instruction_decoder__DOT__op_load)) 
                                           | (IData)(instruction_decoder__DOT__op_jalr));
    instruction_decoder__DOT__op_type_s = instruction_decoder__DOT__op_store;
    instruction_decoder__DOT__op_type_b = instruction_decoder__DOT__op_branch;
    instruction_decoder__DOT__op_type_u = ((IData)(instruction_decoder__DOT__op_lui) 
                                           | (IData)(instruction_decoder__DOT__op_auipc));
    instruction_decoder__DOT__op_type_j = instruction_decoder__DOT__op_jal;
    instruction_decoder__DOT__op_unknown = (1U & ((
                                                   ((((((~ (IData)(instruction_decoder__DOT__op_type_b)) 
                                                        & (~ (IData)(instruction_decoder__DOT__op_type_i))) 
                                                       & (~ (IData)(instruction_decoder__DOT__op_type_j))) 
                                                      & (~ (IData)(instruction_decoder__DOT__op_type_r))) 
                                                     & (~ (IData)(instruction_decoder__DOT__op_type_s))) 
                                                    & (~ (IData)(instruction_decoder__DOT__op_type_u))) 
                                                   & (~ (IData)(instruction_decoder__DOT__op_misc_mem))) 
                                                  & (~ (IData)(instruction_decoder__DOT__op_sys))));
    vlSelfRef.illegal_instruction_exception = (((0xffffffffU 
                                                 == vlSelfRef.instruction_decoder__DOT__instruction_r) 
                                                | (0U 
                                                   == 
                                                   (0xffffU 
                                                    & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                                               | (IData)(instruction_decoder__DOT__op_unknown));
    vlSelfRef.decode_valid = (1U & (~ (IData)(vlSelfRef.illegal_instruction_exception)));
    vlSelfRef.immediate_out = ((IData)(instruction_decoder__DOT__op_type_r)
                                ? 0U : ((IData)(instruction_decoder__DOT__op_type_i)
                                         ? (((- (IData)(
                                                        (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | (0x7ffU 
                                               & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                  >> 0x14U)))
                                         : ((IData)(instruction_decoder__DOT__op_type_s)
                                             ? (((- (IData)(
                                                            (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                             >> 0x1fU))) 
                                                 << 0xbU) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                         >> 7U))))
                                             : ((IData)(instruction_decoder__DOT__op_type_b)
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                             >> 7U)))))
                                                 : 
                                                ((IData)(instruction_decoder__DOT__op_type_u)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r)
                                                  : 
                                                 ((IData)(instruction_decoder__DOT__op_type_j)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelfRef.instruction_decoder__DOT__instruction_r) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                             >> 9U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                                  >> 0x14U))))))
                                                   : 0U))))));
}

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_triggers__stl(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD bool Vinstruction_decoder___024root___eval_phase__stl(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinstruction_decoder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vinstruction_decoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__ico(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__act(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__nba(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinstruction_decoder___024root___ctor_var_reset(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->decode_reset = VL_RAND_RESET_I(1);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->instr_address_in = VL_RAND_RESET_I(32);
    vlSelf->instr_valid = VL_RAND_RESET_I(1);
    vlSelf->decode_ready = VL_RAND_RESET_I(1);
    vlSelf->immediate_out = VL_RAND_RESET_I(32);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->instr_address_out = VL_RAND_RESET_I(32);
    vlSelf->decode_valid = VL_RAND_RESET_I(1);
    vlSelf->execute_ready = VL_RAND_RESET_I(1);
    vlSelf->illegal_instruction_exception = VL_RAND_RESET_I(1);
    vlSelf->instruction_decoder__DOT__instruction_r = VL_RAND_RESET_I(32);
    vlSelf->instruction_decoder__DOT____Vcellinp__instr_address_reg_in__write_enable = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
