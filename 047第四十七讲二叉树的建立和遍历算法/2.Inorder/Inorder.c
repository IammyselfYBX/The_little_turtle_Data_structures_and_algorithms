#include "BiNode.h"

// 前序遍历二叉树
void InOrderTraverse(BiTree T, int level)
{
	if( T )
	{
		InOrderTraverse(T->lchild, level+1);
		visit(T->data, level);
		InOrderTraverse(T->rchild, level+1);
	}
}
