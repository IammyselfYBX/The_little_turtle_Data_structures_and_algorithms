#include "BiNode.h"

// 前序遍历二叉树
void PreOrderTraverse(BiTree T, int level)
{
	if( T )
	{
		visit(T->data, level);
		PreOrderTraverse(T->lchild, level+1);
		PreOrderTraverse(T->rchild, level+1);
	}
}
