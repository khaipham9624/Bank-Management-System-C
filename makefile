.PHONY: all
OBJECTDIR=object
BINDIR=
main: main.o
	gcc -o main main.o -lpq

main.o: main.c
	gcc -c main.c