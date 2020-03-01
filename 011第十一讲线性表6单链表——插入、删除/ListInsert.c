#include "node.h"


Status ListInsert(LinkList *L, int i, ElemType e){
    int j=1;
    LinkList p, s;
    
    p= *L;
    if(!p || j>i){
        return ERROR;
    }

    while(p && j<i)
    {
        p=p->next;
        j++;
    }

    s = (LinkList)malloc(sizeof(Node));
    s->data=e;

    s->next= p->next;
    p->next=s;

    return OK;
}
