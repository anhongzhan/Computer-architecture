	`timescale 1ns / 1ps
	//////////////////////////////////////////////////////////////////////////////////
	// Company: 
	// Engineer: 
	// 
	// Create Date:    08:50:04 11/08/2018 
	// Design Name: 
	// Module Name:    CPU 
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
	 module CPU(clk, opcode);

		input clk;
		output [5:0] opcode;

		wire cclk;
		wire [31:0] IAddr, npc;
		wire [2:0] ALUOp;
		wire [4:0] rs, rt, rd;
		wire PCSrc, zero ,Jmp, RegWire;
		wire [31:0] Data_From_MDR, Data_From_ALU;
		wire MDRW, ALUM2Reg, ALUSrcB, RegOut;
		wire [15:0] immediate;
		wire clk;
		wire [31:0] ReadData1, ReadData2;
		wire [31:0] extend_immediate;
		
		Caulator ca(clk, cclk);
		NPC np(IAddr,npc);
		PC p(cclk, extend_immediate, PCSrc, zero, npc, IAddr, Jmp);
		ZeroSignExtend zse(immediate, extend_immediate);
		CU cu(opcode, PCSrc, MDRW, ALUM2Reg, ALUSrcB, ALUOp, RegWire, RegOut, Jmp);
		RegisterFile rf(cclk, RegWire, RegOut, rs, rt, rd, ALUM2Reg, Data_From_ALU, Data_From_MDR, ReadData1, ReadData2);
		ALU alu(ReadData1, extend_immediate, ReadData2, ALUSrcB, ALUOp, zero, Data_From_ALU);
		MDR mdr(cclk, Data_From_ALU, ReadData1, Data_From_MDR, MDRW);
		MAR mar(IAddr, opcode, rs, rt, rd, immediate);
	endmodule

	module PC(clk, immediate, PCSrc, zero, npc, immediate_out, Jmp);
		input clk, PCSrc, zero,Jmp;
		input [31:0] immediate;
		input [31:0]npc;
		output reg [31:0] immediate_out;

		assign flag = PCSrc & zero; 
		initial
			immediate_out = 32'b0;
		always @(posedge clk) begin
			if(Jmp==1) begin
				immediate_out[31:25] = npc[31:25];
				immediate_out[24:0] = immediate;
			end
			else begin
				if(flag==0)
					immediate_out = npc;
				else
					immediate_out = npc - 4 + (immediate << 2);
			end
		end
	endmodule

	module Caulator(clk, cclk);
		input clk;
		output wire cclk;
		
		reg[3:0] i = 0;
		assign cclk = i[3];
		
		initial begin
			i = 0;
		end
		always @(posedge clk) begin
				i = i + 1;
		end
	endmodule

	module NPC(pc, npc);
		input [31:0] pc;
		output reg [31:0] npc;
		always @(*)
			npc = pc + 4;
	endmodule

	module ALU(ReadData1, immediate, ReadData2, ALUSrcB, ALUOp, zero, result);
		input [31:0] ReadData1, immediate, ReadData2;
		input ALUSrcB;
		input [2:0] ALUOp;
		output reg zero;
		output reg [31:0] result;
		
		reg [31:0] A;
		reg [31:0] B;
		
		always @(*) begin
			A = (ALUSrcB==0) ? ReadData1 : immediate;
			B = ReadData2;
			case(ALUOp)
				3'b000: begin
					result = A + B;
				end
				3'b001: begin
					result = B + A;
				end
				3'b010: begin
					result = A - B;
				end
				3'b011: begin
					result = B - A;
				end
				3'b100: begin
					result = A & B;
				end
				3'b101: begin
					result = A | B;
				end
				3'b110: begin
					result = A ^ B;
				end
				3'b111: begin
					result = A < B ? 32'h0001 : 32'h0000;
				end
			endcase
		zero = (A - B == 0) ? 1 : 0;
		end
	endmodule

	module MAR(IAddr, opcode, rs, rt, rd, immediate);
		input [31:0] IAddr;
		output  [5:0] opcode;
		output  [4:0] rs, rt, rd;
		output  [15:0] immediate;
		 
		wire [7:0] mem[0:127];
		
	//LW R1,2(R0)
		assign mem[0] = 8'b00001000;
		assign mem[1] = 8'b00100000;
		assign mem[2] = 8'b00000000;
		assign mem[3] = 8'b00000010;
	//LW R2, 3(R0)
		assign mem[4] = 8'b00001000;
		assign mem[5] = 8'b01000000;
		assign mem[6] = 8'b00000000;
		assign mem[7] = 8'b00000011;
	//LW R3, 4(R0)
		assign mem[8] = 8'b00001000;
		assign mem[9] = 8'b01100000;
		assign mem[10] = 8'b00000000;
		assign mem[11] = 8'b00000100;
	//ADD R1, R2, R3
		assign mem[12] = 8'b00010000;
		assign mem[13] = 8'b00100010;
		assign mem[14] = 8'b00011000;
		assign mem[15] = 8'b00000000;
	//SUB R4, R2, R3
		assign mem[16] = 8'b00010100;
		assign mem[17] = 8'b10000010;
		assign mem[18] = 8'b00011000;
		assign mem[19] = 8'b00000000;
	//SW R1, R2, 4
		assign mem[20] = 8'b00000100;
		assign mem[21] = 8'b00100010;
		assign mem[22] = 8'b00000000;
		assign mem[23] = 8'b00000100;
	//AND R5, R2, R3
		assign mem[24] = 8'b00011000;
		assign mem[25] = 8'b10100010;
		assign mem[26] = 8'b00011000;
		assign mem[27] = 8'b00000000;
/*		
		assign mem[28] = 8'b00000000;
		assign mem[29] = 8'b00000000;
		assign mem[30] = 8'b00000000;
		assign mem[31] = 8'b00000000;
		
		assign mem[32] = 8'b00000000;
		assign mem[33] = 8'b00000000;
		assign mem[34] = 8'b00000000;
		assign mem[35] = 8'b00000000;
		
		assign mem[36] = 8'b00000000;
		assign mem[37] = 8'b00000000;
		assign mem[38] = 8'b00000000;
		assign mem[39] = 8'b00000000;
		*/
	//OR R6, R2, R3
		assign mem[28] = 8'b00011100;
		assign mem[29] = 8'b11000010;
		assign mem[30] = 8'b00011000;
		assign mem[31] = 8'b00000000;
	//XOR R7, R2, R3
		assign mem[32] = 8'b00100000;
		assign mem[33] = 8'b11100010;
		assign mem[34] = 8'b00011000;
		assign mem[35] = 8'b00000000;
	//SLT R8, R2, R3
		assign mem[36] = 8'b00100101;
		assign mem[37] = 8'b00000011;
		assign mem[38] = 8'b00010000;
		assign mem[39] = 8'b00000000;
	/*	
		assign mem[40] = 8'b00000000;
		assign mem[41] = 8'b00000000;
		assign mem[42] = 8'b00000000;
		assign mem[43] = 8'b00000000;
		
		assign mem[44] = 8'b00000000;
		assign mem[45] = 8'b00000000;
		assign mem[46] = 8'b00000000;
		assign mem[47] = 8'b00000000;
		
		assign mem[48] = 8'b00000000;
		assign mem[49] = 8'b00000000;
		assign mem[50] = 8'b00000000;
		assign mem[51] = 8'b00000000;
		
		assign mem[52] = 8'b00000000;
		assign mem[53] = 8'b00000000;
		assign mem[54] = 8'b00000000;
		assign mem[55] = 8'b00000000;
		
		assign mem[56] = 8'b00000000;
		assign mem[57] = 8'b00000000;
		assign mem[58] = 8'b00000000;
		assign mem[59] = 8'b00000000;*/
	//BEQ R6, R7, 2
		assign mem[40] = 8'b00001100;
		assign mem[41] = 8'b11000111;
		assign mem[42] = 8'b00000000;
		assign mem[43] = 8'b00000010;
	//LW R1, 2(R0)
		assign mem[44] = 8'b00001000;
		assign mem[45] = 8'b00100000;
		assign mem[46] = 8'b00000000;
		assign mem[47] = 8'b00000010;
	//LW R2, 2(R0)
		assign mem[48] = 8'b00001000;
		assign mem[49] = 8'b01000000;
		assign mem[50] = 8'b00000000;
		assign mem[51] = 8'b00000010;
	//JUMP 00
		assign mem[52] = 8'b00101000;
		assign mem[53] = 8'b00000000;
		assign mem[54] = 8'b00000000;
		assign mem[55] = 8'b00000000;
	//64	
		assign mem[56] = 8'b00000000;
		assign mem[57] = 8'b00000000;
		assign mem[58] = 8'b00000000;
		assign mem[59] = 8'b00000000;
		
		assign mem[60] = 8'b00000000;
		assign mem[61] = 8'b00000000;
		assign mem[62] = 8'b00000000;
		assign mem[63] = 8'b00000000;
		
		assign mem[64] = 8'b00000000;
		assign mem[65] = 8'b00000000;
		assign mem[66] = 8'b00000000;
		assign mem[67] = 8'b00000000;
		
		assign mem[68] = 8'b00000000;
		assign mem[69] = 8'b00000000;
		assign mem[70] = 8'b00000000;
		assign mem[71] = 8'b00000000;
		
		assign mem[72] = 8'b00000000;
		assign mem[73] = 8'b00000000;
		assign mem[74] = 8'b00000000;
		assign mem[75] = 8'b00000000;
		
		assign mem[76] = 8'b00000000;
		assign mem[77] = 8'b00000000;
		assign mem[78] = 8'b00000000;
		assign mem[79] = 8'b00000000;
		
		assign mem[80] = 8'b00000000;
		assign mem[81] = 8'b00000000;
		assign mem[82] = 8'b00000000;
		assign mem[83] = 8'b00000000;
		
		assign mem[84] = 8'b00000000;
		assign mem[85] = 8'b00000000;
		assign mem[86] = 8'b00000000;
		assign mem[87] = 8'b00000000;
		
		assign mem[88] = 8'b00000000;
		assign mem[89] = 8'b00000000;
		assign mem[90] = 8'b00000000;
		assign mem[91] = 8'b00000000;
			
		assign mem[92] = 8'b00000000;
		assign mem[93] = 8'b00000000;
		assign mem[94] = 8'b00000000;
		assign mem[95] = 8'b00000000;
			
		assign mem[96] = 8'b00000000;
		assign mem[97] = 8'b00000000;
		assign mem[98] = 8'b00000000;
		assign mem[99] = 8'b00000000;
			
		assign mem[100] = 8'b00000000;
		assign mem[101] = 8'b00000000;
		assign mem[102] = 8'b00000000;
		assign mem[103] = 8'b00000000;
			
		assign mem[104] = 8'b00000000;
		assign mem[105] = 8'b00000000;
		assign mem[106] = 8'b00000000;
		assign mem[107] = 8'b00000000;
			
		assign mem[108] = 8'b00000000;
		assign mem[109] = 8'b00000000;
		assign mem[110] = 8'b00000000;
		assign mem[111] = 8'b00000000;
			
		assign mem[112] = 8'b00000000;
		assign mem[113] = 8'b00000000;
		assign mem[114] = 8'b00000000;
		assign mem[115] = 8'b00000000;
			
		assign mem[116] = 8'b00000000;
		assign mem[117] = 8'b00000000;
		assign mem[118] = 8'b00000000;
		assign mem[119] = 8'b00000000;
		
			
		assign mem[120] = 8'b00000000;
		assign mem[121] = 8'b00000000;
		assign mem[122] = 8'b00000000;
		assign mem[123] = 8'b00000000;
			
		assign mem[124] = 8'b00000000;
		assign mem[125] = 8'b00000000;
		assign mem[126] = 8'b00000000;
		assign mem[127] = 8'b00000000;
		
		assign opcode = mem[IAddr][7:2];
		assign rs[4:3] = mem[IAddr][1:0];
		assign rs[2:0] = mem[IAddr+1][7:5];
		assign rt = mem[IAddr+1][4:0];
		assign rd = mem[IAddr+2][7:3];
		assign immediate[15:8] = mem[IAddr+2][7:0];
		assign immediate[7:0] = mem[IAddr+3][7:0];
		
	endmodule

	module RegisterFile(clk, RegWire, RegOut, rs, rt, rd, ALUM2Reg, Data_From_ALU, Data_From_MDR, ReadData1, ReadData2);
		input clk, RegOut, RegWire, ALUM2Reg;
		input [4:0] rs, rt, rd;
		input [31:0] Data_From_ALU, Data_From_MDR;
		output reg [31:0] ReadData1, ReadData2;
		
		wire [4:0] ReadReg1, ReadReg2, WriteReg;
		wire [31:0] WriteData;
		
		assign ReadReg1 = RegOut==1 ? rs : rd;
		assign ReadReg2 = rt;
		assign WriteReg = RegOut==0 ? rs : rd;
		assign WriteData = ALUM2Reg==0 ? Data_From_ALU : Data_From_MDR;
		
		reg [31:0] register[0:31];
		
		integer i;
		initial begin
		    for (i = 0; i < 32; i = i+1) register[i] <= 0;
		end
		
		always @(*) begin
			ReadData1 = register[ReadReg1];
			ReadData2 = register[ReadReg2];
		end
		always @(negedge clk) begin
			if(RegWire==0&&WriteReg)
				register[WriteReg] = WriteData;
		end
	endmodule


	module ZeroSignExtend(in, out);
		input [15:0] in;
		output reg [31:0] out;
		
		always @(*) begin
			out[15:0] = in;
			out[31:16] = in[15] ? 16'hffff : 16'h0000;
		end
	endmodule

	module CU(opcode, PCSrc, MDRW, ALUM2Reg, ALUSrcB, ALUOp, RegWire, RegOut, Jmp);
		input [5:0] opcode;
		output reg PCSrc;
		output reg MDRW;
		output reg ALUM2Reg;
		output reg ALUSrcB;
		output reg [2:0] ALUOp;
		output reg RegWire;
		output reg RegOut;
		output reg Jmp;

		always @(*) begin
			case(opcode)
				6'b000001: begin
					ALUM2Reg = 1;
					MDRW = 1;
					ALUSrcB = 1;
					ALUOp = 3'b000;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 1;
					Jmp = 0;
				end
				6'b000010: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 1;
					ALUOp = 3'b000;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b000011: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b000;
					RegWire = 0;
					PCSrc = 1;
					RegOut = 1;
					Jmp = 0;
				end
				6'b000100: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b000;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b000101: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b010;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b000110: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b100;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b000111: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b101;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b001000: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b110;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b001001: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b111;
					RegWire = 0;
					PCSrc = 0;
					RegOut = 0;
					Jmp = 0;
				end
				6'b001010: begin
					ALUM2Reg = 0;
					MDRW = 0;
					ALUSrcB = 0;
					ALUOp = 3'b000;
					RegWire = 0;
					PCSrc = 1;
					RegOut = 0;
					Jmp = 1;
				end
			endcase
	//		Reset = 1;
		end
	endmodule

	module MDR(clk, DAddr, DataIn, DataOut, MDRW);
		input clk;
		input [31:0] DAddr;
		input [31:0] DataIn;
		input MDRW;
		output reg [31:0] DataOut;
		reg [7:0] memory[0:127];
		always @(clk) begin
			if(MDRW==0)
				DataOut = memory[DAddr];
			else
				DataOut = 32'h00000000;
		end	
		integer i;
		initial begin
		for(i = 0; i < 128; i = i + 1)
			memory[i] <= 0;
		end

		always @(negedge clk) begin
			if(MDRW==1)
				memory[DAddr] = DataIn;
		end
	endmodule
