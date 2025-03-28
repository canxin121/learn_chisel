// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLedBlink__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

VLedBlink::VLedBlink(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VLedBlink__Syms(contextp(), name(), this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clock;
    sensitive << reset;

}

//============================================================
// Destructor

VLedBlink::~VLedBlink() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VLedBlink___024root___eval_debug_assertions(VLedBlink___024root* vlSelf);
#endif  // VL_DEBUG
void VLedBlink___024root___eval_static(VLedBlink___024root* vlSelf);
void VLedBlink___024root___eval_initial(VLedBlink___024root* vlSelf);
void VLedBlink___024root___eval_settle(VLedBlink___024root* vlSelf);
void VLedBlink___024root___eval(VLedBlink___024root* vlSelf);

void VLedBlink::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLedBlink::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLedBlink___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VLedBlink___024root___eval_static(&(vlSymsp->TOP));
        VLedBlink___024root___eval_initial(&(vlSymsp->TOP));
        VLedBlink___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VLedBlink___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VLedBlink::eventsPending() { return false; }

uint64_t VLedBlink::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void VLedBlink___024root___eval_final(VLedBlink___024root* vlSelf);

VL_ATTR_COLD void VLedBlink::final() {
    VLedBlink___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VLedBlink::hierName() const { return vlSymsp->name(); }
const char* VLedBlink::modelName() const { return "VLedBlink"; }
unsigned VLedBlink::threads() const { return 1; }
void VLedBlink::prepareClone() const { contextp()->prepareClone(); }
void VLedBlink::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VLedBlink::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VLedBlink___024root__trace_decl_types(VerilatedVcd* tracep);

void VLedBlink___024root__trace_init_top(VLedBlink___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLedBlink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLedBlink___024root*>(voidSelf);
    VLedBlink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VLedBlink___024root__trace_decl_types(tracep);
    VLedBlink___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VLedBlink___024root__trace_register(VLedBlink___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLedBlink::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "VLedBlink::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VLedBlink::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLedBlink___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
