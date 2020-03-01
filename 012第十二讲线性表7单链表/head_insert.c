/**
 * 头插法
*/
#include "node.h"

void CreateListHead(LinkList *L, int n){
    LinkList p;

    srand(time(0));    //初始化随机种子

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;

    for(int i=0; i<n; i++){
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        p->next=(*L)->next;
        (*L)->next=p;
    }
}
