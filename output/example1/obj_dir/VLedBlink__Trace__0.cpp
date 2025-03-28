// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VLedBlink__Syms.h"


void VLedBlink___024root__trace_chg_0_sub_0(VLedBlink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VLedBlink___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_chg_0\n"); );
    // Init
    VLedBlink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLedBlink___024root*>(voidSelf);
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLedBlink___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VLedBlink___024root__trace_chg_0_sub_0(VLedBlink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->LedBlink__DOT__flipInst__DOT__reg_0));
        bufp->chgBit(oldp+1,((0xffU == (IData)(vlSelf->LedBlink__DOT__counterInst__DOT__counter))));
        bufp->chgCData(oldp+2,(vlSelf->LedBlink__DOT__counterInst__DOT__counter),8);
    }
    bufp->chgBit(oldp+3,(vlSelf->__Vcellinp__LedBlink__clock));
    bufp->chgBit(oldp+4,(vlSelf->__Vcellinp__LedBlink__reset));
}

void VLedBlink___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_cleanup\n"); );
    // Init
    VLedBlink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLedBlink___024root*>(voidSelf);
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
