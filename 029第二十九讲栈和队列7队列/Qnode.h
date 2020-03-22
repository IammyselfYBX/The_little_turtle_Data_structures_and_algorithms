#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct QNode{
    ElemType data;
    struct QNode *next;
}QNode, *QueuePrt;