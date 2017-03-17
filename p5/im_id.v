`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:01 11/23/2015 
// Design Name: 
// Module Name:    im_id 
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
module FR_IF_ID(
    input Clk,
    input [31:0]InstructionIn,
	 input ResetIDIF,
	 input [31:0]PC,
    output [31:0]InstructionOut,
	 output [31:0]PCID
    );
	 reg [31:0]data1 /*= 32'b0*/;
	 reg [31:0]data2/* = 32'b0*/;
	 /*initial begin
		data ;
	 end;//初始化成零了，注意
/*/
	 assign InstructionOut = data1;//读出指令数据
	 assign PCID = data2;
	 always @(posedge Clk) begin/////////////////////////////////////////////////////////////////////
		if (ResetIDIF) begin
			data1 = 32'b0;
			data2 = 32'b0;
		end
		else begin//zheli you yige wenti ???
			data1 = InstructionIn;//存入指令数据
			data2 = PC + 4;
		end
	 end
endmodule
