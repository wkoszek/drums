CFLAGS+= -Wall -pedantic -g -ggdb -std=c99

all: paradiddles

paradiddles: paradiddles.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf paradiddles paradiddles.dSYM
