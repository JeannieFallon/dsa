MAKEFILES=$(shell find . -name "*.mk")
include $(MAKEFILES)

BASEDIR=$(shell pwd)
BINDIR=$(BASEDIR)/bin

CC=gcc

$(shell mkdir -p ${BINDIR})

all: mod1 mod2

clean:
	rm -rf $(BINDIR)
