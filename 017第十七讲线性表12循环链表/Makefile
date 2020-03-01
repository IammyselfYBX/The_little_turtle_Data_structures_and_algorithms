#source = ds_delete.c ds_init.c ds_insert.c ds_search.c ds_traverse.c
CFLAGS=-Wall -g
all:CirLL
	@echo "success!"

objfiles = ds_delete.o ds_init.o ds_insert.o ds_search.o ds_traverse.o
CirLL:$(objfiles) CirLL.c
	gcc -Wall -g $^ -o $@

clean:
	rm *.o CirLL

