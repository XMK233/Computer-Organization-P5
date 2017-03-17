`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:12 11/23/2015 
// Design Name: 
// Module Name:    alu 
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
module ALU(
    input [31:0]A,
    input [31:0]B,
    input [2:0]ALUCtrl,
    output [31:0]Result
    //output Zero
    );
	assign Result = (ALUCtrl === 3'b00) ? A + B : 
						 (ALUCtrl === 3'b01) ? A - B :
						 (ALUCtrl === 3'b10) ? A | B : 
						 (ALUCtrl === 3'b11) ? B<<16 : 32'bx;
	//assign Zero = (Result == 32'b0) ? 1 : 0;
endmodule
