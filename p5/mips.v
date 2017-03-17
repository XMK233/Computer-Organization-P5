`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:02 11/24/2015 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input rst
    );
	 wire [31:0]InstructionIF, npc ,pc,pcid ,InstructionID, InstructionCurrent, WData, ALUResultM, ALUResultE,
						ImmExted, OperandA, OperandB, ExMid, RData1, RData2, RData1Ex,
						RData2Ex, ExMidM, dout,Memdout,ALUResultW;
	 wire [2:0]ALUCtrlD, ALUCtrlE;
	 wire [4:0] ExDst, RtE, RsE, RdW, RdE, RdM;
	 wire [1:0] ForwardA, ForwardB;
	 wire ResetIDIF,
								  RegWriteD,//w
								  MemtoRegD,
								  MemWriteD,//m
								  ALUSrcD,
								  RegDstD,
						RegWriteE,//w
						MemtoRegE,
						MemWriteE,//m
						ALUSrcE,
						RegDstE,
						RegWriteM,
						MemtoRegM,
						MemWriteM,
						RegWriteW,
						MemtoRegW,
						JumpToTarget,
						BubbleEn;
							
							
							
	PC Pc (
			 clk, 
			 rst, 
			 npc[31:0], 
			 pc[31:0]
			 );
			 
	NPC Npc (
				pc[31:0],
				pcid[31:0],
				InstructionID[31:0], 
				JumpToTarget,
				npc[31:0]
				);		 
			 
	IM im ( 
			  pc[9:2], 
			  InstructionIF[31:0]
			  );
	FR_IF_ID if_id (
						 clk, 
						 InstructionIF[31:0], 
						 ResetIDIF,
						 pc[31:0],
						 InstructionID[31:0],
						 pcid[31:0]
						 );
	MUX_Bubble mux_bubble (
								  InstructionID[31:0],
								  BubbleEn,
								  InstructionCurrent[31:0]
								  );
	Controller controller (
								  InstructionCurrent[31:0],
								  RegWriteD,
								  //RegWriteD,//w
								  MemtoRegD,
								  MemWriteD,//m
								  ALUCtrlD[2:0],//ex
								  ALUSrcD,
								  RegDstD
								  );
	GPR gpr (
				clk,
				InstructionID[25:21],
				InstructionID[20:16],
				RdW[4:0],
				WData[31:0],
				RegWriteW,
				RData1[31:0],
				RData2[31:0]
				);
	FR_ID_EX id_ex(
						clk,
						RegWriteD,
						MemtoRegD,
						MemWriteD,//m
						ALUCtrlD[2:0],//ex
						ALUSrcD,
						RegDstD,
						RData1[31:0],
						RData2[31:0],
						InstructionID[15:0],
						InstructionID[25:21],
						InstructionID[20:16],
						InstructionID[15:11],
						
						RegWriteE,
						MemtoRegE,
						MemWriteE,//m
						ALUCtrlE[2:0],//ex
						ALUSrcE,
						RegDstE,
						RData1Ex[31:0],
						RData2Ex[31:0],
						ImmExted[31:0],
						RsE[4:0],
						RtE[4:0],
						RdE[4:0]
						);
	
	
	MUX_Operand1 mux_opr1 (
								  RData1Ex[31:0],
								  WData[31:0], 
								  ALUResultM[31:0],
								  ForwardA[1:0],
								  OperandA[31:0]
								  );
	MUX_Operand2 mux_opr2 (
								  RData2Ex[31:0],
								  WData[31:0],
								  ALUResultM[31:0],
								  ImmExted[31:0],
								  ALUSrcE,
								  ForwardB[1:0],
								  OperandB[31:0],
								  ExMid[31:0]
								  );
	ALU alu (
				OperandA[31:0],
				OperandB[31:0],
				ALUCtrlE[2:0],
				ALUResultE[31:0]
				);
	MUX_Dst mux_dst (
							RtE[4:0],
							RdE[4:0],
							RegDstE,
							
							ExDst[4:0]
							);
	FR_EX_MEM ex_mem (
							clk,
							RegWriteE,
							MemtoRegE,
							MemWriteE,
							ALUResultE[31:0],
							ExMid[31:0],
							ExDst[4:0],
							RegWriteM,
							MemtoRegM,
							MemWriteM,
							ALUResultM[31:0],
							ExMidM[31:0],
							RdM[4:0]
							);
	ForwardUnit forwardunit (
									 RsE[4:0],
									 RtE[4:0],
									 RdM[4:0],
									 RdW[4:0],
									 RegWriteM,
									 RegWriteW,
									 ForwardA[1:0],
									 ForwardB[1:0]
									 );
	DM dm (
			 ALUResultM[11:2],
			 ExMidM[31:0],
			 MemWriteM,
			 clk,
			 dout[31:0]
			 );
	FR_MEM_WB mem_wb(
					  clk,
					  RegWriteM,
					  MemtoRegM,
					  dout[31:0],
					  ALUResultM[31:0],
					  RdM[4:0],
					  RegWriteW,
					  MemtoRegW,
					  Memdout[31:0], 
					  ALUResultW[31:0],
					  RdW[4:0]				  
					  );
	//MUX_MemOrALU mux_moa ()
	MUX_MemOrALU mux_moa(
								Memdout[31:0],
								ALUResultW[31:0],
								MemtoRegW,
								WData[31:0]
								);
	HSU hsu (
				InstructionID[31:0],
				ResetIDIF,
				JumpToTarget,
				BubbleEn				
				);
	
	
endmodule
