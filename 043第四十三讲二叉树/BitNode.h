typedef int ElemType;

typedef struct BitNode{
    ElemType data;
    struct BitNode *lchild, *rchild;
}BitNode, *BitTree;