// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator___024root.h"

extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_h17bc105d_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_ha8080b40_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_hb5534056_0;

VL_INLINE_OPT void VWaveformGenerator___024root___ico_sequent__TOP__0(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__WaveformGenerator__clock, vlSelf->clock);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__WaveformGenerator__reset, vlSelf->reset);
    VL_ASSIGN_ISI(16,vlSelf->__Vcellinp__WaveformGenerator__io_freqCtrl, vlSelf->io_freqCtrl);
    VL_ASSIGN_ISI(2,vlSelf->__Vcellinp__WaveformGenerator__io_waveType, vlSelf->io_waveType);
    VL_ASSIGN_ISI(16,vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset, vlSelf->io_phaseOffset);
    vlSelf->WaveformGenerator__DOT___phase_T = (0xffffU 
                                                & ((IData)(vlSelf->WaveformGenerator__DOT__phaseAcc) 
                                                   + (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset)));
    VL_ASSIGN_SII(16,vlSelf->io_output, (0xffffU & (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x8000U 
                                                                                & (IData)(vlSelf->WaveformGenerator__DOT___phase_T))
                                                                                ? 0x8001U
                                                                                : 0x7fffU))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (((((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_h17bc105d_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_h17bc105d_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_ha8080b40_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_ha8080b40_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))))))) 
                                                                 << 0x10U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_hb5534056_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_hb5534056_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))))))) 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_waveType), 4U))))));
}

void VWaveformGenerator___024root___eval_ico(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VWaveformGenerator___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VWaveformGenerator___024root___eval_triggers__ico(VWaveformGenerator___024root* vlSelf);

bool VWaveformGenerator___024root___eval_phase__ico(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VWaveformGenerator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VWaveformGenerator___024root___eval_act(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_act\n"); );
}

VL_INLINE_OPT void VWaveformGenerator___024root___nba_sequent__TOP__0(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->WaveformGenerator__DOT__phaseAcc = ((IData)(vlSelf->__Vcellinp__WaveformGenerator__reset)
                                                 ? 0U
                                                 : 
                                                (0xffffU 
                                                 & ((IData)(vlSelf->WaveformGenerator__DOT__phaseAcc) 
                                                    + (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_freqCtrl))));
}

VL_INLINE_OPT void VWaveformGenerator___024root___nba_sequent__TOP__1(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->WaveformGenerator__DOT___phase_T = (0xffffU 
                                                & ((IData)(vlSelf->WaveformGenerator__DOT__phaseAcc) 
                                                   + (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset)));
    VL_ASSIGN_SII(16,vlSelf->io_output, (0xffffU & (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x8000U 
                                                                                & (IData)(vlSelf->WaveformGenerator__DOT___phase_T))
                                                                                ? 0x8001U
                                                                                : 0x7fffU))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (((((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_h17bc105d_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_h17bc105d_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_ha8080b40_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_ha8080b40_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))))))) 
                                                                 << 0x10U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (VWaveformGenerator__ConstPool__CONST_hb5534056_0[
                                                                                (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))) 
                                                                                | (VWaveformGenerator__ConstPool__CONST_hb5534056_0[
                                                                                (0x7fU 
                                                                                & (VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(12,12,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->WaveformGenerator__DOT___phase_T) 
                                                                                >> 8U)), 4U))))))))) 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_waveType), 4U))))));
}

void VWaveformGenerator___024root___eval_nba(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VWaveformGenerator___024root___nba_sequent__TOP__0(vlSelf);
        VWaveformGenerator___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VWaveformGenerator___024root___eval_triggers__act(VWaveformGenerator___024root* vlSelf);

bool VWaveformGenerator___024root___eval_phase__act(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VWaveformGenerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VWaveformGenerator___024root___eval_phase__nba(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VWaveformGenerator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__ico(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__nba(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__act(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG

void VWaveformGenerator___024root___eval(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval\n"); );
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
            VWaveformGenerator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VWaveformGenerator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VWaveformGenerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VWaveformGenerator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VWaveformGenerator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VWaveformGenerator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VWaveformGenerator___024root___eval_debug_assertions(VWaveformGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
