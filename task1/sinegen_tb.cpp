#include "Vsinegen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int clk;

    Verilated::commandArgs(argc, argv);
    Vsinegen* top = new Vsinegen;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("sinegen.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("lab 2 shiz");

    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->incr = 5; // increment referring to how "quickly" sinerom.mem is read. e.g. if incr = 2, the frequency is doubled

    for (int i=0; i<100000; i++) {

        for (clk=0; clk<2; clk++){
            tfp->dump (2*i+clk); 
            top->clk = !top->clk;
            top->eval ();
        }

        vbdPlot(int(top->dout), 0, 255);
        vbdCycle(i+1);

        // early finish upon pressing q
        if (Verilated::gotFinish() || vbdGetkey()=='q') exit(0);

    }

    vbdClose();
    tfp->close();
    exit(0);
}