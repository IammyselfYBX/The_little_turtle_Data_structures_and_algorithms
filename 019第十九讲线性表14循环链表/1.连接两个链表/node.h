#include <stdio.h>
#include <stdlib.h>

/*链表存储结构的定义*/
typedef struct CLinkList
{
    int data;
    struct CLinkList *next;
}node, *LinkList;
