#include <stdio.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 20
#define STACKINCREMENT  10

typedef char ElemType;
typedef struct
{
    ElemType *base;
    ElemType *top;
    int stackSize;
}sqStack;

void InitStack(sqStack *s);
void Pop(sqStack *s, ElemType *e);
void Push(sqStack *s, ElemType e);
int StackLen(sqStack s);


