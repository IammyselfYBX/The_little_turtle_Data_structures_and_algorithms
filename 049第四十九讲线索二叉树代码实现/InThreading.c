#include "BiThrTree.h"

// 中序遍历线索化
void InThreading(BiThrTree T)
{
	if( T )
	{
		InThreading( T->lchild );		// 递归左孩子线索化

		if( !T->lchild )	// 如果该结点没有左孩子，设置ltag为Thread，并把lchild指向刚刚访问的结点。
		{
			T->ltag = Thread;
			T->lchild = pre;
		}

		if( !pre->rchild )
		{
			pre->rtag = Thread;
			pre->rchild = T;
		}

		pre = T;

		InThreading( T->rchild );		// 递归右孩子线索化
	}
}