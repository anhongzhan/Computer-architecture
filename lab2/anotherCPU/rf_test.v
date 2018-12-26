`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:04:42 11/23/2018
// Design Name:   RegisterFile
// Module Name:   F:/ise project/anotherCPU/rf_test.v
// Project Name:  anotherCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rf_test;

	// Inputs
	reg clk;
	reg RegWire;
	reg RegOut;
	reg [4:0] rs;
	reg [4:0] rt;
	reg [4:0] rd;
	reg ALUM2Reg;
	reg [31:0] Data_From_ALU;
	reg [31:0] Data_From_MDR;

	// Outputs
	wire [31:0] ReadData1;
	wire [31:0] ReadData2;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.clk(clk), 
		.RegWire(RegWire), 
		.RegOut(RegOut), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.ALUM2Reg(ALUM2Reg), 
		.Data_From_ALU(Data_From_ALU), 
		.Data_From_MDR(Data_From_MDR), 
		.ReadData1(ReadData1), 
		.ReadData2(ReadData2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		RegWire = 0;
		RegOut = 0;
		rs = 5'b00001;
		rt = 5'b00000;
		rd = 5'b00000;
		ALUM2Reg = 0;
		Data_From_ALU = 1;
		Data_From_MDR = 0;
		#100;
      RegWire = 0;
		RegOut = 0;
		rs = 5'b00010;
		rt = 5'b00000;
		rd = 5'b00000;
		ALUM2Reg = 0;
		Data_From_ALU = 2;
		Data_From_MDR = 0;
		#100;	
		// Add stimulus here

	end
      always #10 clk = ~clk;
endmodule

