`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:00 11/23/2015 
// Design Name: 
// Module Name:    FR_ID_EX 
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
module FR_ID_EX(
    input Clk,
	 //控制单元的输入
	 input RegWriteD,//WB
	 input MemtoRegD,
	 input MemWriteD,//m
    input [2:0]ALUCtrlD,//Ex
    input ALUSrcD,//Ex
    input RegDstD,//WB
    //input BranchD,
	 //操作数
	 input [31:0]RData1In,
	 input [31:0]RData2In,
	 //立即数和寄存器号的输入
	 input [15:0]InstructionImm,
	 input [25:21]InstructionRs,
	 input [20:16]InstructionRt,
	 input [15:11]InstructionRd,
	 //输出
	 output RegWriteE,
	 output MemtoRegE,
	 output MemWriteE,
    output [2:0]ALUCtrlE,
    output ALUSrcE,
    output RegDstE,
	 output [31:0]RData1Out,
	 output [31:0]RData2Out,
	 output [31:0]Imm32,
	 output [4:0]Rs,
	 output [4:0]Rt,
	 output [4:0]Rd 
	 ////output BranchE,
    );
	reg data1, data2,data3, data5,data6;
	reg [2:0]data4;
	
	reg [31:0] data8, data7;
	reg [15:0]data9;
	reg [25:21]data10, data11, data12;
	
	/*initial begin
		data1 = 0;
		data2 = 0;
		data3 = 0;
		data4 = 0;
		data5 = 0;
		data6 = 0;
		data7 = 0;
		data8 = 0;
		data9 = 0;
		data10 = 0;
		data11 = 0;
		data12 = 0;
		data13 = 0;
	end*/
	//输出
	assign RegWriteE = data1;
	assign ALUCtrlE = data4;
	assign ALUSrcE = data5;
	assign RegDstE = data6;
	//assign BranchE = data13;
	assign RData1Out = data7;
	assign RData2Out = data8;
	assign Imm32 = {16'b0, data9};//???
	assign Rs = data10;
	assign Rt = data11;
	assign Rd = data12;
	assign MemtoRegE = data2;
	assign MemWriteE = data3;
	//寄存
	always @(posedge Clk) begin//store the data
		data1 = RegWriteD;
		data2 = MemtoRegD;
		data3 = MemWriteD;
		data4 = ALUCtrlD;
		data5 = ALUSrcD;
		data6 = RegDstD;
		data7 = RData1In;
		data8 = RData2In;
		data9 = InstructionImm;
		data10 = InstructionRs;
		data11 = InstructionRt;
		data12 = InstructionRd;
		//data13 = BranchD;
	end
	
endmodule
