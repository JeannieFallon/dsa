mod2.elf: SRCDIR:=$(shell pwd)/module2
mod2.elf: SRC:=$(wildcard $(SRCDIR)/*.c)
mod2.elf:
	$(CC) $(SRC) -o $(BINDIR)/$@
