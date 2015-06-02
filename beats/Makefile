all: beats

beats: beats.v
	iverilog beats.v -o beats

tab: tab.v
	iverilog tab.v -o tab

clean:
	rm -rf tab beats
