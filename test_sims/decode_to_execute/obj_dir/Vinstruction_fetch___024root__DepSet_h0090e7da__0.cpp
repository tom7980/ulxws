// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_fetch.h for the primary calling header

#include "Vinstruction_fetch__pch.h"
#include "Vinstruction_fetch___024root.h"

void Vinstruction_fetch___024root___ico_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf);

void Vinstruction_fetch___024root___eval_ico(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vinstruction_fetch___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinstruction_fetch___024root___ico_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fetch_instr_in_ready = ((~ (IData)(vlSelfRef.branch_flush)) 
                                      & (IData)(vlSelfRef.decode_ready));
    vlSelfRef.instruction_fetch__DOT____Vcellinp__addr_reg_one__write_enable 
        = ((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.mem_instr_in_valid));
    vlSelfRef.instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data 
        = ((IData)(vlSelfRef.branch_flush) ? vlSelfRef.branch_pc_in
            : ((IData)(vlSelfRef.branch_taken) ? ((IData)(4U) 
                                                  + vlSelfRef.instruction_fetch__DOT__predicted_branch_address)
                : ((IData)(4U) + vlSelfRef.instruction_fetch__DOT__pc_addr_buf)));
}

void Vinstruction_fetch___024root___eval_triggers__ico(Vinstruction_fetch___024root* vlSelf);

bool Vinstruction_fetch___024root___eval_phase__ico(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vinstruction_fetch___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vinstruction_fetch___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vinstruction_fetch___024root___eval_act(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vinstruction_fetch___024root___nba_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf);

void Vinstruction_fetch___024root___eval_nba(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vinstruction_fetch___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinstruction_fetch___024root___nba_sequent__TOP__0(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ instruction_fetch__DOT__is_jal;
    instruction_fetch__DOT__is_jal = 0;
    CData/*0:0*/ instruction_fetch__DOT__is_branch;
    instruction_fetch__DOT__is_branch = 0;
    CData/*0:0*/ instruction_fetch__DOT__branch_backwards;
    instruction_fetch__DOT__branch_backwards = 0;
    IData/*31:0*/ instruction_fetch__DOT__is_branch_offset;
    instruction_fetch__DOT__is_branch_offset = 0;
    CData/*0:0*/ instruction_fetch__DOT__partial_branch_taken;
    instruction_fetch__DOT__partial_branch_taken = 0;
    // Body
    vlSelfRef.fetch_instr_out_valid = vlSelfRef.mem_instr_in_valid;
    if ((((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.mem_addr_ready)) 
         | (IData)(vlSelfRef.branch_flush))) {
        vlSelfRef.instruction_fetch__DOT__pc_addr_buf 
            = vlSelfRef.instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data;
    }
    if (vlSelfRef.instruction_fetch__DOT____Vcellinp__addr_reg_one__write_enable) {
        vlSelfRef.instruction_fetch__DOT__instr_buf_one 
            = vlSelfRef.instr_in;
        vlSelfRef.instruction_fetch__DOT__addr_buf_one 
            = vlSelfRef.mem_addr_out;
    }
    if (vlSelfRef.branch_flush) {
        vlSelfRef.instruction_fetch__DOT__instr_buf_one = 0x13U;
    }
    vlSelfRef.instr_out = vlSelfRef.instruction_fetch__DOT__instr_buf_one;
    vlSelfRef.decode_addr_out = vlSelfRef.instruction_fetch__DOT__addr_buf_one;
    instruction_fetch__DOT__is_jal = (0x6fU == (0x7fU 
                                                & vlSelfRef.instruction_fetch__DOT__instr_buf_one));
    instruction_fetch__DOT__is_branch = (0x63U == (0x7fU 
                                                   & vlSelfRef.instruction_fetch__DOT__instr_buf_one));
    instruction_fetch__DOT__branch_backwards = (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                >> 0x1fU);
    instruction_fetch__DOT__is_branch_offset = ((IData)(instruction_fetch__DOT__is_branch)
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.instruction_fetch__DOT__instr_buf_one 
                                                             >> 7U)))))
                                                 : 0U);
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
               : instruction_fetch__DOT__is_branch_offset));
    instruction_fetch__DOT__partial_branch_taken = 
        ((IData)(instruction_fetch__DOT__branch_backwards) 
         & (IData)(instruction_fetch__DOT__is_branch));
    vlSelfRef.branch_taken = ((IData)(instruction_fetch__DOT__is_jal) 
                              | (IData)(instruction_fetch__DOT__partial_branch_taken));
    vlSelfRef.instruction_fetch__DOT____Vcellinp__pc_reg_inst__input_data 
        = ((IData)(vlSelfRef.branch_flush) ? vlSelfRef.branch_pc_in
            : ((IData)(vlSelfRef.branch_taken) ? ((IData)(4U) 
                                                  + vlSelfRef.instruction_fetch__DOT__predicted_branch_address)
                : ((IData)(4U) + vlSelfRef.instruction_fetch__DOT__pc_addr_buf)));
    vlSelfRef.mem_addr_out = ((IData)(vlSelfRef.branch_taken)
                               ? vlSelfRef.instruction_fetch__DOT__predicted_branch_address
                               : vlSelfRef.instruction_fetch__DOT__pc_addr_buf);
}

void Vinstruction_fetch___024root___eval_triggers__act(Vinstruction_fetch___024root* vlSelf);

bool Vinstruction_fetch___024root___eval_phase__act(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vinstruction_fetch___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vinstruction_fetch___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinstruction_fetch___024root___eval_phase__nba(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vinstruction_fetch___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__ico(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__nba(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_fetch___024root___dump_triggers__act(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_fetch___024root___eval(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval\n"); );
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
            Vinstruction_fetch___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_fetch.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vinstruction_fetch___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vinstruction_fetch___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_fetch.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vinstruction_fetch___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../riscv/instruction_fetch.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vinstruction_fetch___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vinstruction_fetch___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vinstruction_fetch___024root___eval_debug_assertions(Vinstruction_fetch___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_fetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_fetch___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.mem_addr_ready & 0xfeU))) {
        Verilated::overWidthError("mem_addr_ready");}
    if (VL_UNLIKELY((vlSelfRef.mem_instr_in_valid & 0xfeU))) {
        Verilated::overWidthError("mem_instr_in_valid");}
    if (VL_UNLIKELY((vlSelfRef.decode_ready & 0xfeU))) {
        Verilated::overWidthError("decode_ready");}
    if (VL_UNLIKELY((vlSelfRef.branch_flush & 0xfeU))) {
        Verilated::overWidthError("branch_flush");}
}
#endif  // VL_DEBUG
