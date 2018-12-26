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
	//                                                                                1
	// Dependencies: 
	//
	// Revision: 
	// Revision 0.01 - File Created
	// Additional Comments: 
	//
	//////////////////////////////////////////////////////////////////////////////////
	 module CPU(clk, npc, immediate, IR, MEM_Data, MDR_out, DATA);

		input clk;
		output [31:0] npc;
		output [15:0] immediate;
		output [31:0] IR;
//		output [31:0] ReadData1_in;
		output [31:0] MEM_Data;
		output [31:0] MDR_out;
		output [31:0] DATA;//存储到寄存器中的数据
		
		wire [31:0] IAddr;
//		wire oput;
//		wire [31:0] IR;
		wire [5:0] ID_opcode, EX_opcode, MEM_opcode;
		wire [4:0] ID_rs, EX_rs, MEM_rs, WB_rs;
		wire [4:0] rt, rd;
		wire RegWire, ALUSrcB, MDRW, ALUM2Reg;
		wire [2:0] Aluop;
//		wire [15:0] immediate;
		wire [31:0] extend_immediate, extend_immediate_out;
//		wire [31:0] DATA;
		wire [31:0] ReadData1_in, ReadData1_out, ReadData2_in, ReadData2_out;
		wire [31:0] alu_result_in, alu_result_out;
//		wire [31:0] MDR_out;
		wire [31:0] WB_alu_out, WB_MDR_out;
//clk->cclk		
//		Caulator ca(clk, cclk);
//IF
		NPC np(IAddr,npc);
		PC p(clk, npc, IAddr);
		MAR mar(IAddr, IR);
//IF_ID
		IF_ID if_id(clk, IR, ID_opcode, ID_rs, rt, rd, immediate);
//ID	
		RegisterFile rf(clk, RegWire, WB_rs, rt, rd, DATA, ReadData1_in, ReadData2_in);
		ZeroSignExtend zse(immediate, extend_immediate);
//ID_EX
		ID_EX id_ex(clk, ID_rs, ID_opcode, extend_immediate, ReadData1_in, ReadData2_in, 
							EX_opcode, EX_rs, extend_immediate_out, ReadData1_out, ReadData2_out, Aluop, ALUSrcB);
//EX
		ALU alu(ReadData1_out, extend_immediate_out, ReadData2_out, ALUSrcB, Aluop, alu_result_in);
//EX_MEM
		EX_MEM ex_mem(clk, EX_rs, EX_opcode, alu_result_in, ReadData1_out, 
						MEM_rs, MEM_opcode, alu_result_out, MEM_Data, MDRW);
//MEM
		MDR mdr(clk, alu_result_out, MEM_Data, MDR_out, MDRW);
//MEM_WB
		MEM_WB mem_wb(clk, MEM_rs, MEM_opcode, alu_result_out, MEM_Data, WB_rs, WB_alu_out, WB_MDR_out, ALUM2Reg, RegWire);
//WB
		WB wb(WB_alu_out, WB_MDR_out, ALUM2Reg, DATA);
		
	endmodule

	module PC(clk, npc, immediate_out);
		input clk;
		input [31:0] npc;
		output reg [31:0] immediate_out;

		initial
			immediate_out = 32'b0;
		always @(posedge clk) begin
			immediate_out = npc;
		end
	endmodule

