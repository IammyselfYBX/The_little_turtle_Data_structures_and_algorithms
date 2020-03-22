#include <stdio.h>
#include <stdlib.h>
#define QueueSize 100

typedef int ElemType;
typedef struct Queue{
    ElemType *base;
    int front;
    int rear;
}CycleQueue;

