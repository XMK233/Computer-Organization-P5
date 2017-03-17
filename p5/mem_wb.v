`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:16:23 11/24/2015 
// Design Name: 
// Module Name:    mem_wb 
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
module FR_MEM_WB(
	input Clk,
	//
	input RegWriteM,
   input MemtoRegM,
	//
	input [31:0]MemDataIn,
	input [31:0]ALUResultIn,
	input [4:0]RegisterRdIn,
	//
	output RegWriteW,
	output MemtoRegW,
	output [31:0]MemDataOut,
	output [31:0]ALUResultOut,
	output [4:0]RegsiterRdOut
    );
	 //
	reg data1, data2;
	reg [31:0]data3, data4;
	reg [4:0]data5;
	/*initial begin
		data1 = 0;
		data2 = 0;
		data3 = 32'b0;
		data4 = 32'b0;
		data5 = 5'b0;
	end*/
	//out
	assign RegWriteW = data1;
	assign MemtoRegW = data2;
	assign MemDataOut = data3;
	assign ALUResultOut = data4;
	assign RegsiterRdOut = data5;
	//in
	always @(posedge Clk) begin
		data1 = RegWriteM;
		data2 = MemtoRegM;
		data3 = MemDataIn;
		data4 = ALUResultIn;
		data5 = RegisterRdIn;
	end

endmodule
