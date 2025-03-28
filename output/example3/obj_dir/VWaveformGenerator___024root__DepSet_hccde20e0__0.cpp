// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator__Syms.h"
#include "VWaveformGenerator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__ico(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG

void VWaveformGenerator___024root___eval_triggers__ico(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VWaveformGenerator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__act(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG

void VWaveformGenerator___024root___eval_triggers__act(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->__Vcellinp__WaveformGenerator__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__WaveformGenerator__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__WaveformGenerator__clock__0 
        = vlSelf->__Vcellinp__WaveformGenerator__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VWaveformGenerator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
