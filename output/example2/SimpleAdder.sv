// Generated by CIRCT firtool-1.62.1
module SimpleAdder(
  input        clock,
               reset,
  input  [7:0] io_a,
               io_b,
  output [7:0] io_sum,
  output       io_carry
);

  wire [8:0] sum = {1'h0, io_a} + {1'h0, io_b};
  assign io_sum = sum[7:0];
  assign io_carry = sum[8];
endmodule

