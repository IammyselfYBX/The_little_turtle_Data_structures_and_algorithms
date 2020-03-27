#include "BiNode.h"

// 前序遍历二叉树
void PostOrderTraverse(BiTree T, int level)
{
	if( T )
	{
		PostOrderTraverse(T->lchild, level+1);
		PostOrderTraverse(T->rchild, level+1);
		visit(T->data, level);
	}
}
