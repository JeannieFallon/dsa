mod1.elf: SRCDIR:=$(shell pwd)/module1
mod1.elf: SRC:=$(wildcard $(SRCDIR)/*.c)
mod1.elf:
	$(CC) $(SRC) -o $(BINDIR)/$@
