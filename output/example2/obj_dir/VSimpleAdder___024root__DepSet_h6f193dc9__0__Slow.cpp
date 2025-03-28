// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleAdder.h for the primary calling header

#include "VSimpleAdder__pch.h"
#include "VSimpleAdder___024root.h"

VL_ATTR_COLD void VSimpleAdder___024root___eval_static(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimpleAdder___024root___eval_initial(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VSimpleAdder___024root___eval_final(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__stl(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimpleAdder___024root___eval_phase__stl(VSimpleAdder___024root* vlSelf);

VL_ATTR_COLD void VSimpleAdder___024root___eval_settle(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_settle\n"); );
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
            VSimpleAdder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SimpleAdder.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSimpleAdder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__stl(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VSimpleAdder___024root___ico_sequent__TOP__0(VSimpleAdder___024root* vlSelf);

VL_ATTR_COLD void VSimpleAdder___024root___eval_stl(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSimpleAdder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSimpleAdder___024root___eval_triggers__stl(VSimpleAdder___024root* vlSelf);

VL_ATTR_COLD bool VSimpleAdder___024root___eval_phase__stl(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimpleAdder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSimpleAdder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__ico(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__act(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__nba(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleAdder___024root___ctor_var_reset(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__SimpleAdder__io_b = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__SimpleAdder__io_a = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__SimpleAdder__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SimpleAdder__clock = VL_RAND_RESET_I(1);
    vlSelf->SimpleAdder__DOT__sum = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
