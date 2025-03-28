// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "VLedBlink__Syms.h"


VL_ATTR_COLD void VLedBlink___024root__trace_init_sub__TOP__0(VLedBlink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("LedBlink", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("counterInst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("flipInst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VLedBlink___024root__trace_init_top(VLedBlink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_init_top\n"); );
    // Body
    VLedBlink___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLedBlink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VLedBlink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLedBlink___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLedBlink___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLedBlink___024root__trace_register(VLedBlink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VLedBlink___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VLedBlink___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VLedBlink___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VLedBlink___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLedBlink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_const_0\n"); );
    // Init
    VLedBlink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLedBlink___024root*>(voidSelf);
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VLedBlink___024root__trace_full_0_sub_0(VLedBlink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VLedBlink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_full_0\n"); );
    // Init
    VLedBlink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLedBlink___024root*>(voidSelf);
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLedBlink___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VLedBlink___024root__trace_full_0_sub_0(VLedBlink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->LedBlink__DOT__flipInst__DOT__reg_0));
    bufp->fullBit(oldp+2,((0xffU == (IData)(vlSelf->LedBlink__DOT__counterInst__DOT__counter))));
    bufp->fullCData(oldp+3,(vlSelf->LedBlink__DOT__counterInst__DOT__counter),8);
    bufp->fullBit(oldp+4,(vlSelf->__Vcellinp__LedBlink__clock));
    bufp->fullBit(oldp+5,(vlSelf->__Vcellinp__LedBlink__reset));
}
