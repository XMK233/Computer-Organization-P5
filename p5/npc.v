`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:26 11/23/2015 
// Design Name: 
// Module Name:    npc 
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
module NPC(
    input [31:0]PC,
	 input [31:0]PCID,
	 input [31:0]InstructionID,
	 input Ifj,
	 output [31:0]nPC
	 );
	 assign nPC = (Ifj === 1'b1) ? {PCID[31:28], InstructionID[25:0], 2'b00} : 
						/*(Ifj !== 1'b1 || Ifj === 1'bx ) ? */PC + 32'b100;//???????
endmodule
