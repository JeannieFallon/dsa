mod2: SRCDIR:=$(shell pwd)/01-dsa/mod2
mod2: SRC:=$(wildcard $(SRCDIR)/*.c)
mod2:
	$(CC) $(SRC) -o $(BINDIR)/$@.elf
