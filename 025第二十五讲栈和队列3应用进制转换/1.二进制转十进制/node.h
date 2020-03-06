#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STACK_INIT_SIZE 20
#define STACK_INCREMENT 10

typedef char ElemType;
typedef struct sqStack{
    ElemType *top;
    ElemType *base;
    int stacksize;
}sqStack;

void InitStack(sqStack *s);
void push(sqStack *s, ElemType e);
void pop(sqStack *s, ElemType *e);
int stacklen(sqStack s);

