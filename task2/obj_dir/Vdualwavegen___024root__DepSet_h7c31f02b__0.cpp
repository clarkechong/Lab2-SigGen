// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdualwavegen.h for the primary calling header

#include "verilated.h"

#include "Vdualwavegen___024root.h"

VL_INLINE_OPT void Vdualwavegen___024root___sequent__TOP__0(Vdualwavegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__dualwavegen__DOT__addr1_wire;
    // Body
    __Vdly__dualwavegen__DOT__addr1_wire = vlSelf->dualwavegen__DOT__addr1_wire;
    if (vlSelf->en) {
        __Vdly__dualwavegen__DOT__addr1_wire = ((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->dualwavegen__DOT__addr1_wire) 
                                                    + (IData)(vlSelf->incr))));
    }
    vlSelf->dout1 = vlSelf->dualwavegen__DOT__sineRom__DOT__rom_array
        [vlSelf->dualwavegen__DOT__addr1_wire];
    vlSelf->dout2 = vlSelf->dualwavegen__DOT__sineRom__DOT__rom_array
        [(0xffU & ((IData)(vlSelf->dualwavegen__DOT__addr1_wire) 
                   + (IData)(vlSelf->offset)))];
    vlSelf->dualwavegen__DOT__addr1_wire = __Vdly__dualwavegen__DOT__addr1_wire;
}

void Vdualwavegen___024root___eval(Vdualwavegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdualwavegen___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdualwavegen___024root___eval_debug_assertions(Vdualwavegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
