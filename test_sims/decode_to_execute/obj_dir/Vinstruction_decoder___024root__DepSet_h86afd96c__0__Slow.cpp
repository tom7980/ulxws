// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_decoder.h for the primary calling header

#include "Vinstruction_decoder__pch.h"
#include "Vinstruction_decoder___024root.h"

VL_ATTR_COLD void Vinstruction_decoder___024root___eval_static(Vinstruction_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_decoder___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.branch_taken_out = 0U;
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
    IData/*31:0*/ instruction_decoder__DOT__imm_i;
    instruction_decoder__DOT__imm_i = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_s;
    instruction_decoder__DOT__imm_s = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_b;
    instruction_decoder__DOT__imm_b = 0;
    IData/*31:0*/ instruction_decoder__DOT__imm_u;
    instruction_decoder__DOT__imm_u = 0;
    // Body
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
    vlSelfRef.decode_valid = (1U & ((~ (IData)(vlSelfRef.illegal_instruction_exception)) 
                                    & (~ (IData)(vlSelfRef.branch_flush))));
    vlSelfRef.decode_ready = ((IData)(vlSelfRef.execute_ready) 
                              & (~ (IData)(vlSelfRef.pipeline_stall)));
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
    vlSelfRef.instruction_decoder__DOT__insert_next 
        = ((IData)(vlSelfRef.decode_ready) & (IData)(vlSelfRef.fetch_valid));
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
    vlSelf->branch_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline_stall = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->instr_address_in = VL_RAND_RESET_I(32);
    vlSelf->branch_taken_in = VL_RAND_RESET_I(1);
    vlSelf->fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->decode_ready = VL_RAND_RESET_I(1);
    vlSelf->immediate_out = VL_RAND_RESET_I(32);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->alusrc_a = VL_RAND_RESET_I(1);
    vlSelf->alusrc_b = VL_RAND_RESET_I(1);
    vlSelf->load_store_op = VL_RAND_RESET_I(4);
    vlSelf->addr_offset_out = VL_RAND_RESET_I(32);
    vlSelf->addr_offset_from_reg = VL_RAND_RESET_I(1);
    vlSelf->is_branch_op = VL_RAND_RESET_I(2);
    vlSelf->alu_op = VL_RAND_RESET_I(4);
    vlSelf->instr_address_out = VL_RAND_RESET_I(32);
    vlSelf->branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->decode_valid = VL_RAND_RESET_I(1);
    vlSelf->execute_ready = VL_RAND_RESET_I(1);
    vlSelf->illegal_instruction_exception = VL_RAND_RESET_I(1);
    vlSelf->instruction_decoder__DOT__instruction_r = VL_RAND_RESET_I(32);
    vlSelf->instruction_decoder__DOT__insert_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
