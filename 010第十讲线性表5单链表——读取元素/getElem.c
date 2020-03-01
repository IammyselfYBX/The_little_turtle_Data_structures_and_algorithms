#include "node.h"

Status getElem(LinkList L, int i, ElemType *e){
    LinkList p = L->next;
    int j = i;

    if(!p || j>i){
        return ERROR;
    }

    while(p && j<i ){
        p = p->next;
        ++j;
    }

    *e = p->data;
    return OK;    
}

