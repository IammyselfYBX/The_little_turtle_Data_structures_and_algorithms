#include "CycleQueue.h"

void Init(CycleQueue *q){
    q->base = (ElemType *)malloc(sizeof(ElemType));

    if(!q->base){
        exit(0);
    }
    q->front = q->rear=0;
}