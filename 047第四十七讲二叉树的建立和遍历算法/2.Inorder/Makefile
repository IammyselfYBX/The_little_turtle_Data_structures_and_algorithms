CFLAGS=-Wall -g 

all:main.bin
	@echo "SUCCEED"

main.bin:main.c CreateBiTree.o Inorder.o visit.o
	gcc $(CFLAGS) $^ -o $@

clean:
	rm *.o main.bin