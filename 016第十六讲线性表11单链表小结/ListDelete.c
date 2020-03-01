/**
 * 删除结点
*/

#include "node.h"

Status ListDelete(StaticLinkList L, int i)
{
    int j, k;

    if( i<1 || i>ListLength(L) )
    {
        return ERROR;
    }

    k = MAXSIZE - 1;

    for( j=1; j <= i-1; j++ )
    {
        k = L[k].cur;    // k1 = 1, k2 = 5
    }

    j = L[k].cur;        // j = 2
    L[k].cur = L[j].cur;

    Free_SLL(L, j);

    return OK;
}

/* 将下标为k的空闲结点收回备用链表 */
void Free_SLL(StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;
    space[0].cur = k;
}


