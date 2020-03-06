CFLAGS=-Wall -g
all:main.bin
	@echo "success!"

objfiles = Init.o pop.o push.o stacklen.o
main.bin:$(objfiles) RPN.c
	gcc -Wall -g -lm $^ -o $@

clean:
	rm *.o main.bin

debug:
	gdb -q main.bin