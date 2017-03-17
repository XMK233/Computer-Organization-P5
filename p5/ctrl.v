`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:47 11/23/2015 
// Design Name: 
// Module Name:    ctrl 
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
module Controller(
    input [31:0]Instruction,
	 //
    output RegWriteD,//w
    output MemtoRegD,
    output MemWriteD,//m
    output [2:0]ALUCtrlD,//ex
    output ALUSrcD,
    output RegDstD
    //output BranchD//?
    );
	wire fcAdd, fcSub;
	wire addu, subu, ori, lui, j;
	wire [5:0]func,op;
	
	assign func = Instruction[5:0];
	assign op = Instruction[31:26];
	//
	assign fcAdd = (func[5] & ~func[4] & ~func[3] & ~func[2] & ~func[1] & func[0]);
	assign fcSub = (func[5] & ~func[4] & ~func[3] & ~func[2] & func[1] & func[0]);
	//
	assign addu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcAdd);
	assign subu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcSub);
	assign lui = (~op[5] & ~op[4] & op[3] & op[2] & op[1] & op[0]);
	assign j = (~op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & ~op[0]);
	assign ori = (~op[5] & ~op[4] & op[3] & op[2] & ~op[1] & op[0]);
	assign lw = (op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & op[0]);
	assign sw = (op[5] & ~op[4] & op[3] & ~op[2] & op[1] & op[0]);
	//
	assign RegDstD = addu | subu;
	assign ALUSrcD = ori | lui;
	assign MemtoRegD = lw; 
	assign RegWriteD = addu | subu | ori | lw | lui;
	assign MemWriteD = sw;
	assign Add = addu | sw | lw;
	assign Subtract = subu;
	assign ALUCtrlD = (Add) ? 3'b000 : 
							(Subtract)? 3'b001 : 
							(ori) ? 3'b010 : 
							(lui) ? 3'b011 : 3'bx;
	//assign BranchD = j;
endmodule
