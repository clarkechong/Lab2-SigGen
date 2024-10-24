module counter # (
    parameter WIDTH = 9
) (
    input logic rst,
    input logic en,
    input logic clk,
    output logic    [WIDTH-1:0] count
);

always_ff @ (posedge clk)
    if (en) begin
        if (rst) count <= {WIDTH{1'b0}};
        else count <= count + 1;
    end
endmodule
