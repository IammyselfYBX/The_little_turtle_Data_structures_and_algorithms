#include "sqnode.h"

void pop(sqStack *s, ElemType *e){
    if(s->top == s->base){
        return;
    }
    *e = *--(s->top);
}