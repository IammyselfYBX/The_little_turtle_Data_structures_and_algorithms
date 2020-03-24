#include "PTNode.h"

typedef struct
{
  PTNode nodes[MAX_TREE_SIZE];
  int r;      // 根的位置
  int n;      // 结点数目
}PTree;