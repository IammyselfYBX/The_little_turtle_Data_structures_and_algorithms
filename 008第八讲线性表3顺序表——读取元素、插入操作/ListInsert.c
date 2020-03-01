#include "list.h"
#include <stdio.h>

Status ListInsert(Sqlist *L, int i, Elemtype e){
    if(0 == L->length  ){
        printf("Overflow!\n");
        return ERROR;
    }
    if( i<1 || i> L->length){
        return ERROR;
    }
    for(int j = L->length-1; j>i-1; j--){
        L->data[j+1]=L->data[j];
    }
    L->data[i-1]=e;
    L->length+=1;
    
    return OK;
}

