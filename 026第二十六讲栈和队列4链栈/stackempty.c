#include "stackNode.h"
#include "LinkStack.h"

Status stackEmpty(LinkStack *s){
    if(0 == s->count){
        return TRUE;
    }
    return FALSE;
}