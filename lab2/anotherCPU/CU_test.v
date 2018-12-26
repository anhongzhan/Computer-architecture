`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:59:49 11/23/2018
// Design Name:   CU
// Module Name:   F:/ise project/anotherCPU/CU_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CU_test;

	// Inputs
	reg [5:0] opcode;

	// Outputs
	wire PCSrc;
	wire MDRW;
	wire ALUM2Reg;
	wire ALUSrcB;
	wire [2:0] ALUOp;
	wire RegWire;
	wire RegOut;
	wire Jmp;

	// Instantiate the Unit Under Test (UUT)
	CU uut (
		.opcode(opcode), 
		.PCSrc(PCSrc), 
		.MDRW(MDRW), 
		.ALUM2Reg(ALUM2Reg), 
		.ALUSrcB(ALUSrcB), 
		.ALUOp(ALUOp), 
		.RegWire(RegWire), 
		.RegOut(RegOut), 
		.Jmp(Jmp)
	);

	initial begin
		// Initialize Inputs
		opcode = 6'b000001;
		#100;
		opcode = opcode + 1;
		#100;
		opcode = opcode + 1;
		#100;
       opcode = opcode + 1;
		#100;
		opcode = opcode + 1;
		#100;		
		// Add stimulus here

	end
      
endmodule

