CFLAGS = -Wall -g

all:main.bin
	@echo "SUCCEED"

OBJS = CreateBiThrTree.o InOrderThreading.o  InOrderTraverse.o  InThreading.o  visit.o

# $@——目标文件、$<——第一个依赖文件、$^——全部依赖文件
main.bin: main.c $(OBJS) 
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean cleanobj
cleanobj:
	rm $(OBJS)

clean:
	rm $(OBJS) main.bin
