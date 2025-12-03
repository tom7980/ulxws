// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_fetch.h for the primary calling header

#include "Vinstruction_fetch__pch.h"
#include "Vinstruction_fetch___024root.h"

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_static__TOP(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_static(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinstruction_fetch___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_static__TOP(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ instruction_fetch__DOT__branch_backwards;
    instruction_fetch__DOT__branch_backwards = 0;
    // Body
    vlSelfRef.instruction_fetch__DOT__instr_buf_one = 0x13U;
    vlSelfRef.instruction_fetch__DOT__addr_buf_one = 0x13U;
    vlSelfRef.instruction_fetch__DOT__predicted_branch_address = 0U;
    instruction_fetch__DOT__branch_backwards = 0U;
}

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_initial__TOP(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_initial(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinstruction_fetch___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_initial__TOP(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fetch_instr_out_valid = 1U;
    vlSelfRef.fetch_addr_valid = 1U;
    vlSelfRef.instruction_fetch__DOT__instr_buf_one = 0x13U;
    vlSelfRef.instruction_fetch__DOT__addr_buf_one = 0U;
    vlSelfRef.instruction_fetch__DOT__pc_addr_buf = 0U;
}

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_final(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__stl(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinstruction_fetch___024root___eval_phase__stl(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_settle(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_settle\n"); );
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
            Vinstruction_fetch___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_fetch.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vinstruction_fetch___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__stl(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vinstruction_fetch___024root___stl_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_stl(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vinstruction_fetch___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vinstruction_fetch___024root___stl_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ instruction_fetch__DOT__is_jal;
    instruction_fetch__DOT__is_jal = 0;
    CData/*0:0*/ instruction_fetch__DOT__is_branch;
    instruction_fetch__DOT__is_branch = 0;
    CData/*0:0*/ instruction_fetch__DOT__branch_backwards;
    instruction_fetch__DOT__branch_backwards = 0;
    // Body
    vlSelfRef.instr_out = vlSelfRef.instruction_fetch__DOT__instr_buf_one;
    vlSelfRef.decode_addr_out = vlSelfRef.instruction_fetch__DOT__addr_buf_one;
    vlSelfRef.fetch_instr_in_ready = ((~ (IData)(vlSelfRef.branch_flush)) 
                                      & (IData)(vlSelfRef.decode_ready));
    vlSelfRef.instruction_fetch__DOT____Vcellinp__addr_reg_one__write_enable 
        = ((IData)(vlSelfRef.decode_ready) & ((IData)(vlSelfRef.mem_addr_ready) 
                                              & (IData)(vlSelfRef.mem_instr_in_valid)));
    instruction_fetch__DOT__is_jal = (0x6fU == (0x7fU 
                                                & vlSelfRef.instruction_fetch__DOT__instr_buf_one));
    instruction_fetch__DOT__is_branch = (0x63U == (0x7fU 
                                                   & vlSelfRef.instruction_fetch__DOT__instr_buf_one));
    instruction_fetch__DOT__branch_backwards = (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                >> 0x1fU);
    vlSelfRef.instruction_fetch__DOT__predicted_branch_address 
        = (vlSelfRef.instruction_fetch__DOT__addr_buf_one 
           + ((IData)(instruction_fetch__DOT__is_jal)
               ? (((- (IData)((vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                               >> 0x1fU))) << 0x14U) 
                  | ((0xff000U & vlSelfRef.instruction_fetch__DOT__instr_buf_one) 
                     | ((0x800U & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                   >> 9U)) | (0x7feU 
                                              & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                 >> 0x14U)))))
               : ((IData)(instruction_fetch__DOT__is_branch)
                   ? (((- (IData)((vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                     >> 7U)))))
                   : 0U)));
    vlSelfRef.branch_taken = ((IData)(instruction_fetch__DOT__is_jal) 
                              | ((IData)(instruction_fetch__DOT__branch_backwards) 
                                 & (IData)(instruction_fetch__DOT__is_branch)));
    vlSelfRef.mem_addr_out = ((IData)(vlSelfRef.branch_taken)
                               ? vlSelfRef.instruction_fetch__DOT__predicted_branch_address
                               : vlSelfRef.instruction_fetch__DOT__pc_addr_buf);
    vlSelfRef.instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data 
        = ((IData)(vlSelfRef.branch_flush) ? vlSelfRef.branch_pc_in
            : ((IData)(vlSelfRef.branch_taken) ? ((IData)(4U) 
                                                  + vlSelfRef.instruction_fetch__DOT__predicted_branch_address)
                : ((IData)(4U) + vlSelfRef.instruction_fetch__DOT__pc_addr_buf)));
}

VL_ATTR_COLD void Vinstruction_fetch___024root___eval_triggers__stl(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD bool Vinstruction_fetch___024root___eval_phase__stl(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinstruction_fetch___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vinstruction_fetch___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__ico(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__act(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__nba(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vinstruction_fetch___024root___ctor_var_reset(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->fetch_addr_valid = VL_RAND_RESET_I(1);
    vlSelf->mem_addr_ready = VL_RAND_RESET_I(1);
    vlSelf->instr_in = VL_RAND_RESET_I(32);
    vlSelf->fetch_instr_in_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_instr_in_valid = VL_RAND_RESET_I(1);
    vlSelf->instr_out = VL_RAND_RESET_I(32);
    vlSelf->decode_addr_out = VL_RAND_RESET_I(32);
    vlSelf->fetch_instr_out_valid = VL_RAND_RESET_I(1);
    vlSelf->decode_ready = VL_RAND_RESET_I(1);
    vlSelf->branch_taken = VL_RAND_RESET_I(1);
    vlSelf->branch_flush = VL_RAND_RESET_I(1);
    vlSelf->branch_pc_in = VL_RAND_RESET_I(32);
    vlSelf->instruction_fetch__DOT__instr_buf_one = VL_RAND_RESET_I(32);
    vlSelf->instruction_fetch__DOT__addr_buf_one = VL_RAND_RESET_I(32);
    vlSelf->instruction_fetch__DOT____Vcellinp__addr_reg_one__write_enable = VL_RAND_RESET_I(1);
    vlSelf->instruction_fetch__DOT__pc_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data = VL_RAND_RESET_I(32);
    vlSelf->instruction_fetch__DOT__predicted_branch_address = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
