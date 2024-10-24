// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdualwavegen__Syms.h"


void Vdualwavegen___024root__trace_chg_sub_0(Vdualwavegen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdualwavegen___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_chg_top_0\n"); );
    // Init
    Vdualwavegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdualwavegen___024root*>(voidSelf);
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdualwavegen___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdualwavegen___024root__trace_chg_sub_0(Vdualwavegen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->rst));
    bufp->chgBit(oldp+1,(vlSelf->en));
    bufp->chgBit(oldp+2,(vlSelf->clk));
    bufp->chgCData(oldp+3,(vlSelf->offset),8);
    bufp->chgCData(oldp+4,(vlSelf->incr),8);
    bufp->chgCData(oldp+5,(vlSelf->dout1),8);
    bufp->chgCData(oldp+6,(vlSelf->dout2),8);
    bufp->chgCData(oldp+7,(vlSelf->dualwavegen__DOT__addr1_wire),8);
    bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSelf->dualwavegen__DOT__addr1_wire) 
                                     + (IData)(vlSelf->offset)))),8);
}

void Vdualwavegen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_cleanup\n"); );
    // Init
    Vdualwavegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdualwavegen___024root*>(voidSelf);
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
