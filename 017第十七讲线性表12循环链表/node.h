#include <stdio.h>
#include <stdlib.h>

/*链表存储结构的定义*/
typedef struct CLinkList
{
    int data;
    struct CLinkList *next;
}node;

void ds_delete(node **pNode, int i);    /*删除结点*/
void ds_init(node **pNode);             /*初始化循环链表*/
void ds_insert(node **pNode , int i);   /*插入结点*/
int ds_search(node *pNode, int elem);   /*返回结点所在位置*/
void ds_traverse(node *pNode);          /*遍历*/