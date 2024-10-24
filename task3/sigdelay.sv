module sigdelay #(
    parameter   DATA_WIDTH = 8,
                ADDR_WIDTH = 9
) (
    input logic clk,
    input logic en,
    input logic rst,
    input logic wr,
    input logic rd,
    input logic [ADDR_WIDTH-1:0] offset,
    input logic [DATA_WIDTH-1:0] mic_signal,
    output logic [DATA_WIDTH-1:0] delayed_signal
);
    logic [ADDR_WIDTH-1:0] addrr_wire; // addr read wire

ram myRam(
    .clk (clk),
    .wr (wr),
    .rd (rd),
    .addrr (addrr_wire),
    .addrw (addrr_wire + offset),
    .din (mic_signal),
    .dout (delayed_signal)
);

counter myCounter(
    .rst (rst),
    .en (en),
    .clk (clk),
    .count (addrr_wire)
);

endmodule
