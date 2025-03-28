// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleAdder.h for the primary calling header

#include "VSimpleAdder__pch.h"
#include "VSimpleAdder___024root.h"

VL_INLINE_OPT void VSimpleAdder___024root___ico_sequent__TOP__0(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SimpleAdder__clock, vlSelf->clock);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SimpleAdder__reset, vlSelf->reset);
    VL_ASSIGN_ISI(8,vlSelf->__Vcellinp__SimpleAdder__io_a, vlSelf->io_a);
    VL_ASSIGN_ISI(8,vlSelf->__Vcellinp__SimpleAdder__io_b, vlSelf->io_b);
    vlSelf->SimpleAdder__DOT__sum = (0x1ffU & ((IData)(vlSelf->__Vcellinp__SimpleAdder__io_a) 
                                               + (IData)(vlSelf->__Vcellinp__SimpleAdder__io_b)));
    VL_ASSIGN_SII(8,vlSelf->io_sum, (0xffU & (IData)(vlSelf->SimpleAdder__DOT__sum)));
    VL_ASSIGN_SII(1,vlSelf->io_carry, (1U & ((IData)(vlSelf->SimpleAdder__DOT__sum) 
                                             >> 8U)));
}

void VSimpleAdder___024root___eval_ico(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VSimpleAdder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSimpleAdder___024root___eval_triggers__ico(VSimpleAdder___024root* vlSelf);

bool VSimpleAdder___024root___eval_phase__ico(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VSimpleAdder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VSimpleAdder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VSimpleAdder___024root___eval_act(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_act\n"); );
}

void VSimpleAdder___024root___eval_nba(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_nba\n"); );
}

void VSimpleAdder___024root___eval_triggers__act(VSimpleAdder___024root* vlSelf);

bool VSimpleAdder___024root___eval_phase__act(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSimpleAdder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSimpleAdder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSimpleAdder___024root___eval_phase__nba(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSimpleAdder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__ico(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__nba(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__act(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VSimpleAdder___024root___eval(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VSimpleAdder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("SimpleAdder.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VSimpleAdder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSimpleAdder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SimpleAdder.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSimpleAdder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SimpleAdder.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSimpleAdder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSimpleAdder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSimpleAdder___024root___eval_debug_assertions(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
