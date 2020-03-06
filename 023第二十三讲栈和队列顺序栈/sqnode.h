#define MAXSIZE 1000
#define OK 1
#define ERROR 0
#define TREU 1
#define FALSE 0
typedef int Status;

#include <stdlib.h>
#include <stdio.h>

typedef int ElemType;

typedef struct sqStack{
    ElemType *base;
    ElemType *top;
    int stackSize;
}sqStack;
