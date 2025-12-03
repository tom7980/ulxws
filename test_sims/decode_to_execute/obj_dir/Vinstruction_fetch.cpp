// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinstruction_fetch__pch.h"

//============================================================
// Constructors

Vinstruction_fetch::Vinstruction_fetch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinstruction_fetch__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , fetch_addr_valid{vlSymsp->TOP.fetch_addr_valid}
    , mem_addr_ready{vlSymsp->TOP.mem_addr_ready}
    , fetch_instr_in_ready{vlSymsp->TOP.fetch_instr_in_ready}
    , mem_instr_in_valid{vlSymsp->TOP.mem_instr_in_valid}
    , fetch_instr_out_valid{vlSymsp->TOP.fetch_instr_out_valid}
    , decode_ready{vlSymsp->TOP.decode_ready}
    , branch_taken{vlSymsp->TOP.branch_taken}
    , branch_flush{vlSymsp->TOP.branch_flush}
    , mem_addr_out{vlSymsp->TOP.mem_addr_out}
    , instr_in{vlSymsp->TOP.instr_in}
    , instr_out{vlSymsp->TOP.instr_out}
    , decode_addr_out{vlSymsp->TOP.decode_addr_out}
    , branch_pc_in{vlSymsp->TOP.branch_pc_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinstruction_fetch::Vinstruction_fetch(const char* _vcname__)
    : Vinstruction_fetch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinstruction_fetch::~Vinstruction_fetch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinstruction_fetch___024root___eval_debug_assertions(Vinstruction_fetch___024root* vlSelf);
#endif  // VL_DEBUG
void Vinstruction_fetch___024root___eval_static(Vinstruction_fetch___024root* vlSelf);
void Vinstruction_fetch___024root___eval_initial(Vinstruction_fetch___024root* vlSelf);
void Vinstruction_fetch___024root___eval_settle(Vinstruction_fetch___024root* vlSelf);
void Vinstruction_fetch___024root___eval(Vinstruction_fetch___024root* vlSelf);

void Vinstruction_fetch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinstruction_fetch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinstruction_fetch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinstruction_fetch___024root___eval_static(&(vlSymsp->TOP));
        Vinstruction_fetch___024root___eval_initial(&(vlSymsp->TOP));
        Vinstruction_fetch___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinstruction_fetch___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinstruction_fetch::eventsPending() { return false; }

uint64_t Vinstruction_fetch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vinstruction_fetch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinstruction_fetch___024root___eval_final(Vinstruction_fetch___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_fetch::final() {
    Vinstruction_fetch___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinstruction_fetch::hierName() const { return vlSymsp->name(); }
const char* Vinstruction_fetch::modelName() const { return "Vinstruction_fetch"; }
unsigned Vinstruction_fetch::threads() const { return 1; }
void Vinstruction_fetch::prepareClone() const { contextp()->prepareClone(); }
void Vinstruction_fetch::atClone() const {
    contextp()->threadPoolpOnClone();
}
