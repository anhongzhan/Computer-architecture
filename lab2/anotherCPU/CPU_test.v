`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:21:11 11/22/2018
// Design Name:   CPU
// Module Name:   F:/ise project/anotherCPU/CPU_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_test;

	// Inputs
	reg clk;
//	reg Reset;

	// Outputs
	wire [5:0] opcode;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.opcode(opcode)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		#2;
        
		// Add stimulus here

	end
		always #2 clk = ~clk;
      
endmodule

