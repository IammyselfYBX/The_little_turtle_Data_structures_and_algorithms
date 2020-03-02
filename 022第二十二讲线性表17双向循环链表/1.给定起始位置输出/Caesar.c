#include "node.h"

void Caesar(DuLinklist *L, int i){
    if(i>0){
        do{
            (*L)=(*L)->next;
        }while(--i);
    }

    DuLinklist *p=L;
    (*p)=(*p)->next;
    if(i<0){
        do{
            (*p)=(*p)->poior;
        }while(++i);
        (*p)=(*p)->poior;
        L=p;
    }
}