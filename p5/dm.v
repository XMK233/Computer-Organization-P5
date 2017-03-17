`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:11:40 11/23/2015 
// Design Name: 
// Module Name:    dm 
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
module DM(
    input [11:2]addr,
    input [31:0]din,
    input we,//enable
    input clk,
    output [31:0]dout
    );
	 reg [31:0]dm[1023:0];
	 integer i; 
	 initial begin
		for (i = 0; i < 1024; i = i + 1 ) begin
					dm[i] <= 32'b0;
				end
	 end
	 always @(posedge clk) begin
			if (we === 1) begin
				dm[addr] = din;
			end
    end
	 assign dout = dm[addr];
endmodule
