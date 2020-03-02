#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
    node *pHead = NULL;
    char opp=' ';
    int find=0;

    printf("------------------- 循环链表 --------------------\n\n");
    printf("-------------------------------------------------------\n\n");
    printf("1.初始化链表 \n\n2.插入结点 \n\n3.删除结点 \n\n4.返回结点位置 \n\n5.遍历链表  \n\n0.退出 \n\n请选择你的操作：");
    while(opp != '0')
	{
        scanf("%c", &opp);
        switch(opp)
		{
            case '1':
                ds_init(&pHead);
                printf("\n");
                ds_traverse(pHead);
                break;

            case '2':
                printf("输入需要插入结点的位置？");
                scanf("%d",  &find);
                ds_insert(&pHead, find);
                printf("在位置%d插入值后：\n",  find);
                ds_traverse(pHead);
                printf("\n");
                break;

            case '3':
                printf("输入需要删除的结点位置？");
                scanf("%d",  &find);
                ds_delete(&pHead, find);
                printf("删除第%d个结点后:\n",  find);
                ds_traverse(pHead);
                printf("\n");
                break;

            case '4':
                printf("你要查找倒数第几个结点的值？");
                scanf("%d",  &find);
                printf("元素%d所在位置：%d\n",  find,  ds_search(pHead, find));
                //ListTraverse(L);
                printf("\n");
                break;

            case '5':
                ds_traverse(pHead);
                printf("\n");
                break;

            case '0':
                exit(0);
        }
    }

    return 0;
}