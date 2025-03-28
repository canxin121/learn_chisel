// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleAdder.h for the primary calling header

#ifndef VERILATED_VSIMPLEADDER___024ROOT_H_
#define VERILATED_VSIMPLEADDER___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class VSimpleAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimpleAdder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __Vcellinp__SimpleAdder__io_b;
    CData/*7:0*/ __Vcellinp__SimpleAdder__io_a;
    CData/*0:0*/ __Vcellinp__SimpleAdder__reset;
    CData/*0:0*/ __Vcellinp__SimpleAdder__clock;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ SimpleAdder__DOT__sum;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> clock;
    sc_core::sc_in<bool> reset;
    sc_core::sc_in<uint32_t> io_a;
    sc_core::sc_in<uint32_t> io_b;
    sc_core::sc_out<uint32_t> io_sum;
    sc_core::sc_out<bool> io_carry;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSimpleAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimpleAdder___024root(VSimpleAdder__Syms* symsp, const char* v__name);
    ~VSimpleAdder___024root();
    VL_UNCOPYABLE(VSimpleAdder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
