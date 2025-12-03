// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varithmetic_predicates_binary__pch.h"

//============================================================
// Constructors

Varithmetic_predicates_binary::Varithmetic_predicates_binary(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varithmetic_predicates_binary__Syms(contextp(), _vcname__, this)}
    , A_eq_B{vlSymsp->TOP.A_eq_B}
    , A_lt_B_unsigned{vlSymsp->TOP.A_lt_B_unsigned}
    , A_lte_B_unsigned{vlSymsp->TOP.A_lte_B_unsigned}
    , A_gt_B_unsigned{vlSymsp->TOP.A_gt_B_unsigned}
    , A_gte_B_unsigned{vlSymsp->TOP.A_gte_B_unsigned}
    , A_lt_B_signed{vlSymsp->TOP.A_lt_B_signed}
    , A_lte_B_signed{vlSymsp->TOP.A_lte_B_signed}
    , A_gt_B_signed{vlSymsp->TOP.A_gt_B_signed}
    , A_gte_B_signed{vlSymsp->TOP.A_gte_B_signed}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Varithmetic_predicates_binary::Varithmetic_predicates_binary(const char* _vcname__)
    : Varithmetic_predicates_binary(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varithmetic_predicates_binary::~Varithmetic_predicates_binary() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varithmetic_predicates_binary___024root___eval_debug_assertions(Varithmetic_predicates_binary___024root* vlSelf);
#endif  // VL_DEBUG
void Varithmetic_predicates_binary___024root___eval_static(Varithmetic_predicates_binary___024root* vlSelf);
void Varithmetic_predicates_binary___024root___eval_initial(Varithmetic_predicates_binary___024root* vlSelf);
void Varithmetic_predicates_binary___024root___eval_settle(Varithmetic_predicates_binary___024root* vlSelf);
void Varithmetic_predicates_binary___024root___eval(Varithmetic_predicates_binary___024root* vlSelf);

void Varithmetic_predicates_binary::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varithmetic_predicates_binary::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varithmetic_predicates_binary___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varithmetic_predicates_binary___024root___eval_static(&(vlSymsp->TOP));
        Varithmetic_predicates_binary___024root___eval_initial(&(vlSymsp->TOP));
        Varithmetic_predicates_binary___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varithmetic_predicates_binary___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varithmetic_predicates_binary::eventsPending() { return false; }

uint64_t Varithmetic_predicates_binary::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varithmetic_predicates_binary::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varithmetic_predicates_binary___024root___eval_final(Varithmetic_predicates_binary___024root* vlSelf);

VL_ATTR_COLD void Varithmetic_predicates_binary::final() {
    Varithmetic_predicates_binary___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varithmetic_predicates_binary::hierName() const { return vlSymsp->name(); }
const char* Varithmetic_predicates_binary::modelName() const { return "Varithmetic_predicates_binary"; }
unsigned Varithmetic_predicates_binary::threads() const { return 1; }
void Varithmetic_predicates_binary::prepareClone() const { contextp()->prepareClone(); }
void Varithmetic_predicates_binary::atClone() const {
    contextp()->threadPoolpOnClone();
}
