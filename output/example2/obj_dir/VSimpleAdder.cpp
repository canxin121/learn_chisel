// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimpleAdder__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

VSimpleAdder::VSimpleAdder(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VSimpleAdder__Syms(contextp(), name(), this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_sum{vlSymsp->TOP.io_sum}
    , io_carry{vlSymsp->TOP.io_carry}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clock;
    sensitive << reset;
    sensitive << io_a;
    sensitive << io_b;

}

//============================================================
// Destructor

VSimpleAdder::~VSimpleAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSimpleAdder___024root___eval_debug_assertions(VSimpleAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VSimpleAdder___024root___eval_static(VSimpleAdder___024root* vlSelf);
void VSimpleAdder___024root___eval_initial(VSimpleAdder___024root* vlSelf);
void VSimpleAdder___024root___eval_settle(VSimpleAdder___024root* vlSelf);
void VSimpleAdder___024root___eval(VSimpleAdder___024root* vlSelf);

void VSimpleAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimpleAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimpleAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSimpleAdder___024root___eval_static(&(vlSymsp->TOP));
        VSimpleAdder___024root___eval_initial(&(vlSymsp->TOP));
        VSimpleAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSimpleAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSimpleAdder::eventsPending() { return false; }

uint64_t VSimpleAdder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void VSimpleAdder___024root___eval_final(VSimpleAdder___024root* vlSelf);

VL_ATTR_COLD void VSimpleAdder::final() {
    VSimpleAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSimpleAdder::hierName() const { return vlSymsp->name(); }
const char* VSimpleAdder::modelName() const { return "VSimpleAdder"; }
unsigned VSimpleAdder::threads() const { return 1; }
void VSimpleAdder::prepareClone() const { contextp()->prepareClone(); }
void VSimpleAdder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSimpleAdder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSimpleAdder___024root__trace_decl_types(VerilatedVcd* tracep);

void VSimpleAdder___024root__trace_init_top(VSimpleAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimpleAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleAdder___024root*>(voidSelf);
    VSimpleAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSimpleAdder___024root__trace_decl_types(tracep);
    VSimpleAdder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSimpleAdder___024root__trace_register(VSimpleAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimpleAdder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "VSimpleAdder::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSimpleAdder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimpleAdder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
