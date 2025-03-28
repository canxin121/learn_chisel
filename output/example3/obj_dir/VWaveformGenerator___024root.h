// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWaveformGenerator.h for the primary calling header

#ifndef VERILATED_VWAVEFORMGENERATOR___024ROOT_H_
#define VERILATED_VWAVEFORMGENERATOR___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class VWaveformGenerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VWaveformGenerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__WaveformGenerator__clock;
    CData/*1:0*/ __Vcellinp__WaveformGenerator__io_waveType;
    CData/*0:0*/ __Vcellinp__WaveformGenerator__reset;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__WaveformGenerator__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __Vcellinp__WaveformGenerator__io_phaseOffset;
    SData/*15:0*/ __Vcellinp__WaveformGenerator__io_freqCtrl;
    SData/*15:0*/ WaveformGenerator__DOT__phaseAcc;
    SData/*15:0*/ WaveformGenerator__DOT___phase_T;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> clock;
    sc_core::sc_in<bool> reset;
    sc_core::sc_in<uint32_t> io_waveType;
    sc_core::sc_in<uint32_t> io_freqCtrl;
    sc_core::sc_in<uint32_t> io_phaseOffset;
    sc_core::sc_out<uint32_t> io_output;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VWaveformGenerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    VWaveformGenerator___024root(VWaveformGenerator__Syms* symsp, const char* v__name);
    ~VWaveformGenerator___024root();
    VL_UNCOPYABLE(VWaveformGenerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
