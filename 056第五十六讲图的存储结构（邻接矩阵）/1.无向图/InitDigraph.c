#include "MGraph.h"

void InitDigraph(MGraph *g){
    printf("请输入顶点和边数(以空格隔开): ");
    scanf("%d%d", &(g->vexnum), &(g->edgenum));
    getchar();

    //判断是否符合逻辑，一般 n 个结点，最多有 n(n-1)/2 个边
    int n=g->vexnum;
    int temp = ((n-1)*n)/2;
    if (g->edgenum >temp)
    {
        printf("对不起，你输入的边与顶点数不匹配!!!\n");
        exit(0);
    }

    printf("请输入顶点字母: ");
    fflush(stdin);
    for(int i=0;i<g->vexnum; i++){
        scanf("%c", &(g->vex[i]));
    }
    getchar();

    //根据顶点数，初始化矩阵全为0
    for(int i=0; i<g->vexnum; i++){
        for(int j=0; j<g->vexnum; j++){
            g->edge[i][j]=0;
        }
    }

    //接收用户输入
    EdgeType weight;
    VertexType v1, v2;

    for(int i=0; i<g->edgenum; i++){
        printf("请按字母顺序(A-Z)输入 \"相邻两个结点\": ");
        scanf("%c%c", &v1, &v2);
        getchar();
        printf("%c-%c他们之间的 \"权重\": ", v1, v2);        
        scanf("%d", &weight);
        getchar();
        int m = locateVertex(g, v1);
        int n = locateVertex(g, v2);
        g->edge[m][n] = weight;
    }

    //关于对角线对称
    for(int i=0; i<g->vexnum; i++){
        for(int j=i; j<g->vexnum; j++){
            g->edge[j][i]=g->edge[i][j]; 
        }
    }
}