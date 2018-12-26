`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:24:56 11/23/2018
// Design Name:   MAR
// Module Name:   F:/ise project/anotherCPU/mar_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MAR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mar_test;

	// Inputs
	reg [31:0] IAddr;

	// Outputs
	wire [5:0] opcode;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] immediate;

	// Instantiate the Unit Under Test (UUT)
	MAR uut (
		.IAddr(IAddr), 
		.opcode(opcode), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immediate(immediate)
	);

	initial begin
		IAddr = 32'b0;
		#100;
		IAddr = IAddr + 4;
		#100;
		IAddr = IAddr + 4;
		#100;
		IAddr = IAddr + 4;
		#100;
		IAddr = IAddr + 4;
		#100;
	end
      
endmodule

