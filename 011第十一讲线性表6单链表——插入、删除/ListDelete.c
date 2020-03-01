#include <node.h>

Status ListDelete(LinkList *L, int i, ElemType *e){
    int j=1;
    LinkList p=*L, q;

    if(!(p->next) || j>i){
        return ERROR;
    }

    while (p->next && j<i){
        p = p->next;
        ++j;
    }

    q = p->next;
    *e = q->data;
    p=p->next->next;
    free(q);

    return OK;
}
