#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 20
#define STACKINCREMENT  10
#define MAXBUFFER       10

typedef double ElemType;
typedef struct
{
    ElemType *base;
    ElemType *top;
    int stackSize;
}sqStack;

void InitStack(sqStack *s);
void Push(sqStack *s, ElemType e);
void Pop(sqStack *s, ElemType *e);
int StackLen(sqStack s);