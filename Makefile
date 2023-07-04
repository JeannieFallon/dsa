include 01-dsa/01-dsa.mk

BASEDIR=$(shell pwd)
BINDIR=$(BASEDIR)/bin

CC=gcc

$(shell mkdir -p ${BINDIR})

export BASEDIR

clean:
	rm -rf $(BINDIR)
