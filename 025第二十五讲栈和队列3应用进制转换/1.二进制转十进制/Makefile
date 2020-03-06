CFLAGS=-Wall -g
all:main
	@echo "success!"

objfiles = init.o pop.o push.o stacklen.o
main:$(objfiles) main.c
	gcc -Wall -g -lm $^ -o $@

clean:
	rm *.o main