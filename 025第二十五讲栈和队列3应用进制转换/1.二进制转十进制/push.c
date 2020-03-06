#include "node.h"

void push(sqStack *s, ElemType e){
    if(s->top - s->base >= s->stacksize){
        s->base=(ElemType *)realloc(s->base, (s->stacksize+STACK_INCREMENT)*sizeof(ElemType));
        if(!(s->base)){
            exit(0);
        }
    }
    *(s->top)=e;
    s->top++;
}
