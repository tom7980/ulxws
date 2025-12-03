// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_decoder.h for the primary calling header

#include "Vinstruction_decoder__pch.h"
#include "Vinstruction_decoder___024root.h"

void Vinstruction_decoder___024root___ico_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf);

void Vinstruction_decoder___024root___eval_ico(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vinstruction_decoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinstruction_decoder___024root___ico_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.decode_ready = ((IData)(vlSelfRef.execute_ready) 
                              & (~ (IData)(vlSelfRef.stall)));
    vlSelfRef.instruction_decoder__DOT____Vcellinp__instr_address_reg_in__write_enable 
        = ((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.instr_valid));
}

void Vinstruction_decoder___024root___eval_triggers__ico(Vinstruction_decoder___024root* vlSelf);

bool Vinstruction_decoder___024root___eval_phase__ico(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vinstruction_decoder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vinstruction_decoder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vinstruction_decoder___024root___eval_act(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vinstruction_decoder___024root___nba_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf);

void Vinstruction_decoder___024root___eval_nba(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vinstruction_decoder___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinstruction_decoder___024root___nba_sequent__TOP__0(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___nba_sequent__TOP__0\n"); );
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
    if (vlSelfRef.instruction_decoder__DOT____Vcellinp__instr_address_reg_in__write_enable) {
        vlSelfRef.instr_address_out = vlSelfRef.instr_address_in;
        vlSelfRef.instruction_decoder__DOT__instruction_r 
            = vlSelfRef.instr;
    }
    if (vlSelfRef.decode_reset) {
        vlSelfRef.instr_address_out = 0U;
        vlSelfRef.instruction_decoder__DOT__instruction_r = 0x13U;
    }
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

void Vinstruction_decoder___024root___eval_triggers__act(Vinstruction_decoder___024root* vlSelf);

bool Vinstruction_decoder___024root___eval_phase__act(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vinstruction_decoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vinstruction_decoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinstruction_decoder___024root___eval_phase__nba(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vinstruction_decoder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__ico(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__nba(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_decoder___024root___dump_triggers__act(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_decoder___024root___eval(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval\n"); );
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
            Vinstruction_decoder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_decoder.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vinstruction_decoder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vinstruction_decoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../riscv/instruction_decoder.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vinstruction_decoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../riscv/instruction_decoder.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vinstruction_decoder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vinstruction_decoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vinstruction_decoder___024root___eval_debug_assertions(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.decode_reset & 0xfeU))) {
        Verilated::overWidthError("decode_reset");}
    if (VL_UNLIKELY((vlSelfRef.stall & 0xfeU))) {
        Verilated::overWidthError("stall");}
    if (VL_UNLIKELY((vlSelfRef.instr_valid & 0xfeU))) {
        Verilated::overWidthError("instr_valid");}
    if (VL_UNLIKELY((vlSelfRef.execute_ready & 0xfeU))) {
        Verilated::overWidthError("execute_ready");}
}
#endif  // VL_DEBUG
