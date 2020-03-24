#include "CTNode.h"

typedef char ElemType;

typedef struct CTBox{
    ElemType data;          // 存放在树中的结点的数据
    int parent;             // 存放双亲的下标
    ChildPtr firstchild;    // 指向第一个孩子的指针
}CTBox;
