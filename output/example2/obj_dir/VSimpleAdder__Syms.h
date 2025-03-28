// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLEADDER__SYMS_H_
#define VERILATED_VSIMPLEADDER__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimpleAdder.h"

// INCLUDE MODULE CLASSES
#include "VSimpleAdder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSimpleAdder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimpleAdder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSimpleAdder___024root         TOP;

    // CONSTRUCTORS
    VSimpleAdder__Syms(VerilatedContext* contextp, const char* namep, VSimpleAdder* modelp);
    ~VSimpleAdder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
