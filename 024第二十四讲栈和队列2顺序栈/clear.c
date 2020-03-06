//清空不是销毁
#include "sqnode.h"

void clearStack(sqStack *s){
    s->top=s->base;
}
