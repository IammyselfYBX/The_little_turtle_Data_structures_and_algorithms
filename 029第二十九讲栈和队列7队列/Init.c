#include "Qnode.h"
#include "LinkQueue.h"

void InsertQueue(LinkQueue *q, ElemType e){
    QueuePrt p;
    p = (QueuePrt)malloc(sizeof(QNode));
    if( p == NULL){
        exit(0);
    }
    p->data = e;
    p->next = NULL;
    q->rear->next = p;
    q->rear = p;
}