#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

void CreateBiTree(BiTree *T);
void visit(char c, int level);
void InOrderTraverse(BiTree T, int level);
