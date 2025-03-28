// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLedBlink.h for the primary calling header

#include "VLedBlink__pch.h"
#include "VLedBlink__Syms.h"
#include "VLedBlink___024root.h"

void VLedBlink___024root___ctor_var_reset(VLedBlink___024root* vlSelf);

VLedBlink___024root::VLedBlink___024root(VLedBlink__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , clock("clock")
    , reset("reset")
    , out("out")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLedBlink___024root___ctor_var_reset(this);
}

void VLedBlink___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VLedBlink___024root::~VLedBlink___024root() {
}
