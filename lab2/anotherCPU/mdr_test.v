`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:14:26 11/23/2018
// Design Name:   MDR
// Module Name:   F:/ise project/anotherCPU/mdr_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MDR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mdr_test;

	// Inputs
	reg clk;
	reg [31:0] DAddr;
	reg [31:0] DataIn;
	reg MDRW;

	// Outputs
	wire [31:0] DataOut;

	// Instantiate the Unit Under Test (UUT)
	MDR uut (
		.clk(clk), 
		.DAddr(DAddr), 
		.DataIn(DataIn), 
		.DataOut(DataOut), 
		.MDRW(MDRW)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		DAddr = 32'h00000006;
		DataIn = 32'h00000006;
		MDRW = 1;

		// Wait 100 ns for global reset to finish
		#100;
      DAddr = 32'h00000006;
		DataIn = 32'h00000006;
		MDRW = 0; 
		#100;
		// Add stimulus here

	end
		always #10 clk = ~clk;
      
endmodule

