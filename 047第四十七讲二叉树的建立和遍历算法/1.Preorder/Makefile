CFLAGS=-Wall -g 

all:main.bin
	@echo "SUCCEED"

main.bin:main.c CreateBiTree.o Preorder.o visit.o
	gcc $(CFLAGS) $^ -o $@

clean:
	rm *.o main.bin