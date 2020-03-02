#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
typedef int Status;
typedef char ElemType;

typedef struct DuNode{
    ElemType data;
    struct DuNode *poior, *next;
}DuNode, *DuLinklist;


Status InitList(DuLinklist *L);
void Caesar(DuLinklist *L, int i);