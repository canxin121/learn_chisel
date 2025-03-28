// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLedBlink.h for the primary calling header

#include "VLedBlink__pch.h"
#include "VLedBlink___024root.h"

VL_ATTR_COLD void VLedBlink___024root___eval_static(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_static\n"); );
}

VL_ATTR_COLD void VLedBlink___024root___eval_initial(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__LedBlink__clock__0 
        = vlSelf->__Vcellinp__LedBlink__clock;
}

VL_ATTR_COLD void VLedBlink___024root___eval_final(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__stl(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VLedBlink___024root___eval_phase__stl(VLedBlink___024root* vlSelf);

VL_ATTR_COLD void VLedBlink___024root___eval_settle(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_settle\n"); );
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
            VLedBlink___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("LedBlink.sv", 37, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VLedBlink___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__stl(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLedBlink___024root___stl_sequent__TOP__0(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___stl_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__LedBlink__clock, vlSelf->clock);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__LedBlink__reset, vlSelf->reset);
    VL_ASSIGN_SII(1,vlSelf->out, vlSelf->LedBlink__DOT__flipInst__DOT__reg_0);
}

VL_ATTR_COLD void VLedBlink___024root___eval_stl(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VLedBlink___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VLedBlink___024root___eval_triggers__stl(VLedBlink___024root* vlSelf);

VL_ATTR_COLD bool VLedBlink___024root___eval_phase__stl(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VLedBlink___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VLedBlink___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__ico(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__act(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge __Vcellinp__LedBlink__clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__nba(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge __Vcellinp__LedBlink__clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLedBlink___024root___ctor_var_reset(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__LedBlink__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__LedBlink__clock = VL_RAND_RESET_I(1);
    vlSelf->LedBlink__DOT__counterInst__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->LedBlink__DOT__flipInst__DOT__reg_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__LedBlink__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
