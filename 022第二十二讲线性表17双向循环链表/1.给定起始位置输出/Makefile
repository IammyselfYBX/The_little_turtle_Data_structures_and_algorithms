CFLAGS=-Wall -g
all:main
	@echo "success!"

objfiles = Caesar.o InitList.o 
main:$(objfiles) main.c
	gcc -Wall -g $^ -o $@

clean:
	rm *.o main