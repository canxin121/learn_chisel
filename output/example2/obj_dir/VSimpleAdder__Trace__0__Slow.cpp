// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VSimpleAdder__Syms.h"


VL_ATTR_COLD void VSimpleAdder___024root__trace_init_sub__TOP__0(VSimpleAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("SimpleAdder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"io_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_init_top(VSimpleAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_init_top\n"); );
    // Body
    VSimpleAdder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSimpleAdder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimpleAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimpleAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimpleAdder___024root__trace_register(VSimpleAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VSimpleAdder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSimpleAdder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSimpleAdder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSimpleAdder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_const_0\n"); );
    // Init
    VSimpleAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleAdder___024root*>(voidSelf);
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_full_0_sub_0(VSimpleAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimpleAdder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_full_0\n"); );
    // Init
    VSimpleAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleAdder___024root*>(voidSelf);
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimpleAdder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_full_0_sub_0(VSimpleAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__SimpleAdder__clock));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__SimpleAdder__reset));
    bufp->fullCData(oldp+3,(vlSelf->__Vcellinp__SimpleAdder__io_a),8);
    bufp->fullCData(oldp+4,(vlSelf->__Vcellinp__SimpleAdder__io_b),8);
    bufp->fullCData(oldp+5,((0xffU & (IData)(vlSelf->SimpleAdder__DOT__sum))),8);
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->SimpleAdder__DOT__sum) 
                                 >> 8U))));
    bufp->fullSData(oldp+7,(vlSelf->SimpleAdder__DOT__sum),9);
}
