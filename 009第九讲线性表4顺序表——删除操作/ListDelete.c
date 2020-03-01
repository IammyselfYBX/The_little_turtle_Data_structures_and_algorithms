#include "list.h"
#include <stdio.h>

Status ListDelete(Sqlist *L, int i, Elemtype *e){
    if(0 == L->length){
        printf("The List is Empty\n");
        return ERROR;
    }
    if(i<1||i>L->length){
        printf("i is wrong!\n");
        return ERROR;
    }

    *e = L->data[i-1];

    if(i<L->length){
        for(int j=i-1; j<= L->length; j++){
            L->data[j]=L->data[j+1];
        }
        L->length--;
    }

    return OK;
}

