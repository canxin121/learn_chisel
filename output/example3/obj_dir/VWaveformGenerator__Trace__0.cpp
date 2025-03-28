// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VWaveformGenerator__Syms.h"


void VWaveformGenerator___024root__trace_chg_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VWaveformGenerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_chg_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VWaveformGenerator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_h17bc105d_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_ha8080b40_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_hb5534056_0;

void VWaveformGenerator___024root__trace_chg_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__WaveformGenerator__clock));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__WaveformGenerator__reset));
        bufp->chgCData(oldp+2,(vlSelf->__Vcellinp__WaveformGenerator__io_waveType),2);
        bufp->chgSData(oldp+3,(vlSelf->__Vcellinp__WaveformGenerator__io_freqCtrl),16);
        bufp->chgSData(oldp+4,(vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset),16);
    }
    bufp->chgSData(oldp+5,((0xffffU & (IData)(((((QData)((IData)(
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
                                               >> (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_waveType), 4U)))))),16);
    bufp->chgSData(oldp+6,(vlSelf->WaveformGenerator__DOT__phaseAcc),16);
}

void VWaveformGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_cleanup\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
