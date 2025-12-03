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
    vlSelfRef.decode_valid = (1U & ((~ (IData)(vlSelfRef.illegal_instruction_exception)) 
                                    & (~ (IData)(vlSelfRef.branch_flush))));
    vlSelfRef.decode_ready = ((IData)(vlSelfRef.execute_ready) 
                              & (~ (IData)(vlSelfRef.pipeline_stall)));
    vlSelfRef.instruction_decoder__DOT__insert_next 
        = ((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.fetch_valid));
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
    IData/*31:0*/ instruction_decoder__DOT__imm_i;
    instruction_decoder__DOT__imm_i = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_s;
    instruction_decoder__DOT__imm_s = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_b;
    instruction_decoder__DOT__imm_b = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_u;
    instruction_decoder__DOT__imm_u = 0;
    // Body
    if (vlSelfRef.instruction_decoder__DOT__insert_next) {
        vlSelfRef.branch_taken_out = vlSelfRef.branch_taken_in;
        vlSelfRef.instr_address_out = vlSelfRef.instr_address_in;
        vlSelfRef.instruction_decoder__DOT__instruction_r 
            = vlSelfRef.instr;
    }
    if (vlSelfRef.branch_flush) {
        vlSelfRef.branch_taken_out = 0U;
        vlSelfRef.instr_address_out = 0U;
        vlSelfRef.instruction_decoder__DOT__instruction_r = 0x13U;
    }
    vlSelfRef.funct7 = (vlSelfRef.instruction_decoder__DOT__instruction_r 
                        >> 0x19U);
    vlSelfRef.funct3 = (7U & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                              >> 0xcU));
    vlSelfRef.opcode = (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r);
    vlSelfRef.alusrc_a = 1U;
    vlSelfRef.rs1_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                  >> 0xfU));
    vlSelfRef.rs2_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                  >> 0x14U));
    vlSelfRef.rd_out = (0x1fU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                 >> 7U));
    vlSelfRef.load_store_op = 0U;
    if ((1U & (~ ((((((((0x63U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                        | (0x1063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (0x4063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x5063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                     | (0x6063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                    | (0x7063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                   | (0x67U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                  | (0x6fU == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
        if (((((((((0x37U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                   | (0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                  | (0x13U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                 | (0x1013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                | (0x2013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
               | (0x3013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
              | (0x4013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
             | (0x5013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
            if ((0x37U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.rs1_out = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.rs1_out = 0U;
            }
        }
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                            | (0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                           | (0x13U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x2013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x3013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (0x4013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x5013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                                | (0x6013U == (0x707fU 
                                               & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                               | (0x7013U == (0x707fU 
                                              & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                              | (0x33U == (0xfe00707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                             | (0x40000033U == (0xfe00707fU 
                                                & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                           | (0x2033U == (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
                if (((((((((0x4033U == (0xfe00707fU 
                                        & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                           | (0x5033U == (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x6033U == (0xfe00707fU 
                                        & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x7033U == (0xfe00707fU 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (3U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x1003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                     | (0x2003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
                    if ((0x4033U != (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        if ((0x5033U != (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                if ((0x6033U != (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                    if ((0x7033U != 
                                         (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                        vlSelfRef.load_store_op 
                                            = ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                ? 1U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                    ? 2U
                                                    : 3U));
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x4003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.load_store_op = 4U;
                } else if ((0x5003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.load_store_op = 5U;
                } else if ((0x23U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.load_store_op = 6U;
                } else if ((0x1023U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.load_store_op = 7U;
                } else if ((0x2023U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.load_store_op = 8U;
                }
            }
        }
    }
    vlSelfRef.addr_offset_from_reg = 0U;
    vlSelfRef.is_branch_op = 0U;
    vlSelfRef.alusrc_b = 1U;
    vlSelfRef.alu_op = 0U;
    instruction_decoder__DOT__imm_u = (0xfffff000U 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r);
    instruction_decoder__DOT__imm_s = (((- (IData)(
                                                   (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                    >> 0x1fU))) 
                                        << 0xbU) | 
                                       ((0x7e0U & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                            >> 7U))));
    instruction_decoder__DOT__imm_b = (((- (IData)(
                                                   (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                 >> 7U)))));
    instruction_decoder__DOT__imm_i = (((- (IData)(
                                                   (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                    >> 0x1fU))) 
                                        << 0xbU) | 
                                       (0x7ffU & (vlSelfRef.instruction_decoder__DOT__instruction_r 
                                                  >> 0x14U)));
    vlSelfRef.immediate_out = 0U;
    vlSelfRef.addr_offset_out = 0U;
    if (((((((((0x63U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
               | (0x1063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
              | (0x4063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
             | (0x5063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
            | (0x6063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
           | (0x7063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
          | (0x67U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
         | (0x6fU == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
        if ((0x63U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            if ((0x1063U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                if ((0x4063U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    if ((0x5063U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        if ((0x6063U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                            if ((0x7063U != (0x707fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                vlSelfRef.alusrc_a = 0U;
                                vlSelfRef.rs2_out = 0U;
                                if ((0x67U == (0x707fU 
                                               & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                    vlSelfRef.addr_offset_from_reg = 1U;
                                }
                                vlSelfRef.alusrc_b = 0U;
                                vlSelfRef.immediate_out = 4U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x63U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xeU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else if ((0x1063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xfU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else if ((0x4063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xaU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else if ((0x5063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xcU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else if ((0x6063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xbU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else if ((0x7063U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rd_out = 0U;
            vlSelfRef.is_branch_op = 1U;
            vlSelfRef.alu_op = 0xdU;
            vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_b;
        } else {
            vlSelfRef.is_branch_op = 2U;
            vlSelfRef.addr_offset_out = ((0x67U == 
                                          (0x707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                          ? instruction_decoder__DOT__imm_i
                                          : (((- (IData)(
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
                                                            >> 0x14U)))))));
        }
    } else {
        if (((((((((0x37U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                   | (0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                  | (0x13U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                 | (0x1013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                | (0x2013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
               | (0x3013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
              | (0x4013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
             | (0x5013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
            if ((0x37U != (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                if ((0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.alusrc_a = 0U;
                }
                if ((0x17U != (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.alu_op = ((0x13U == (0x707fU 
                                                   & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                         ? 0U : ((0x1013U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                  ? 2U
                                                  : 
                                                 ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                   ? 0xaU
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                    ? 0xbU
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                     ? 7U
                                                     : 3U)))));
                }
            }
            vlSelfRef.rs2_out = 0U;
            vlSelfRef.alusrc_b = 0U;
            vlSelfRef.immediate_out = ((0x37U == (0x7fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                        ? instruction_decoder__DOT__imm_u
                                        : ((0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                            ? instruction_decoder__DOT__imm_u
                                            : instruction_decoder__DOT__imm_i));
        } else if (((((((((0x40005013U == (0xfe00707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                          | (0x6013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x7013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x1033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                     | (0x2033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                    | (0x3033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
            if ((0x40005013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.rs2_out = 0U;
                vlSelfRef.alusrc_b = 0U;
                vlSelfRef.alu_op = 4U;
                vlSelfRef.immediate_out = instruction_decoder__DOT__imm_i;
            } else if ((0x6013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.rs2_out = 0U;
                vlSelfRef.alusrc_b = 0U;
                vlSelfRef.alu_op = 5U;
                vlSelfRef.immediate_out = instruction_decoder__DOT__imm_i;
            } else if ((0x7013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.rs2_out = 0U;
                vlSelfRef.alusrc_b = 0U;
                vlSelfRef.alu_op = 6U;
                vlSelfRef.immediate_out = instruction_decoder__DOT__imm_i;
            } else {
                vlSelfRef.alu_op = ((0x33U == (0xfe00707fU 
                                               & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                     ? 0U : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                              ? 1U : 
                                             ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                               ? 2U
                                               : ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.instruction_decoder__DOT__instruction_r))
                                                   ? 0xaU
                                                   : 0xbU))));
            }
        } else if (((((((((0x4033U == (0xfe00707fU 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                          | (0x5033U == (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x40005033U == (0xfe00707fU 
                                            & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x6033U == (0xfe00707fU 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (0x7033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (3U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                     | (0x1003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                    | (0x2003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
            if ((0x4033U != (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                if ((0x5033U != (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    if ((0x40005033U != (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        if ((0x6033U != (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                            if ((0x7033U != (0xfe00707fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                vlSelfRef.rs2_out = 0U;
                            }
                        }
                    }
                }
            }
            if ((0x4033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.alu_op = 7U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.alu_op = 3U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.alu_op = 4U;
            } else if ((0x6033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.alu_op = 5U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                vlSelfRef.alu_op = 6U;
            }
        } else if ((0x4003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rs2_out = 0U;
        } else if ((0x5003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            vlSelfRef.rs2_out = 0U;
        } else if ((0x23U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
            if ((0x1023U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                if ((0x2023U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    if ((0xfU == (0xfffffU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        vlSelfRef.rs2_out = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                            | (0x17U == (0x7fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                           | (0x13U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x2013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x3013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (0x4013U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x5013U == (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                                | (0x6013U == (0x707fU 
                                               & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                               | (0x7013U == (0x707fU 
                                              & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                              | (0x33U == (0xfe00707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                             | (0x40000033U == (0xfe00707fU 
                                                & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                           | (0x2033U == (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
                if ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                                    | (0x5033U == (0xfe00707fU 
                                                   & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                                   | (0x40005033U == 
                                      (0xfe00707fU 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                                  | (0x6033U == (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                                 | (0x7033U == (0xfe00707fU 
                                                & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                                | (3U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                               | (0x1003U == (0x707fU 
                                              & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                              | (0x2003U == (0x707fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r)))))) {
                    if ((0x4003U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        if ((0x5003U != (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                            if ((0x23U == (0x707fU 
                                           & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                vlSelfRef.rd_out = 0U;
                            } else if ((0x1023U == 
                                        (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                vlSelfRef.rd_out = 0U;
                            } else if ((0x2023U == 
                                        (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                vlSelfRef.rd_out = 0U;
                            }
                        }
                    }
                }
                if (((((((((0x4033U == (0xfe00707fU 
                                        & vlSelfRef.instruction_decoder__DOT__instruction_r)) 
                           | (0x5033U == (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                         | (0x6033U == (0xfe00707fU 
                                        & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                        | (0x7033U == (0xfe00707fU 
                                       & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                       | (3U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                      | (0x1003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) 
                     | (0x2003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r)))) {
                    if ((0x4033U != (0xfe00707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                        if ((0x5033U != (0xfe00707fU 
                                         & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                if ((0x6033U != (0xfe00707fU 
                                                 & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                    if ((0x7033U != 
                                         (0xfe00707fU 
                                          & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                                        vlSelfRef.addr_offset_from_reg = 1U;
                                        vlSelfRef.addr_offset_out 
                                            = instruction_decoder__DOT__imm_i;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x4003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.addr_offset_from_reg = 1U;
                    vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_i;
                } else if ((0x5003U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.addr_offset_from_reg = 1U;
                    vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_i;
                } else if ((0x23U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.addr_offset_from_reg = 1U;
                    vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_s;
                } else if ((0x1023U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.addr_offset_from_reg = 1U;
                    vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_s;
                } else if ((0x2023U == (0x707fU & vlSelfRef.instruction_decoder__DOT__instruction_r))) {
                    vlSelfRef.addr_offset_from_reg = 1U;
                    vlSelfRef.addr_offset_out = instruction_decoder__DOT__imm_s;
                }
            }
        }
    }
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
    if (VL_UNLIKELY((vlSelfRef.branch_flush & 0xfeU))) {
        Verilated::overWidthError("branch_flush");}
    if (VL_UNLIKELY((vlSelfRef.pipeline_stall & 0xfeU))) {
        Verilated::overWidthError("pipeline_stall");}
    if (VL_UNLIKELY((vlSelfRef.branch_taken_in & 0xfeU))) {
        Verilated::overWidthError("branch_taken_in");}
    if (VL_UNLIKELY((vlSelfRef.fetch_valid & 0xfeU))) {
        Verilated::overWidthError("fetch_valid");}
    if (VL_UNLIKELY((vlSelfRef.execute_ready & 0xfeU))) {
        Verilated::overWidthError("execute_ready");}
}
#endif  // VL_DEBUG
