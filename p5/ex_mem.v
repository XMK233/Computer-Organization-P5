`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:01:51 11/24/2015 
// Design Name: 
// Module Name:    ex_mem 
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
module FR_EX_MEM(
	input Clk,
	//¿ØÖÆÐÅºÅ
	input RegWriteE,
	input MemtoRegE,
   input MemWriteE,
	//
	input [31:0]ALUResultIn,
	input [31:0]ExMidIn,
	input [4:0]ExDstIn,
	//
	output RegWriteM,
	output MemtoRegM,
	output MemWriteM,
	output [31:0]ALUResultOut,
	output [31:0]ExMidOut,
	output [4:0]ExDstOut
    );
	 reg [31:0]data1, data2;
	 reg [4:0]data3;
	 reg data4,data5,data6;
	 /*initial begin
		data1 = 0;
		data2 = 0;
		data3 = 0;
		data4 = 0;
		data5 = 0;
		data6 = 0;
	 end*/
	 
	 assign ALUResultOut = data1;
	 assign ExMidOut = data2;
	 assign ExDstOut = data3;
	 assign RegWriteM = data4;
	 assign MemtoRegM = data5;
	 assign MemWriteM = data6;
	 
	 always @(posedge Clk) begin
		data1 = ALUResultIn;
		data2 = ExMidIn;
		data3 =	ExDstIn;
		data4 = RegWriteE;
		data5 = MemtoRegE;
		data6 = MemWriteE;
	 end
endmodule
