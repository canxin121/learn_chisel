// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLEDBLINK__SYMS_H_
#define VERILATED_VLEDBLINK__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLedBlink.h"

// INCLUDE MODULE CLASSES
#include "VLedBlink___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VLedBlink__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLedBlink* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLedBlink___024root            TOP;

    // CONSTRUCTORS
    VLedBlink__Syms(VerilatedContext* contextp, const char* namep, VLedBlink* modelp);
    ~VLedBlink__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
