// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleAdder.h for the primary calling header

#include "VSimpleAdder__pch.h"
#include "VSimpleAdder__Syms.h"
#include "VSimpleAdder___024root.h"

void VSimpleAdder___024root___ctor_var_reset(VSimpleAdder___024root* vlSelf);

VSimpleAdder___024root::VSimpleAdder___024root(VSimpleAdder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , clock("clock")
    , reset("reset")
    , io_a("io_a")
    , io_b("io_b")
    , io_sum("io_sum")
    , io_carry("io_carry")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimpleAdder___024root___ctor_var_reset(this);
}

void VSimpleAdder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSimpleAdder___024root::~VSimpleAdder___024root() {
}
