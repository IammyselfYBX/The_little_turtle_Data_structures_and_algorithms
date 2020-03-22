#include "Qnode.h"
#include "LinkQueue.h"

void DeleteQueue(LinkQueue *q, ElemType *e){
    QueuePrt p;
    if(q->front==q->rear){
        return;
    }
    p=q->front->next;
    *e=p->data;
    q->front->next=p->next;
    if( q->rear == p){  //如果队列只有一个元素——特殊处理：头指针与尾指针指向同一个位置。
        q->rear = q->front;
        free(p);
    }
}