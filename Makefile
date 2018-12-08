SRC=$(wildcard src/*.c)

realsoftie: $(SRC)
	gcc -o $@ $^
