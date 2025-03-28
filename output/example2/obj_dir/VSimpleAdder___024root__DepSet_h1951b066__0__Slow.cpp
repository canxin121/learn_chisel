// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleAdder.h for the primary calling header

#include "VSimpleAdder__pch.h"
#include "VSimpleAdder__Syms.h"
#include "VSimpleAdder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleAdder___024root___dump_triggers__stl(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimpleAdder___024root___eval_triggers__stl(VSimpleAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleAdder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimpleAdder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
