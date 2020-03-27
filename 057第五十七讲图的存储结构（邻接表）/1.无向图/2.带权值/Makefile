all:main.bin
	@echo "SUCCEED"

main.bin:CreateGraph.c main.c PrintGraph.c
	gcc -Wall -g CreateGraph.c main.c PrintGraph.c -o main.bin

clean:
	rm main.bin