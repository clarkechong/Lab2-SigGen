// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdualwavegen__Syms.h"


VL_ATTR_COLD void Vdualwavegen___024root__trace_init_sub__TOP__0(Vdualwavegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 7,0);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"dout2", false,-1, 7,0);
    tracep->pushNamePrefix("dualwavegen ");
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 7,0);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"dout2", false,-1, 7,0);
    tracep->declBus(c+8,"addr1_wire", false,-1, 7,0);
    tracep->pushNamePrefix("romCounter ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBus(c+8,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRom ");
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+8,"addr1", false,-1, 7,0);
    tracep->declBus(c+9,"addr2", false,-1, 7,0);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"dout2", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdualwavegen___024root__trace_init_top(Vdualwavegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_init_top\n"); );
    // Body
    Vdualwavegen___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdualwavegen___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdualwavegen___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdualwavegen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdualwavegen___024root__trace_register(Vdualwavegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdualwavegen___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdualwavegen___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdualwavegen___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdualwavegen___024root__trace_full_sub_0(Vdualwavegen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdualwavegen___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_full_top_0\n"); );
    // Init
    Vdualwavegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdualwavegen___024root*>(voidSelf);
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdualwavegen___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdualwavegen___024root__trace_full_sub_0(Vdualwavegen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdualwavegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdualwavegen___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->rst));
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullBit(oldp+3,(vlSelf->clk));
    bufp->fullCData(oldp+4,(vlSelf->offset),8);
    bufp->fullCData(oldp+5,(vlSelf->incr),8);
    bufp->fullCData(oldp+6,(vlSelf->dout1),8);
    bufp->fullCData(oldp+7,(vlSelf->dout2),8);
    bufp->fullCData(oldp+8,(vlSelf->dualwavegen__DOT__addr1_wire),8);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(vlSelf->dualwavegen__DOT__addr1_wire) 
                                      + (IData)(vlSelf->offset)))),8);
    bufp->fullIData(oldp+10,(8U),32);
}
