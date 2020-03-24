// 树的双亲表示法结点结构定义                                        
#define MAX_TREE_SIZE 100

typedef int ElemType;

typedef struct PTNode
{
  ElemType data;    // 结点数据
  int parent;       // 双亲位置
  int lchild;       // 左结点
  int rchild;       // 右结点
}PTNode;


