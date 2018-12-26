`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:44:26 11/23/2018
// Design Name:   NPC
// Module Name:   F:/ise project/anotherCPU/npc_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NPC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module npc_test;

	// Inputs
	reg [31:0] pc;

	// Outputs
	wire [31:0] npc;

	// Instantiate the Unit Under Test (UUT)
	NPC uut (
		.pc(pc), 
		.npc(npc)
	);

	initial begin
		// Initialize Inputs
		pc = 32'b0;
		#100;
      pc = pc + 4;
		#100;
      pc = pc + 4;
		#100;
      pc = pc + 4;
		#100;
      pc = pc + 4;
		#100;
      pc = pc + 4;
		#100;
		// Add stimulus here

	end
      
endmodule

