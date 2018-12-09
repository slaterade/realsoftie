CFLAGS=-Wall -fpic
SRC=$(wildcard *.c)
INC=-I../../

module_time.so: module_time.o
	gcc -shared -o $@ $^

module_time.o: $(SRC)
	gcc -c $^ $(INC) $(CFLAGS)

