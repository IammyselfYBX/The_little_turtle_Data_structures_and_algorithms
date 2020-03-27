#include "BiNode.h"

int main()
{
	int level = 1;
	BiTree T = NULL;

	printf("请根据先序遍历输入节点(空结点使用' '代替)\n");
	CreateBiTree(&T);
	printf("Postoreder: \n");
	PostOrderTraverse(T, level);

	return 0;
}