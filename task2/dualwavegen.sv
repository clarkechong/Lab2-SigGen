module dualwavegen #(
    parameter   DATA_WIDTH = 8,
                ADDR_WIDTH = 8
) (
    input logic rst,
    input logic en,
    input logic clk,
    input logic     [ADDR_WIDTH-1:0] offset,
    input logic     [DATA_WIDTH-1:0] incr,
    output logic    [DATA_WIDTH-1:0] dout1,
    output logic    [DATA_WIDTH-1:0] dout2
);

    logic [ADDR_WIDTH-1:0] addr1_wire;

counter romCounter (
    .rst (rst),
    .en (en),
    .clk (clk),
    .incr (incr),
    .count (addr1_wire)
);

rom sineRom (
    .clk (clk),
    .addr1 (addr1_wire),
    .addr2 (addr1_wire + offset),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
