// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLedBlink.h for the primary calling header

#ifndef VERILATED_VLEDBLINK___024ROOT_H_
#define VERILATED_VLEDBLINK___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class VLedBlink__Syms;

class alignas(VL_CACHE_LINE_BYTES) VLedBlink___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__LedBlink__clock;
    CData/*0:0*/ __Vcellinp__LedBlink__reset;
    CData/*7:0*/ LedBlink__DOT__counterInst__DOT__counter;
    CData/*0:0*/ LedBlink__DOT__flipInst__DOT__reg_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__LedBlink__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> clock;
    sc_core::sc_in<bool> reset;
    sc_core::sc_out<bool> out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLedBlink__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLedBlink___024root(VLedBlink__Syms* symsp, const char* v__name);
    ~VLedBlink___024root();
    VL_UNCOPYABLE(VLedBlink___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
