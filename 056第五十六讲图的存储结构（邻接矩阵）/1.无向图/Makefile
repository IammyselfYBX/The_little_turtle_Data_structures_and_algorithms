OBJS=InitDigraph.o  LocateVertex.o  PrintDigraph.o
CFLAGS=-Wall -g 

.PHONY: clean all
all:main.bin
	@echo "SUCCEED"

main.bin: $(OBJS) main.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm main.bin $(OBJS)