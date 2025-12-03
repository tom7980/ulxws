// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbinary_add_sub__pch.h"

//============================================================
// Constructors

Vbinary_add_sub::Vbinary_add_sub(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbinary_add_sub__Syms(contextp(), _vcname__, this)}
    , add_sub{vlSymsp->TOP.add_sub}
    , carry_in{vlSymsp->TOP.carry_in}
    , carry_out{vlSymsp->TOP.carry_out}
    , overflow{vlSymsp->TOP.overflow}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , sum{vlSymsp->TOP.sum}
    , carries{vlSymsp->TOP.carries}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbinary_add_sub::Vbinary_add_sub(const char* _vcname__)
    : Vbinary_add_sub(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbinary_add_sub::~Vbinary_add_sub() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbinary_add_sub___024root___eval_debug_assertions(Vbinary_add_sub___024root* vlSelf);
#endif  // VL_DEBUG
void Vbinary_add_sub___024root___eval_static(Vbinary_add_sub___024root* vlSelf);
void Vbinary_add_sub___024root___eval_initial(Vbinary_add_sub___024root* vlSelf);
void Vbinary_add_sub___024root___eval_settle(Vbinary_add_sub___024root* vlSelf);
void Vbinary_add_sub___024root___eval(Vbinary_add_sub___024root* vlSelf);

void Vbinary_add_sub::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbinary_add_sub::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbinary_add_sub___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbinary_add_sub___024root___eval_static(&(vlSymsp->TOP));
        Vbinary_add_sub___024root___eval_initial(&(vlSymsp->TOP));
        Vbinary_add_sub___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbinary_add_sub___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbinary_add_sub::eventsPending() { return false; }

uint64_t Vbinary_add_sub::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbinary_add_sub::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbinary_add_sub___024root___eval_final(Vbinary_add_sub___024root* vlSelf);

VL_ATTR_COLD void Vbinary_add_sub::final() {
    Vbinary_add_sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbinary_add_sub::hierName() const { return vlSymsp->name(); }
const char* Vbinary_add_sub::modelName() const { return "Vbinary_add_sub"; }
unsigned Vbinary_add_sub::threads() const { return 1; }
void Vbinary_add_sub::prepareClone() const { contextp()->prepareClone(); }
void Vbinary_add_sub::atClone() const {
    contextp()->threadPoolpOnClone();
}
