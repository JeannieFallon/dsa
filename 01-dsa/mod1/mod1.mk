mod1: SRCDIR:=$(shell pwd)/01-dsa/mod1
mod1: SRC:=$(wildcard $(SRCDIR)/*.c)
mod1:
	$(CC) $(SRC) -o $(BINDIR)/$@.elf
