// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VEXECUTE_H_
#define VERILATED_VEXECUTE_H_  // guard

#include "verilated.h"

class Vexecute__Syms;
class Vexecute___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vexecute VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vexecute__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_OUT8(&branch_flush,0,0);
    VL_IN8(&rd_addr_in,4,0);
    VL_OUT8(&rd_addr_out,4,0);
    VL_IN8(&opcode,6,0);
    VL_IN8(&funct7,6,0);
    VL_IN8(&funct3,2,0);
    VL_IN8(&alusrc_a,0,0);
    VL_IN8(&alusrc_b,0,0);
    VL_IN8(&addr_offset_from_reg,0,0);
    VL_IN8(&load_store_op_in,3,0);
    VL_OUT8(&load_store_op_out,3,0);
    VL_IN8(&is_branch_op,1,0);
    VL_IN8(&alu_op,3,0);
    VL_IN8(&branch_taken_in,0,0);
    VL_IN8(&decode_valid,0,0);
    VL_OUT8(&execute_ready,0,0);
    VL_IN8(&memory_ready,0,0);
    VL_OUT8(&execute_valid,0,0);
    VL_OUT(&branch_pc,31,0);
    VL_IN(&immediate_in,31,0);
    VL_IN(&rs1_val_in,31,0);
    VL_IN(&rs2_val_in,31,0);
    VL_OUT(&rd_val_out,31,0);
    VL_IN(&addr_offset_in,31,0);
    VL_IN(&instr_address_in,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vexecute___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vexecute(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vexecute(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vexecute();
  private:
    VL_UNCOPYABLE(Vexecute);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
