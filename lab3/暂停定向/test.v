`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:36:58 11/18/2018
// Design Name:   WIN
// Module Name:   E:/ISE_Homework/led/bo.v
// Project Name:  led
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: WIN
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bo;

	// Inputs
	reg clc;
	reg reset; 

	// Outputs
	wire zero;
	wire MDRWrite;
	wire writeyes;
	// Instantiate the Unit Under Test (UUT)
	WIN uut (
		.clc(clc), 
		.reset(reset),
		.MDRWrite(MDRWrite),
		.zero(zero),
		.writeyes(writeyes)
		
	);

	initial begin
		// Initialize Inputs
		clc = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
       
		always #20 clc = ~clc; 
endmodule

