#include "node.h"

void Pop(sqStack *s, ElemType *e)
{
    if( s->top == s->base )
        return;

    *e = *--(s->top);   // 将栈顶元素弹出并修改栈顶指针
}