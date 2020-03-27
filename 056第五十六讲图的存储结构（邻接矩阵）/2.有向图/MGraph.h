#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_VALUE 65535
#define MAX_VERTEX_NUM 10
typedef char VertexType;    //顶点类型
typedef int EdgeType;       //带权边的权值类型


typedef struct MGraph
{
    VertexType vex[MAX_VERTEX_NUM];
    EdgeType arc[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
    int vexnum, arcnum;
}MGraph;

void InitDigraph(MGraph *g);
int locateVertex(MGraph *g, char v);
void printDigraph(MGraph *g);