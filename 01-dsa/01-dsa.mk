SRCDIR=$(BASEDIR)/01-dsa

mod1:
	$(CC) $(SRCDIR)/$@.c -o $(BINDIR)/$@.elf

all: mod1
