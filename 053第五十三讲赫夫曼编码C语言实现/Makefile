.PHONY: clean all
all: main.bin
	@echo "succeed"

OBJS:= huffman.o pQueue.o 

main.bin:$(OBJS) main.cpp
	g++ $^ -o $@

clean:
	rm main.bin *.o