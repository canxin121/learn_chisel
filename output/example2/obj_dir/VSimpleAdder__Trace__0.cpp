// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VSimpleAdder__Syms.h"


void VSimpleAdder___024root__trace_chg_0_sub_0(VSimpleAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimpleAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_chg_0\n"); );
    // Init
    VSimpleAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleAdder___024root*>(voidSelf);
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimpleAdder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSimpleAdder___024root__trace_chg_0_sub_0(VSimpleAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__SimpleAdder__clock));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__SimpleAdder__reset));
        bufp->chgCData(oldp+2,(vlSelf->__Vcellinp__SimpleAdder__io_a),8);
        bufp->chgCData(oldp+3,(vlSelf->__Vcellinp__SimpleAdder__io_b),8);
        bufp->chgCData(oldp+4,((0xffU & (IData)(vlSelf->SimpleAdder__DOT__sum))),8);
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->SimpleAdder__DOT__sum) 
                                    >> 8U))));
        bufp->chgSData(oldp+6,(vlSelf->SimpleAdder__DOT__sum),9);
    }
}

void VSimpleAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_cleanup\n"); );
    // Init
    VSimpleAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleAdder___024root*>(voidSelf);
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
