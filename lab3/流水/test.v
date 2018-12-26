`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:04:23 12/11/2018
// Design Name:   CPU
// Module Name:   F:/ise project/CPU_3/test.v
// Project Name:  CPU_3
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

module test;

	// Inputs
	reg clk;

	// Outputs
	wire [31:0] npc;
	wire [15:0] immediate;
	wire [31:0] IR;
	wire [31:0] MEM_Data;
	wire [31:0] MDR_out;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.npc(npc), 
		.immediate(immediate), 
		.IR(IR), 
		.MEM_Data(MEM_Data), 
		.MDR_out(MDR_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#2;
        
		// Add stimulus here

	end
     always #2 clk = ~clk; 
endmodule