/*	module Caulator(clk, cclk);
		input clk;
		output wire cclk;
//		assign cclk = clk;
		
		reg[2:0] i = 0;
		assign cclk = i[2];
		
		initial begin
			i = 0;
		end
		always @(posedge clk) begin
				i = i + 1;
		end
	endmodule*/

	module IF_ID(clk, DATA_MAR, opcode, rs, rt, rd, immediate);
		input clk;
		input [31:0] DATA_MAR;
		output reg [5:0] opcode;
		output reg [4:0] rs;
		output reg [4:0] rt;
		output reg [4:0] rd;
		output reg [15:0] immediate;
		
		always @(posedge clk) begin
			opcode[5:0] = DATA_MAR[31:26];
			rs = DATA_MAR[25:21];
			rt = DATA_MAR[20:16];
			rd = DATA_MAR[15:11];
			immediate = DATA_MAR[15:0];
		end
	endmodule
	
	module ID_EX(clk, rs_in, opcode_in, immediate_in, ReadData1_in, ReadData2_in, opcode_out,
						rs_out, immediate_out, ReadData1_out, ReadData2_out, Aluop, ALUSrcB);
		input clk;
		input [4:0] rs_in;
		input [5:0] opcode_in;
		input [31:0] immediate_in;
		input [31:0] ReadData1_in;
		input [31:0] ReadData2_in;
		output reg [4:0] rs_out;
		output reg [5:0] opcode_out;
		output reg [31:0] immediate_out;
		output reg [31:0] ReadData1_out;
		output reg [31:0] ReadData2_out;
		output reg [2:0] Aluop;
		output reg ALUSrcB;
		
		always @(posedge clk) begin
			rs_out = rs_in;
			opcode_out = opcode_in;
			ReadData1_out = ReadData1_in;
			ReadData2_out = ReadData2_in;
			immediate_out = immediate_in;
			ALUSrcB = opcode_in==6'b000001||opcode_in==6'b000010 ? 1 : 0;
			case(opcode_in)
				6'b000010 : begin
					Aluop = 3'b000;
				end
				6'b000100 : begin
					Aluop = 3'b000;
				end
				6'b000101 : begin
					Aluop = 3'b011;
				end
				6'b000110 : begin
					Aluop = 3'b100;
				end
				6'b000111 : begin
					Aluop = 3'b101;
				end
				6'b001000 : begin
					Aluop = 3'b110;
				end
				6'b001001 : begin
					Aluop = 3'b111;
				end
			endcase
		end
	endmodule
	
	module EX_MEM(clk, rs_in, opcode_in, aluresult_in, ReadData1_in, 
						rs_out, opcode_out, aluresult_out, ReadData_out, MDRW);
		input clk;
		input [4:0] rs_in;
		input [5:0] opcode_in;
		input [31:0] aluresult_in;
		input [31:0] ReadData1_in;
		output reg [4:0] rs_out;
		output reg [5:0] opcode_out;
		output reg [31:0] aluresult_out;
		output reg [31:0] ReadData_out;
		output reg MDRW;
		
		always @(posedge clk) begin
			rs_out = rs_in;
			opcode_out = opcode_in;
			ReadData_out = ReadData1_in;
			aluresult_out = aluresult_in;
			MDRW = opcode_in==6'b000001 ? 1 : 0;
		end
	endmodule
	
	module MEM_WB(clk, rs_in, opcode, alu_in, MDR_in, rs_out, alu_out, MDR_out, ALUM2Reg, RegWire);
		input clk;
		input [4:0] rs_in;
		input [5:0] opcode;
		input [31:0] alu_in;
		input [31:0] MDR_in;
		output reg [4:0] rs_out;
		output reg RegWire;
		output reg [31:0] alu_out;
		output reg [31:0] MDR_out;
		output reg ALUM2Reg;
		
		always @(posedge clk) begin
			rs_out = rs_in;
			alu_out = alu_in;
			MDR_out = MDR_in;
			ALUM2Reg = opcode==000001 ? 1 : 0;
			RegWire = 0;
		end
	endmodule


	module NPC(pc, npc);
		input [31:0] pc;
		output reg [31:0] npc;
		always @(*)
			npc = pc + 4;
	endmodule

	module ALU(ReadData1, immediate, ReadData2, ALUSrcB, ALUOp, result);
		input [31:0] ReadData1, immediate, ReadData2;
		input ALUSrcB;
		input [2:0] ALUOp;
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
		end
	endmodule

	module MAR(IAddr, IR);
		input [31:0] IAddr;
		output reg [31:0] IR;
		
	//	reg [7:0] mem[0:127];
		reg [7:0] mem[0:32];
		initial begin
			$readmemb("MAR",mem);
		end
		
		always @(*) begin
			IR[31:24] = mem[IAddr];
			IR[23:16] = mem[IAddr+1];
			IR[15:8] = mem[IAddr+2];
			IR[7:0] = mem[IAddr+3];
		end
	endmodule

	module RegisterFile(clk, RegWire, rs, rt, rd, DATA, ReadData1, ReadData2);
		input clk, RegWire;
		input [4:0] rs, rt, rd;
		input [31:0] DATA;
		output reg [31:0] ReadData1, ReadData2;
			
		reg [31:0] register[0:31];
		
		initial begin
		    $readmemb("RF",register);
		end
		
		always @(*) begin
			ReadData1 = register[rd];
			ReadData2 = register[rt];
		end
		always @(negedge clk) begin
			if(RegWire==0 && rs && DATA)
				register[rs] = DATA;
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
		initial begin
			$readmemb("MDR", memory);
		end

		always @(negedge clk) begin
			if(MDRW==1)
				memory[DAddr] = DataIn;
		end
	endmodule
	
	module WB(alu, MDR, ALUM2Reg, DATA);
		input [31:0] alu;
		input [31:0] MDR;
		input ALUM2Reg;
		output reg [31:0] DATA;
		
		always @(*) begin
			DATA = ALUM2Reg==1 ?  MDR : alu;
		end
	endmodule
