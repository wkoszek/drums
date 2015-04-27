module beats();
reg[3:0]	left_r = 4'd0;
reg[3:0]	right_r = 4'd0;
wire[7:0]	bar;
wire[15:0]	barx2;
wire		one, two, three, four;

integer		i;

initial begin
	for (i = 0; i < 4'hf; i = i + 1) begin
		left_r[3:0] = i;
		right_r[3:0] = ~left_r;
		$display("%d: %b %b", i, bar, barx2);
	end
end
assign bar[7:0] = { left_r[3:0], right_r[3:0] };
assign barx2[15:0] = { left_r[3:0], right_r[3:0], left_r[3:0], right_r[3:0] };

assign { one, two, three, four} = { left[3:0] };

endmodule
