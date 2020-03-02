#include "node.h"

Status ListDelete(DuLinklist *L, int i, ElemType *e){
    int j=1;
    DuLinklist p=*L, q;

    if(!(p->next) || j>i){
        return ERROR;
    }

    while (p->next && j<i){
        p = p->next;
        ++j;
    }

    p->next = q->next;
    *e = q->data;
    q->next->poior=p;
    free(q);

    return OK;
}
