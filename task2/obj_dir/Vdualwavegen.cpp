// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdualwavegen.h"
#include "Vdualwavegen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdualwavegen::Vdualwavegen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdualwavegen__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , offset{vlSymsp->TOP.offset}
    , incr{vlSymsp->TOP.incr}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdualwavegen::Vdualwavegen(const char* _vcname__)
    : Vdualwavegen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdualwavegen::~Vdualwavegen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdualwavegen___024root___eval_initial(Vdualwavegen___024root* vlSelf);
void Vdualwavegen___024root___eval_settle(Vdualwavegen___024root* vlSelf);
void Vdualwavegen___024root___eval(Vdualwavegen___024root* vlSelf);
#ifdef VL_DEBUG
void Vdualwavegen___024root___eval_debug_assertions(Vdualwavegen___024root* vlSelf);
#endif  // VL_DEBUG
void Vdualwavegen___024root___final(Vdualwavegen___024root* vlSelf);

static void _eval_initial_loop(Vdualwavegen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdualwavegen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdualwavegen___024root___eval_settle(&(vlSymsp->TOP));
        Vdualwavegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdualwavegen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdualwavegen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdualwavegen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdualwavegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdualwavegen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdualwavegen::final() {
    Vdualwavegen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdualwavegen::hierName() const { return vlSymsp->name(); }
const char* Vdualwavegen::modelName() const { return "Vdualwavegen"; }
unsigned Vdualwavegen::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdualwavegen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdualwavegen___024root__trace_init_top(Vdualwavegen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdualwavegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdualwavegen___024root*>(voidSelf);
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdualwavegen___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdualwavegen___024root__trace_register(Vdualwavegen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdualwavegen::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdualwavegen___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
