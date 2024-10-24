module ram #(
	parameter  ADDR_WIDTH = 9, // 512 addresses
			   DATA_WIDTH = 8
)(
	input logic                         clk,
	input logic							wr, 	// write enable
	input logic							rd, 	// read enable
    input logic     [ADDR_WIDTH-1:0] addrr, 	// address read
    input logic     [ADDR_WIDTH-1:0] addrw, 	// address write
    input logic     [DATA_WIDTH-1:0] 	din,
	output logic    [DATA_WIDTH-1:0]    dout
);

// initiate rom array with 2^ADDR_WIDTH elements.
// each element is size DATA_WIDTH
logic [DATA_WIDTH-1:0] rom_array [(2**ADDR_WIDTH)-1:0];
logic [ADDR_WIDTH-1:0] internal_offset_buffer;

always_ff @(posedge clk)
begin
	if (wr) rom_array [addrw] <= din;
	if (rd) dout <= rom_array [addrr];

	// print any changes to the offset to the terminal (due to the rotary enconder)
	if (internal_offset_buffer != (addrw - addrr)) begin 
		internal_offset_buffer = (addrw - addrr);
		$display("offset: ", internal_offset_buffer);
	end
end

endmodule
