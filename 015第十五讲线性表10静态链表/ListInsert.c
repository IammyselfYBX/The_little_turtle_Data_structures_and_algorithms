#include "node.h"

Status ListInsert(StaticLinkList L, int i, ElemType e){
    int k = MAXSIZE-1;
    int j = Malloc_SLL(L);
    if(i<1 || i>ListLength(L)+1){
        return ERROR;
    }

    if(j){
        L[j].data=e;
        for(int l =1; l<= i-1; l++){
            k = L[k].cur;
        }
        L[j].cur = L[k].cur;
        L[k].cur=j;

        return OK;
    }

    return ERROR;
}
