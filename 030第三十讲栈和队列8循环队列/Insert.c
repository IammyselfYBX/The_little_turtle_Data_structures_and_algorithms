#include "CycleQueue.h"

void InsertQueue(CycleQueue *q, ElemType e){
    if((q->rear+1)%QueueSize == q->front){
        printf("Queue is full");
        return;
    }

    q->base[q->rear] = e;
    q->rear=(q->rear+1) % QueueSize;
}
