/**
 * 尾插法
*/
#include "node.h"
 
void CreateListTail(LinkList *L, int n)
{
    LinkList p, r;

    srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    r = *L;

    for(int i = 0; i<n; i++){
        p =(LinkList)malloc(sizeof(Node));
        p->data = rand()%100+1;
        r->next = p;
        p->next = NULL;
        r = p;
    }

    r->next = NULL;

}