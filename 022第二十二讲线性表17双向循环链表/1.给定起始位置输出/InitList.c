#include "node.h"

Status InitList(DuLinklist *L){
    DuNode *p, *q;
    int i=0;

    *L=(DuLinklist)malloc(sizeof(DuNode));
    if(!(*L)){
        return ERROR;
    }

    (*L)->next=(*L)->poior=NULL;
    p=(*L);
    for(i=0; i<26;i++){
        q=(DuNode *)malloc(sizeof(DuNode));
        if(!q){
            return ERROR;
        }

        q->data=i+65;
        q->poior=p;
        q->next=p->next;
        p->next=q;

        p=q;
    }
    p->next=(*L)->next;
    (*L)->next->poior=p;

    return OK;
}