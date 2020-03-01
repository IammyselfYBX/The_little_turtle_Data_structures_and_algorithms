#include "node.h"

void ds_traverse(node *pNode)
{
    node *temp;
    temp = pNode;
    printf("***********链表中的元素******************\n");

	do
	{
        printf("%4d ", temp->data);
    }while((temp = temp->next) != pNode);

	printf("\n");
}