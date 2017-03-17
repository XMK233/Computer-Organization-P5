`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:38 11/24/2015 
// Design Name: 
// Module Name:    Hazard 
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
module HSU(
	input [31:0]Instruction,
	output ResetIFID,
	output JumpToTarget,
	output Bubble
    );
	 wire Ifj;
	 assign Ifj = (~Instruction[31] & ~Instruction[30] & ~Instruction[29] & ~Instruction[28] & 
							Instruction[27] & ~Instruction[26]);
	 assign ResetIFID = Ifj === 1 ? 1 : 0;
	 assign JumpToTarget = Ifj === 1 ? 1 : 0;
	 assign Bubble = Ifj === 1 ? 1 : 0;
	 
endmodule
