// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinstruction_decoder__pch.h"

//============================================================
// Constructors

Vinstruction_decoder::Vinstruction_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinstruction_decoder__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , decode_reset{vlSymsp->TOP.decode_reset}
    , stall{vlSymsp->TOP.stall}
    , instr_valid{vlSymsp->TOP.instr_valid}
    , decode_ready{vlSymsp->TOP.decode_ready}
    , rs1_out{vlSymsp->TOP.rs1_out}
    , rs2_out{vlSymsp->TOP.rs2_out}
    , rd_out{vlSymsp->TOP.rd_out}
    , opcode{vlSymsp->TOP.opcode}
    , funct7{vlSymsp->TOP.funct7}
    , funct3{vlSymsp->TOP.funct3}
    , decode_valid{vlSymsp->TOP.decode_valid}
    , execute_ready{vlSymsp->TOP.execute_ready}
    , illegal_instruction_exception{vlSymsp->TOP.illegal_instruction_exception}
    , instr{vlSymsp->TOP.instr}
    , instr_address_in{vlSymsp->TOP.instr_address_in}
    , immediate_out{vlSymsp->TOP.immediate_out}
    , instr_address_out{vlSymsp->TOP.instr_address_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinstruction_decoder::Vinstruction_decoder(const char* _vcname__)
    : Vinstruction_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinstruction_decoder::~Vinstruction_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinstruction_decoder___024root___eval_debug_assertions(Vinstruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vinstruction_decoder___024root___eval_static(Vinstruction_decoder___024root* vlSelf);
void Vinstruction_decoder___024root___eval_initial(Vinstruction_decoder___024root* vlSelf);
void Vinstruction_decoder___024root___eval_settle(Vinstruction_decoder___024root* vlSelf);
void Vinstruction_decoder___024root___eval(Vinstruction_decoder___024root* vlSelf);

void Vinstruction_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinstruction_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinstruction_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinstruction_decoder___024root___eval_static(&(vlSymsp->TOP));
        Vinstruction_decoder___024root___eval_initial(&(vlSymsp->TOP));
        Vinstruction_decoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinstruction_decoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinstruction_decoder::eventsPending() { return false; }

uint64_t Vinstruction_decoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vinstruction_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinstruction_decoder___024root___eval_final(Vinstruction_decoder___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_decoder::final() {
    Vinstruction_decoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinstruction_decoder::hierName() const { return vlSymsp->name(); }
const char* Vinstruction_decoder::modelName() const { return "Vinstruction_decoder"; }
unsigned Vinstruction_decoder::threads() const { return 1; }
void Vinstruction_decoder::prepareClone() const { contextp()->prepareClone(); }
void Vinstruction_decoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
