#include "node.h"

void InitStack(sqStack *s){
    s->base=(ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
    if(!s->base){
        exit(0);
    }
    s->top = s->base;
    s->stacksize = STACK_INIT_SIZE;
}


