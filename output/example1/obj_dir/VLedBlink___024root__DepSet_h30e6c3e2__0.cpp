// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLedBlink.h for the primary calling header

#include "VLedBlink__pch.h"
#include "VLedBlink___024root.h"

VL_INLINE_OPT void VLedBlink___024root___ico_sequent__TOP__0(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__LedBlink__clock, vlSelf->clock);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__LedBlink__reset, vlSelf->reset);
}

void VLedBlink___024root___eval_ico(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VLedBlink___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VLedBlink___024root___eval_triggers__ico(VLedBlink___024root* vlSelf);

bool VLedBlink___024root___eval_phase__ico(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VLedBlink___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VLedBlink___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VLedBlink___024root___eval_act(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_act\n"); );
}

VL_INLINE_OPT void VLedBlink___024root___nba_sequent__TOP__0(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__LedBlink__DOT__counterInst__DOT__counter;
    __Vdly__LedBlink__DOT__counterInst__DOT__counter = 0;
    // Body
    __Vdly__LedBlink__DOT__counterInst__DOT__counter 
        = vlSelf->LedBlink__DOT__counterInst__DOT__counter;
    __Vdly__LedBlink__DOT__counterInst__DOT__counter 
        = ((IData)(vlSelf->__Vcellinp__LedBlink__reset)
            ? 0U : ((0xffU == (IData)(vlSelf->LedBlink__DOT__counterInst__DOT__counter))
                     ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelf->LedBlink__DOT__counterInst__DOT__counter)))));
    vlSelf->LedBlink__DOT__flipInst__DOT__reg_0 = (
                                                   (~ (IData)(vlSelf->__Vcellinp__LedBlink__reset)) 
                                                   & ((0xffU 
                                                       == (IData)(vlSelf->LedBlink__DOT__counterInst__DOT__counter)) 
                                                      ^ (IData)(vlSelf->LedBlink__DOT__flipInst__DOT__reg_0)));
    vlSelf->LedBlink__DOT__counterInst__DOT__counter 
        = __Vdly__LedBlink__DOT__counterInst__DOT__counter;
    VL_ASSIGN_SII(1,vlSelf->out, vlSelf->LedBlink__DOT__flipInst__DOT__reg_0);
}

void VLedBlink___024root___eval_nba(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VLedBlink___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VLedBlink___024root___eval_triggers__act(VLedBlink___024root* vlSelf);

bool VLedBlink___024root___eval_phase__act(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VLedBlink___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VLedBlink___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VLedBlink___024root___eval_phase__nba(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VLedBlink___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__ico(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__nba(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__act(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG

void VLedBlink___024root___eval(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval\n"); );
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
            VLedBlink___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("LedBlink.sv", 37, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VLedBlink___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VLedBlink___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("LedBlink.sv", 37, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VLedBlink___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("LedBlink.sv", 37, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VLedBlink___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VLedBlink___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VLedBlink___024root___eval_debug_assertions(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
