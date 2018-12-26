`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:48:28 11/23/2018
// Design Name:   PC
// Module Name:   F:/ise project/anotherCPU/PC_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_test;

	// Inputs
	reg clk;
	reg [31:0] immediate;
	reg PCSrc;
	reg zero;
	reg [31:0] npc;
	reg Jmp;

	// Outputs
	wire [31:0] immediate_out;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.immediate(immediate), 
		.PCSrc(PCSrc), 
		.zero(zero), 
		.npc(npc), 
		.immediate_out(immediate_out), 
		.Jmp(Jmp)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		immediate = 0;
		PCSrc = 0;
		zero = 0;
		npc = 32'b0;
		Jmp = 0;

		// Wait 100 ns for global reset to finish
		#100;
		immediate = 32'b0;
		PCSrc = 0;
		zero = 0;
		npc = 8'h0004;
		Jmp = 0;
		#100;
		immediate = 32'b0;
		PCSrc = 0;
		zero = 0;
		npc = 8'h0008;
		Jmp = 0;
		#100;
		immediate = 32'b0;
		PCSrc = 0;
		zero = 0;
		npc = 8'h000C;
		Jmp = 0;
		#100;
		immediate = 32'b0;
		PCSrc = 0;
		zero = 0;
		npc = 8'h0010;
		Jmp = 0;
		#100;
		// Add stimulus here

	end
      always #10 clk = ~clk;
endmodule

