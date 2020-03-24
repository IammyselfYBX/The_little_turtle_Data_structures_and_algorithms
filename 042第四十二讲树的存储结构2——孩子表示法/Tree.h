#include "CTBox.h"
#include "CTNode.h"

#define MAX_TREE_SIZE 100

typedef struct Tree{
    CTBox nodes[MAX_TREE_SIZE]; //结点数组
    int r, n;                   //根的位置和结点数
}Tree;