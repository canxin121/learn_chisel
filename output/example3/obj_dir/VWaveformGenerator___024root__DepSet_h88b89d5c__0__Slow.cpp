// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator___024root.h"

VL_ATTR_COLD void VWaveformGenerator___024root___eval_static(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_static\n"); );
}

VL_ATTR_COLD void VWaveformGenerator___024root___eval_initial(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__WaveformGenerator__clock__0 
        = vlSelf->__Vcellinp__WaveformGenerator__clock;
}

VL_ATTR_COLD void VWaveformGenerator___024root___eval_final(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__stl(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VWaveformGenerator___024root___eval_phase__stl(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD void VWaveformGenerator___024root___eval_settle(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VWaveformGenerator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VWaveformGenerator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__stl(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VWaveformGenerator___024root___ico_sequent__TOP__0(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD void VWaveformGenerator___024root___eval_stl(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VWaveformGenerator___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VWaveformGenerator___024root___eval_triggers__stl(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD bool VWaveformGenerator___024root___eval_phase__stl(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VWaveformGenerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__ico(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__act(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge __Vcellinp__WaveformGenerator__clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__nba(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge __Vcellinp__WaveformGenerator__clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VWaveformGenerator___024root___ctor_var_reset(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__WaveformGenerator__io_freqCtrl = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__WaveformGenerator__io_waveType = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__WaveformGenerator__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__WaveformGenerator__clock = VL_RAND_RESET_I(1);
    vlSelf->WaveformGenerator__DOT__phaseAcc = VL_RAND_RESET_I(16);
    vlSelf->WaveformGenerator__DOT___phase_T = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__WaveformGenerator__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
