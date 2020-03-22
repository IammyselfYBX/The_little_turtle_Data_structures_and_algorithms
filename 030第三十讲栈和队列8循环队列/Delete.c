#include "CycleQueue.h"

void DeleteQueue(CycleQueue *q, ElemType *e){
    if(q->front == q->rear){
        printf("Queue is empty!\n");
        return;
    }

    *e = q->base[q->front];
    q->front = (q->front+1)%QueueSize;
}