#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef char ElemType;

typedef int ElemType;
typedef struct StackNode{
    ElemType data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;