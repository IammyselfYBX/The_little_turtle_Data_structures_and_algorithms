#include "Qnode.h"
#include "LinkQueue.h"

void Destory(LinkQueue *q){
    while (q->front){
        q->rear = q->front->next;
        free(q->front);
        q->front = q->rear;
    }
    
}