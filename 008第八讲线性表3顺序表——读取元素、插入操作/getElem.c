#include "list.h"

Status GetElem(Sqlist L, int i, Elemtype *e){
    if(0 == L.length || i<1 || i>L.length ){
        return ERROR;
    }
    *e = L.data[i-1];
    
    return OK;
}

