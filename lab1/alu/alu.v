`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:52:44 10/18/2018 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu(
	input [31:0] A, 
	input [31:0] B,  
	input [4:0] Card,
	input Cin,
	//input Clk,
	output [31:0]F,
	output Cout,
	output Zero
);

parameter lflag = 33'b0;
parameter sflag = 32'b0;
parameter tag = 33'b011111111111111111111111111111111;

reg [32:0] result;

	always@(*)begin
		case(Card)
			5'b00001:	begin
				result = A + B;	
			end
			5'b00010:	begin
				result = A + B + Cin;
			end
			5'b00011:	begin
				result = A - B;
			end
			5'b00100:	begin
				result = A - B - Cin;
			end
			5'b00101:	begin
				result = B - A;
			end
			5'b00110:	begin
				result = B - A - Cin;
			end
			5'b00111:	begin
				result = A;
			end
			5'b01000:	begin
				result = B;
			end
			5'b01001:	begin
				result = ~A & tag;
			end
			5'b01010:	begin
				result = ~B & tag;
			end
			5'b01011:	begin
				result = A | B;	
			end
			5'b01100:	begin
				result = A & B;
			end
			5'b01101:	begin
				result = (A~^B)&tag;
			end
			5'b01110:	begin
				result = A^B;
			end
			5'b01111:	begin
				result = ~(A&B)&tag;
			end
			5'b10000:	begin
				result = lflag;
			end
		endcase
	end	
	
	assign F = result[31:0];
	assign Cout = result[32];
	assign Zero = (F==sflag)?1:0;
	
endmodule

