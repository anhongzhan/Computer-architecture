`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:53:14 11/23/2018
// Design Name:   ZeroSignExtend
// Module Name:   F:/ise project/anotherCPU/zes_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ZeroSignExtend
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module zes_test;

	// Inputs
	reg [15:0] in;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	ZeroSignExtend uut (
		.in(in), 
		.out(out)
	);

	initial begin
		in = 16'b0;
		#100;
		in = 16'h0001;
		#100;
		in = 16'h0002;
		#100;
		in = 16'h8000;
		#100;
	end
      
endmodule

