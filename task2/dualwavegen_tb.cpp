#include "Vdualwavegen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int clk;

    Verilated::commandArgs(argc, argv);
    Vdualwavegen* top = new Vdualwavegen;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("dualgen.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("lab 2 shiz");

    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->incr = 5;
    top->offset = 64;

    for (int i=0; i<100000; i++) {

        for (clk=0; clk<2; clk++){
            tfp->dump (2*i+clk); 
            top->clk = !top->clk;
            top->eval ();
        }

        vbdPlot(int(top->dout1), 0, 255);
        vbdPlot(int(top->dout2), 0, 255);
        vbdCycle(i+1);

        // early finish upon pressing q
        if (Verilated::gotFinish() || vbdGetkey()=='q') exit(0);

    }

    vbdClose();
    tfp->close();
    exit(0);
}