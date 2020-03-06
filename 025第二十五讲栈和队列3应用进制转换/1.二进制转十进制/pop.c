#include "node.h"

void pop(sqStack *s, ElemType *e){
    if(s->base==s->top){
        exit(0);
    }
    *e=*--(s->top);
}