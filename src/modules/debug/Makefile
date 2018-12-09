CFLAGS=-Wall -fpic
SRC=$(wildcard *.c)
INC=-I../../
OUTDIR=../../../bin

$(OUTDIR)/module_debug.so: module_debug.o
	gcc -shared -o $@ $^

module_debug.o: $(SRC)
	gcc -c $^ $(INC) $(CFLAGS)

