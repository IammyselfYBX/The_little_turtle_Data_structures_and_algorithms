#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 10 //先设置一个 10 个结点的图
typedef char VertexType;    //顶点类型
typedef int EdgeType;       //带权边的权值类型

typedef struct MGraph
{
    VertexType vex[MAX_VERTEX_NUM];
    EdgeType edge[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
    int vexnum, edgenum;
}MGraph;

void InitDigraph(MGraph *g);
int locateVertex(MGraph *g, VertexType v);
void printDigraph(MGraph *g);

