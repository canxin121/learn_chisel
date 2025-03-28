// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VWaveformGenerator__Syms.h"


VL_ATTR_COLD void VWaveformGenerator___024root__trace_init_sub__TOP__0(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("WaveformGenerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_waveType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"io_freqCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"io_phaseOffset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"io_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"phaseAcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_init_top(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_init_top\n"); );
    // Body
    VWaveformGenerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VWaveformGenerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VWaveformGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWaveformGenerator___024root__trace_register(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VWaveformGenerator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VWaveformGenerator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VWaveformGenerator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VWaveformGenerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_const_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_full_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWaveformGenerator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_h17bc105d_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_ha8080b40_0;
extern const VlWide<128>/*4095:0*/ VWaveformGenerator__ConstPool__CONST_hb5534056_0;

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__WaveformGenerator__clock));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__WaveformGenerator__reset));
    bufp->fullCData(oldp+3,(vlSelf->__Vcellinp__WaveformGenerator__io_waveType),2);
    bufp->fullSData(oldp+4,(vlSelf->__Vcellinp__WaveformGenerator__io_freqCtrl),16);
    bufp->fullSData(oldp+5,(vlSelf->__Vcellinp__WaveformGenerator__io_phaseOffset),16);
    bufp->fullSData(oldp+6,((0xffffU & (IData)(((((QData)((IData)(
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
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__Vcellinp__WaveformGenerator__io_waveType), 4U)))))),16);
    bufp->fullSData(oldp+7,(vlSelf->WaveformGenerator__DOT__phaseAcc),16);
}
