`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:28:56 11/24/2015
// Design Name:   mips
// Module Name:   G:/ISE Files/p5/test/test.v
// Project Name:  p5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		clk = 0;
		rst = 1;
		#3;
		rst = 0;
	end
	
	always begin
		clk = ~clk;
		#10;
	end 
      
endmodule

