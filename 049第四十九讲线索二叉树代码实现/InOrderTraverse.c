#include "BiThrTree.h"

// 中序遍历二叉树，非递归
void InOrderTraverse( BiThrTree T )
{
	BiThrTree p;
	p = T->lchild;

	while( p != T )
	{
		while( p->ltag == Link )
		{
			p = p->lchild;
		}
		visit(p->data);

		while( p->rtag == Thread && p->rchild != T )
		{
			p = p->rchild;
			visit(p->data);
		}
		
		p = p->rchild;
	}
}