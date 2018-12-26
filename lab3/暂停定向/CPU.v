`timescale 1ns / 1ps

module CU(input [5:0]OP, input [5:0]IFID_OP, input [5:0]IDEX_OP, input [5:0]EXMEM_OP, input [5:0]MEMWB_OP,
					output reg expansion, output reg ALUM2Reg, output reg ALUSrcB, output reg regWre, output reg DataMemRW);
	
	always @(OP or IFID_OP or IDEX_OP or EXMEM_OP or MEMWB_OP)
		begin
		case(OP)
			6'b000000 : begin expansion = 0;end
			6'b000001 : begin expansion = 0;end
			6'b000010 : begin expansion = 0;end
			6'b000011 : begin expansion = 0;end
			6'b000100 : begin expansion = 0;end
			6'b000101 : begin expansion = 0;end
			6'b000110 : begin expansion = 0;end
			6'b000111 : begin expansion = 0;end
			6'b001000 : begin expansion = 0;end
			6'b001001 : begin expansion = 1;end
			default : begin expansion = 0; end
		endcase
		
		case(IDEX_OP)
			6'b000000 : begin ALUSrcB = 0; end
			6'b000001 : begin ALUSrcB = 0; end
			6'b000010 : begin ALUSrcB = 0; end
			6'b000011 : begin ALUSrcB = 0; end
			6'b000100 : begin ALUSrcB = 0; end
			6'b000101 : begin ALUSrcB = 0; end
			6'b000110 : begin ALUSrcB = 1; end
			6'b000111 : begin ALUSrcB = 1; end
			6'b001000 : begin ALUSrcB = 0; end
			6'b001001 : begin ALUSrcB = 0; end
			default : begin ALUSrcB = 0; end
		endcase
		
		case(EXMEM_OP)
			6'b000000 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000001 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000010 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000011 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000100 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000101 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b000110 : begin ALUM2Reg = 0; DataMemRW = 1; end
			6'b000111 : begin ALUM2Reg = 1; DataMemRW = 0; end
			6'b001000 : begin ALUM2Reg = 0; DataMemRW = 0; end
			6'b001001 : begin ALUM2Reg = 0; DataMemRW = 0; end
			default : begin ALUM2Reg = 0; DataMemRW = 0;  end
		endcase
		
		case(MEMWB_OP)
			6'b000000 : begin regWre = 1; end
			6'b000001 : begin regWre = 1; end
			6'b000010 : begin regWre = 1; end
			6'b000011 : begin regWre = 1; end
			6'b000100 : begin regWre = 1; end
			6'b000101 : begin regWre = 1; end
			6'b000110 : begin regWre = 0; end
			6'b000111 : begin regWre = 1; end
			6'b001000 : begin regWre = 0; end
			6'b001001 : begin regWre = 0; end
			default : begin regWre = 0; end
		endcase
		/*
		case(opcode)
			6'b000000 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000001 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000010 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000011 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000100 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000101 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 1; DataMemRW = 0; end
			6'b000110 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 1; regWre = 0; DataMemRW = 1; end
			6'b000111 : begin expansion = 0; ALUM2Reg = 1; ALUSrcB = 1; regWre = 1; DataMemRW = 0; end
			6'b001000 : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 0; DataMemRW = 0; end
			6'b001001 : begin expansion = 1; ALUM2Reg = 0; ALUSrcB = 0; regWre = 0; DataMemRW = 0; end
			default : begin expansion = 0; ALUM2Reg = 0; ALUSrcB = 0; regWre = 0; DataMemRW = 0;  end
		endcase
		*/
		end

endmodule


module PC(input [31:0]PC, input clc, input reset,
								output reg [31:0]currentPC);

	reg flag = 0;
	//refresh the pc at posedge
	always @(posedge clc )
		begin
			if(reset == 1)
				currentPC = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
			else if(flag == 0)
				begin
					currentPC = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
					flag = 1;
				end
			else if(flag == 1)
				currentPC = PC;
		end
endmodule
	

module ALU(input [31:0]A, input [31:0]B, input [5:0]ALUop, 
							output reg zero, output reg [31:0]result);
	always @(ALUop or A or B)
		begin 
			case(ALUop)
				6'b000000 : result = A + B;
				6'b000001 : result = A - B;
				6'b000010 : result = A & B;
				6'b000011 : result = A | B;
				6'b000100 : result = A ^ B;
				6'b000101 : result = A < B;
				6'b001000 : result = A - B;
				6'b000110 : result = A + B;
				6'b000111 : result = A + B;
				default : result = 0;
			endcase
			
			//this use in the BEQ instruction, zero means sure to jump
			if(result == 0)
				zero = 1;
			else
				zero = 0;
		end
endmodule



module InstructionMemory(input [31:0]Iaddr, input flag,
										output reg [31:0]instruction);
		//store the instruction in MARcache
		reg [7:0]MARcache[0:96];
		initial
			$readmemb("MAR", MARcache);
		always @(*)
			begin
				if(flag == 0)
					begin
						instruction[7:0] = MARcache[Iaddr];
						instruction[15:8] = MARcache[Iaddr + 1];
						instruction[23:16] = MARcache[Iaddr + 2];
						instruction[31:24] = MARcache[Iaddr + 3];
					end
				else
					instruction = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
			end
endmodule


module DataMemoey(input [31:0]DataAddr, input [31:0]DataInput, input isWrite, input clc, 
								output reg [31:0]memoryValue, output reg led);
	reg [31:0]MDRcache[0:64];
	initial
			$readmemh("MDR", MDRcache);
			
	//store the data as byte, so 32 bits need 4 operations.
	always @(DataAddr or MDRcache)
		begin
			begin
				memoryValue = MDRcache[DataAddr];
			end
		end
	
	//at the negedge write the data
	always @(negedge clc)
		begin
			led = 0;
			if(isWrite == 1)
				begin
					MDRcache[DataAddr] = DataInput;
					led = 1;
				end
		end
endmodule


module RegisterFile(input [4:0]ri, input [4:0]rj, input [4:0]rk, input [5:0]opcode, input [31:0]WriteData, input isWrite, input clc,input[4:0]writeReg, 
							output reg [31:0]data1, output reg [31:0]data2, output reg constant);
	reg [31:0]registers[0:31];
	//init the registers from Regfiles document
	initial
		$readmemb("RF", registers);
		
	always @(*)
		begin
			if(opcode == 6'b001000 || opcode == 6'b000110)
				data2 = registers[ri];
			else
				data2 = registers[rk];
				
				
			data1 = registers[rj];
		end
		
	//at the negedge write data
	always @(negedge clc)
		begin
			constant = 0;
			if(isWrite ==1)
				begin
					registers[writeReg] = WriteData;
					constant = 1;
				end
		end
endmodule

module Control(input clc, input [31:0] addr, input [31:0]ALUInputFirst, input [31:0]ALUInputSecond, input [31:0]result, input [31:0]registerWriteData,
						output reg [31:0]Npc,
						output reg [31:0]instruction, 
						output reg [31:0]IFID_instruction, 
						output reg [31:0]IDEX_instruction, output reg [31:0]IDEX_ALUInputFirst,output reg [31:0]IDEX_ALUInputSecond,
						output reg [31:0]EXMEM_instruction, output reg [31:0]EXMEM_result, output reg [31:0]EXMEM_ALUInputSecond,
						output reg [31:0]MEMWB_instruction, output reg [31:0]MEMWB_registerWriteData);
						
	reg [31:0]IFID;			//instruction
	reg [95:0]IDEX;			//instruction ALUInputSecond ALUInputFirst
	reg [95:0]EXMEM;			//instruction result ALUInputSecond
	reg [63:0]MEMWB;			//instruction registerWriteData
	reg flag = 0;				//flag=1暂停
	reg redirection_one = 0;
	reg redirection_two = 0;
	reg flag2 = 0;
	
	reg [31:0]redirection_Firstreg;
	reg [31:0]redirection_Secondreg;
	
	wire [31:0]current_instruction;
	InstructionMemory instructionmemory(addr, flag, current_instruction);
	
	always@(*)
		begin
			instruction = current_instruction;
			if(flag == 1)
				Npc = addr;
			else
				Npc = addr + 4;
		end
	
	always @(negedge clc)
		begin
			
			flag2 = 0;
			if((MEMWB[57:53] == IFID[25:21] ||  MEMWB[57:53] == IFID[20:16]) && MEMWB[63:58] == 6'b000111)//第一条指令和第三条指令存在冲突，重定向
				begin IDEX[31:0] = MEMWB[31:0];flag2=1;end
			
			MEMWB[31:0] = registerWriteData;
			MEMWB[63:32] = EXMEM[95:64];
			
			
			
			if(flag != 0)
				begin
					EXMEM[31:0] = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
					EXMEM[63:32] = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
					EXMEM[95:64] = 32'b0000_0000_0000_0000_0000_0000_0000_0000;
					if(redirection_one == 1)
						IDEX[31:0] = redirection_Firstreg;
					if(redirection_two == 1)
						IDEX[63:32] = redirection_Secondreg;
				end
			
			if(flag == 0)
				begin
					EXMEM[31:0] = IDEX[63:32];
					EXMEM[63:32] = result;
					EXMEM[95:64] = IDEX[95:64];
				//	if(flag2!=1)
						IDEX[31:0] = ALUInputFirst;
					IDEX[63:32] = ALUInputSecond;
					IDEX[95:64] = IFID;
			
					IFID = instruction;
				end
		end
	
	always @(posedge clc)
		begin
			redirection_two = 0;
			redirection_one = 0;
			flag = 0;
			//  IF/ID output
			//IFID_instruction = IFID;
			
			// ID/EX output
			//IDEX_ALUInputFirst = IDEX[31:0];
			//IDEX_ALUInputSecond = IDEX[63:32];
			//IDEX_instruction = IDEX[95:64];
			
			
			// EX/MEM output
			EXMEM_ALUInputSecond = EXMEM[31:0];
			EXMEM_result = EXMEM[63:32];
			EXMEM_instruction = EXMEM[95:64];
			
			// MEM/WB output
			MEMWB_registerWriteData = MEMWB[31:0];
			MEMWB_instruction = MEMWB[63:32];
			
			if(EXMEM_instruction[31:26]>=0 && EXMEM_instruction[31:26]<=5 && IDEX[95:90]>=0 && IDEX[95:90] <= 7)//连续两条指令
				begin

					if(EXMEM_instruction[25:21] == IDEX[84:80]  && IDEX[95:90]>=0 && IDEX[95:90] <= 7)//RAW
						begin redirection_one = 1; IDEX_ALUInputFirst = EXMEM[63:32]; /*IDEX_ALUInputSecond = IDEX[63:32];*/ end
						
					if(EXMEM_instruction[25:21] == IDEX[79:75] && IDEX[95:90]>=0 && IDEX[95:90] <= 5)//RAW
						begin redirection_two = 1; IDEX_ALUInputSecond = EXMEM[63:32]; /*IDEX_ALUInputFirst = IDEX[31:0];*/ end
						
					if(EXMEM_instruction[25:21] == IDEX[89:85] && IDEX[95:90]>=6 && IDEX[95:90] <= 7)//WAW
						begin redirection_two = 1; IDEX_ALUInputSecond = EXMEM[63:32]; /*IDEX_ALUInputFirst = IDEX[31:0];*/ end
					
					/*else
						begin IDEX_ALUInputFirst = IDEX[31:0]; IDEX_ALUInputSecond = IDEX[63:32]; end
					*/
				end
			
			if((MEMWB_instruction[31:26]>=0 && MEMWB_instruction[31:26]<=5 || MEMWB_instruction[31:26]==6'b000111)
																						&&IDEX[95:90]>=0 && IDEX[95:90] <= 7)//间隔一条指令但是中间没有气泡
				begin

					if(MEMWB_instruction[25:21] == IDEX[84:80] && IDEX[95:90]>=0 && IDEX[95:90]<=7)//RAW
						begin redirection_one = 1; IDEX_ALUInputFirst = MEMWB[31:0]; /*IDEX_ALUInputSecond = IDEX[63:32];*/ end
						
					if(MEMWB_instruction[25:21] == IDEX[79:75] && IDEX[95:90]>=0 && IDEX[95:90]<=5)//RAW
						begin redirection_two = 1; IDEX_ALUInputSecond = MEMWB[31:0]; /*IDEX_ALUInputFirst = IDEX[31:0];*/ end
						
					if(MEMWB_instruction[25:21] == IDEX[89:85] && IDEX[95:90]>=6 && IDEX[95:90]<= 7)//WAW
						begin redirection_two = 1; IDEX_ALUInputSecond = MEMWB[31:0]; /*IDEX_ALUInputFirst = IDEX[31:0];*/ end
					
					/*
					else
						begin IDEX_ALUInputFirst = IDEX[31:0]; IDEX_ALUInputSecond = IDEX[63:32]; end
					*/
				end
				
			/*if(MEMWB_instruction[31:26]==6'b000111 && IDEX_instruction[31:26]>=0 && IDEX_instruction[31:26] <= 7)
				begin
					redirection = 1;
					if(MEMWB_instruction[25:21] == IDEX_instruction[20:16])
						begin IDEX_ALUInputFirst = MEMWB[31:0]; IDEX_ALUInputSecond = IDEX[63:32]; end
					else if(MEMWB_instruction[25:21] == IDEX_instruction[15:11])
						begin IDEX_ALUInputSecond = MEMWB[31:0];IDEX_ALUInputFirst = IDEX[31:0]; end
					else
						begin IDEX_ALUInputFirst = IDEX[31:0]; IDEX_ALUInputSecond = IDEX[63:32]; end
				end
			*/
			if(EXMEM_instruction[31:26]==7 && IDEX[95:90]>=0 && IDEX[95:90] <= 7)//暂停  
				begin
				
					if(EXMEM_instruction[25:21] == IDEX[84:80] 
									|| (EXMEM_instruction[25:21] == IDEX[79:75] && IDEX[95:90]>=0 && IDEX[95:90] <= 5)
									|| (EXMEM_instruction[25:21] == IDEX[89:85] && IDEX[95:90] == 6))
						begin
							flag = 1;
							//instruction = 32'b1111_1111_1111_1111_1111_1111_1111_1111;
							IFID_instruction = 32'b1111_1111_1111_1111_1111_1111_1111_1111;
							IDEX_instruction = 32'b1111_1111_1111_1111_1111_1111_1111_1111;
							
							if(redirection_one == 1)
								redirection_Firstreg = IDEX_ALUInputFirst;
							if(redirection_two == 1)
								redirection_Secondreg = IDEX_ALUInputSecond;
								
							IDEX_ALUInputFirst = 32'b1111_1111_1111_1111_1111_1111_1111_1111;
							IDEX_ALUInputSecond = 32'b1111_1111_1111_1111_1111_1111_1111_1111;
						end
				end
				
			if(redirection_one == 1 && redirection_two == 0 && flag == 0)
				begin
					IDEX_ALUInputSecond = IDEX[63:32];
					IFID_instruction = IFID;
					IDEX_instruction = IDEX[95:64];
				end
				
			if(redirection_two == 1 && redirection_one == 0 && flag == 0)
				begin
					IDEX_ALUInputFirst = IDEX[31:0];
					IFID_instruction = IFID;
					IDEX_instruction = IDEX[95:64];
				end
			
			if(redirection_one == 0 && redirection_two == 0 && flag == 0)
				begin
					IDEX_ALUInputFirst = IDEX[31:0];
					IDEX_ALUInputSecond = IDEX[63:32];
					IFID_instruction = IFID;
					IDEX_instruction = IDEX[95:64];
				end
			
			if(redirection_one == 1 && redirection_two == 1 && flag == 0)
				begin
					IFID_instruction = IFID;
					IDEX_instruction = IDEX[95:64];
				end
				
		end

endmodule
 

module WIN(input clc, input reset, 
			output MDRWrite, output zero, output writeyes);
			
	wire [31:0]addr;
	wire [31:0]addr_should;
	wire [31:0]count;
	wire [31:0]instruction;
	wire [31:0]Npc;
	wire [31:0]registerWriteData;
	wire [31:0]A;
	wire [31:0]B;
	wire [4:0]ri;
	wire [4:0]rj;
	wire [4:0]rk;
	wire [4:0]writeReg;
	wire [31:0]ALUInputFirst;
	wire [31:0]ALUInputSecond;
	wire [31:0]result;
	wire [5:0]ALUop;
	wire [31:0]BEQExp;
	wire [31:0]BEQDes;
	wire [31:0]JumpDes;
	wire [31:0]Next;
	wire [31:0]memoryValue;
	wire [31:0]WD;
	wire [5:0]led;
	wire ALUSrcB;
	wire RegWre;
	wire DataMemRW;
	wire expansion;
	wire ALUM2Reg;
	wire flag;
	
	wire [31:0]IFID_instruction;
	
	wire [31:0]IDEX_instruction;
	wire [31:0]IDEX_ALUInputFirst;
	wire [31:0]IDEX_ALUInputSecond;
	
	wire [31:0]EXMEM_instruction;
	wire [31:0]EXMEM_result;
	wire [31:0]EXMEM_ALUInputSecond;
	
	wire [31:0]MEMWB_instruction;
	wire [31:0]MEMWB_registerWriteData;


	PC pc(count, clc, reset, addr);
	//InstructionMemory instructionmemory(addr, flag, instruction);
	CU cu(instruction[31:26], IFID_instruction[31:26],IDEX_instruction[31:26], EXMEM_instruction[31:26], MEMWB_instruction[31:26], expansion, ALUM2Reg, ALUSrcB, RegWre, DataMemRW);
	RegisterFile rf(ri, rj, rk, IFID_instruction[31:26], MEMWB_registerWriteData, RegWre, clc, writeReg, ALUInputFirst, ALUInputSecond, writeyes);
	ALU alu(A, B, ALUop, zero, result);
	DataMemoey datamemoey(EXMEM_result, EXMEM_ALUInputSecond, DataMemRW, clc, memoryValue, MDRWrite);
	
	
	Control c(clc, addr, ALUInputFirst, ALUInputSecond, result, registerWriteData, 
				   Npc, instruction, IFID_instruction, IDEX_instruction, IDEX_ALUInputFirst, IDEX_ALUInputSecond, EXMEM_instruction, EXMEM_result, EXMEM_ALUInputSecond,
					MEMWB_instruction, MEMWB_registerWriteData);
	
	
	//assign Npc = addr + 4;
	assign JumpDes[1:0] = 2'b00;
	assign JumpDes[27:2] = instruction[25:0];
	assign JumpDes[31:28] = Npc[31:28];
	assign BEQExp = {{16{IDEX_instruction[15]}}, IDEX_instruction[15:0]};
	assign BEQDes = Npc + (BEQExp<<2);
	assign Next = (zero && (instruction[31:26] == 6'b001000)) ? BEQDes : Npc;
	
	assign ri = IFID_instruction[25:21];
	assign rj = IFID_instruction[20:16];
	assign rk = IFID_instruction[15:11];
	assign ALUop = IDEX_instruction[31:26];
	assign writeReg = MEMWB_instruction[25:21];
	
	assign B = ALUSrcB ? BEQExp : IDEX_ALUInputSecond;
	assign A = IDEX_ALUInputFirst;
	
	assign count = expansion ? JumpDes : Next;
	assign registerWriteData = ALUM2Reg ? memoryValue : EXMEM_result;

endmodule
