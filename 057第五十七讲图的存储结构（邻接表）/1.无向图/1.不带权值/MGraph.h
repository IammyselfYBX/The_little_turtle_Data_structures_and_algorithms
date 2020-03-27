#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VERTEX_NUM 10 //先设置一个 10 个结点的图
typedef char Elemtype;

//定义每个边表的结点
typedef struct EdgeNode{        // 边表结点
    int adjvex;                 // 存放数组下标
    struct EdgeNode *next;
}EdgeNode;

//定义 顶点表 数组每个元素的数据结构
typedef struct VertexNode{       // 顶点表结点
    Elemtype data;               // 存放数据元素
    EdgeNode *firstEdge;         //指向每个边表的指针
}VertexNode;

//比如顶点数组不能全占满，图例就是使用4个，所以需要标记一下
typedef struct GraphAdjList{
    VertexNode vexlist[MAX_VERTEX_NUM];
    int numVex, numEdges;  // 图中当前顶点数和边数, 这里面输入边的目的主要是为了检验是否符合逻辑
}GraphAdjList;

void creategraph(GraphAdjList *G);
void printDigraph(GraphAdjList *G);
