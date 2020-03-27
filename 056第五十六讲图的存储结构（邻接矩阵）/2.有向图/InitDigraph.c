#include "MGraph.h"

void InitDigraph(MGraph *g){
    printf("请输入顶点数与弧数(以空格分隔): ");
    scanf("%d%d", &(g->vexnum), &(g->arcnum));
    getchar();

    //判断是否符合逻辑，一般 n 个结点，最多有 n^2 个边
    int n=g->vexnum;
    int temp = pow(n, 2);
    if (g->arcnum >temp)
    {
        printf("对不起，你输入的边与顶点数不匹配!!!\n");
        exit(0);
    }

    printf("请输入顶点的字母: ");
    fflush(stdin);
    for(int i=0; i<g->vexnum; i++){
        scanf("%c", &(g->vex[i]));
    }
    getchar();
    
    // 根据顶点数，初始化矩阵全为 无穷大
    for(int i=0; i<g->vexnum; i++){
        for(int j=0; j<g->vexnum; j++){
            g->arc[i][j] = MAX_VALUE;
        }
    }

    //接收用户输入权重
    EdgeType weight;
    VertexType v1, v2;

    for(int i=0; i<g->arcnum; i++){
        printf("请输入 \"相邻两个结点\": ");
        scanf("%c%c", &v1, &v2);
        getchar();
        printf("%c-%c他们之间的 \"权重\": ", v1, v2);        
        scanf("%d", &weight);
        getchar();
        int m = locateVertex(g, v1);
        int n = locateVertex(g, v2);
        g->arc[m][n] = weight;
    }
}
