`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:42 11/23/2015 
// Design Name: 
// Module Name:    gpr 
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
module GPR(
    input Clk,
    //input ResetReg,//Reset register
    input [4:0]RS1,
    input [4:0]RS2,
    input [4:0]WA,//write address
	 //input [31:0]PC_4,
    input [31:0]WData,// write data
    input RegWrite,// register write enable
	 /*input Ifjal,*/ 
    output [31:0]RData1,
    output [31:0]RData2
    );
	reg [31:0]data[31:0], RData1, RData2;
	integer i;
	initial begin
		for (i = 0; i<32; i = i + 1) begin
			data[i] = 32'b0;
		end
	end
	always @(negedge Clk)
		begin
			/*if (Ifjal) begin
					data[31] = PC_4;
				end*/
			if (RegWrite === 1 ) begin
				data[WA] = WData;
			end
				RData1 <= data[RS1];
				RData2 <= data[RS2];
		end
	
	//assign RData1 = data[RS1];
	//assign RData2 = data[RS2];
endmodule 

