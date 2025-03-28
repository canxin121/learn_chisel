// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLedBlink.h for the primary calling header

#include "VLedBlink__pch.h"
#include "VLedBlink__Syms.h"
#include "VLedBlink___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VLedBlink___024root___dump_triggers__stl(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VLedBlink___024root___eval_triggers__stl(VLedBlink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLedBlink___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VLedBlink___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
