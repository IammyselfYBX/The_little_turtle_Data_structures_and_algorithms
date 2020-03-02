#include "node.h"


Status ListInsert(DuLinklist *L, int i, ElemType e){
    int j=1;
    DuLinklist p, s;
    
    p= *L;
    if(!p || j>i){
        return ERROR;
    }

    while(p && j<i)
    {
        p=p->next;
        j++;
    }

    s = (DuLinklist)malloc(sizeof(DualNode));
    s->data=e;

    s->next=p->next;
    p->next->poior=s;
    s->poior=p;
    p->next=s;

    return OK;
}
