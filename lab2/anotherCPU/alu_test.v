`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:10:39 11/23/2018
// Design Name:   ALU
// Module Name:   F:/ise project/anotherCPU/alu_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_test;

	// Inputs
	reg [31:0] ReadData1;
	reg [31:0] immediate;
	reg [31:0] ReadData2;
	reg ALUSrcB;
	reg [2:0] ALUOp;

	// Outputs
	wire zero;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ReadData1(ReadData1), 
		.immediate(immediate), 
		.ReadData2(ReadData2), 
		.ALUSrcB(ALUSrcB), 
		.ALUOp(ALUOp), 
		.zero(zero), 
		.result(result)
	);

	initial begin
		ReadData1 = 32'h0001;
		immediate = 32'h0002;
		ReadData2 = 0;
		ALUSrcB = 0;
		ALUOp = 3'b000;
		#100;
      ALUOp = ALUOp + 1;
		#100;
      ALUOp = ALUOp + 1;
		#100;
      ALUOp = ALUOp + 1;#100;
      ALUOp = ALUOp + 1;
		#100;
	end
      
endmodule

