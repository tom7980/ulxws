// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexecute__pch.h"

//============================================================
// Constructors

Vexecute::Vexecute(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vexecute__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , branch_flush{vlSymsp->TOP.branch_flush}
    , rd_addr_in{vlSymsp->TOP.rd_addr_in}
    , rd_addr_out{vlSymsp->TOP.rd_addr_out}
    , opcode{vlSymsp->TOP.opcode}
    , funct7{vlSymsp->TOP.funct7}
    , funct3{vlSymsp->TOP.funct3}
    , alusrc_a{vlSymsp->TOP.alusrc_a}
    , alusrc_b{vlSymsp->TOP.alusrc_b}
    , addr_offset_from_reg{vlSymsp->TOP.addr_offset_from_reg}
    , load_store_op_in{vlSymsp->TOP.load_store_op_in}
    , load_store_op_out{vlSymsp->TOP.load_store_op_out}
    , is_branch_op{vlSymsp->TOP.is_branch_op}
    , alu_op{vlSymsp->TOP.alu_op}
    , branch_taken_in{vlSymsp->TOP.branch_taken_in}
    , decode_valid{vlSymsp->TOP.decode_valid}
    , execute_ready{vlSymsp->TOP.execute_ready}
    , memory_ready{vlSymsp->TOP.memory_ready}
    , execute_valid{vlSymsp->TOP.execute_valid}
    , branch_pc{vlSymsp->TOP.branch_pc}
    , immediate_in{vlSymsp->TOP.immediate_in}
    , rs1_val_in{vlSymsp->TOP.rs1_val_in}
    , rs2_val_in{vlSymsp->TOP.rs2_val_in}
    , rd_val_out{vlSymsp->TOP.rd_val_out}
    , addr_offset_in{vlSymsp->TOP.addr_offset_in}
    , instr_address_in{vlSymsp->TOP.instr_address_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vexecute::Vexecute(const char* _vcname__)
    : Vexecute(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vexecute::~Vexecute() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vexecute___024root___eval_debug_assertions(Vexecute___024root* vlSelf);
#endif  // VL_DEBUG
void Vexecute___024root___eval_static(Vexecute___024root* vlSelf);
void Vexecute___024root___eval_initial(Vexecute___024root* vlSelf);
void Vexecute___024root___eval_settle(Vexecute___024root* vlSelf);
void Vexecute___024root___eval(Vexecute___024root* vlSelf);

void Vexecute::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexecute::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexecute___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vexecute___024root___eval_static(&(vlSymsp->TOP));
        Vexecute___024root___eval_initial(&(vlSymsp->TOP));
        Vexecute___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vexecute___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vexecute::eventsPending() { return false; }

uint64_t Vexecute::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vexecute::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vexecute___024root___eval_final(Vexecute___024root* vlSelf);

VL_ATTR_COLD void Vexecute::final() {
    Vexecute___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vexecute::hierName() const { return vlSymsp->name(); }
const char* Vexecute::modelName() const { return "Vexecute"; }
unsigned Vexecute::threads() const { return 1; }
void Vexecute::prepareClone() const { contextp()->prepareClone(); }
void Vexecute::atClone() const {
    contextp()->threadPoolpOnClone();
}
