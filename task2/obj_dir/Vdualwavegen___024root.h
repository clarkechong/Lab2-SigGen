// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdualwavegen.h for the primary calling header

#ifndef VERILATED_VDUALWAVEGEN___024ROOT_H_
#define VERILATED_VDUALWAVEGEN___024ROOT_H_  // guard

#include "verilated.h"

class Vdualwavegen__Syms;

class Vdualwavegen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(offset,7,0);
    VL_IN8(incr,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*7:0*/ dualwavegen__DOT__addr1_wire;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> dualwavegen__DOT__sineRom__DOT__rom_array;

    // INTERNAL VARIABLES
    Vdualwavegen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdualwavegen___024root(Vdualwavegen__Syms* symsp, const char* name);
    ~Vdualwavegen___024root();
    VL_UNCOPYABLE(Vdualwavegen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
