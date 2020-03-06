#include "stackNode.h"
#include "LinkStack.h"

Status pop(LinkStack *s, ElemType *e){
    LinkStackPtr p;
    if(stackEmpty(*s)){
        return ERROR;
    }
    *e = s->top->data;
    p=s->top;
    s->top = s->top->next;
    free(p);

    s->count --;

    return OK;
}