MAKEFILES=$(shell find . -name "*.mk")
include $(MAKEFILES)

BASEDIR=$(shell pwd)
BINDIR=$(BASEDIR)/bin

CC=gcc
CFLAGS=-g

$(shell mkdir -p ${BINDIR})

all: mod1.elf mod2.elf

clean:
	rm -rf $(BINDIR)
