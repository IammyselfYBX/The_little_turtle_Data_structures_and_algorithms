#include "sqnode.h"

#define STACK_INIT_SIZE 100
void initstack(sqStack *s){
    s->base=(ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
    if(!s->base){
        exit(0);
    }
    s->top = s->base;       //最开始栈顶就是栈底
    s->stackSize = STACK_INIT_SIZE;
}
