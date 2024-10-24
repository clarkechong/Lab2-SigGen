module sinegen #(
    parameter   DATA_WIDTH = 8,
                ADDR_WIDTH = 8
) (
    input logic rst,
    input logic en,
    input logic clk,
    input logic     [DATA_WIDTH-1:0] incr,
    output logic    [DATA_WIDTH-1:0] dout
);

    logic [ADDR_WIDTH-1:0] addr_wire; // internal link between counter & rom addr

counter romCounter (
    .rst (rst),
    .en (en),
    .clk (clk),
    .incr (incr),
    .count (addr_wire)
);

rom sineRom (
    .clk (clk),
    .addr (addr_wire),
    .dout (dout)
);

endmodule
