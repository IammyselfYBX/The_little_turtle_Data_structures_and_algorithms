#include "sqnode.h"

void DestoryStack(sqStack *s){
    int len = s->stackSize;
    for(int i=0; i<len; i++){
        free(s->base);
        s->base++;
    }
    s->base= s->top=NULL;
    s->stackSize = 0;
}