`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:43 11/24/2015 
// Design Name: 
// Module Name:    ForwardUnit 
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
module ForwardUnit(
    input [4:0]RsE,
    input [4:0]RtE,
    input [4:0]RdM,
    input [4:0]RdW,
    input RegWriteM,
    input RegWriteW,
    output [1:0]ForwardA,
    output [1:0]ForwardB
    );
	 //reg [1:0]ForwardA, ForwardB;
	 assign ForwardA = (RegWriteM === 1 && (RdM !== 0) && (RdM === RsE)) ? 2'b10 :
							 (RegWriteW === 1 && (RdW !== 0) /*&& ~(RegWriteM === 1 && (RdM !== 0) && (RdM !== RsE))*/ && (RdW === RsE)) ? 2'b01 : 2'b00;
	 assign ForwardB = (RegWriteM === 1 && (RdM !== 0) && (RdM === RtE)) ? 2'b10 : 
							 (RegWriteW === 1 && (RdW !== 0) /*&& ~(RegWriteM === 1 && (RdM !== 0) && (RdM !== RtE))*/ && (RdW === RtE)) ? 2'b01 : 2'b00;
	 /*always @(*) begin 
		if (RegWriteM && (RdM != 0) && (RdM == RsE)) begin
			ForwardA = 10;
		end
		if (RegWriteM && (RdM != 0) && (RdM == RtE)) begin
			ForwardB = 10;
		end
		
		if (RegWriteW && (RdW != 0) && ~(RegWriteM && (RdM != 0) && (RdM != RsE)) && (RdW == RsE)) begin
			ForwardA = 01;
		end
		if (RegWriteW && (RdW != 0) && ~(RegWriteM && (RdM != 0) && (RdM != RtE)) && (RdW == RtE)) begin
			ForwardB = 01;
		end
		
 	 end*/

endmodule
