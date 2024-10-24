// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdualwavegen.h for the primary calling header

#include "verilated.h"

#include "Vdualwavegen__Syms.h"
#include "Vdualwavegen___024root.h"

void Vdualwavegen___024root___ctor_var_reset(Vdualwavegen___024root* vlSelf);

Vdualwavegen___024root::Vdualwavegen___024root(Vdualwavegen__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdualwavegen___024root___ctor_var_reset(this);
}

void Vdualwavegen___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdualwavegen___024root::~Vdualwavegen___024root() {
}
