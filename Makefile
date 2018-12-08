SRC=$(wildcard src/*.c)

realsofty: $(SRC)
	gcc -o $@ $^
