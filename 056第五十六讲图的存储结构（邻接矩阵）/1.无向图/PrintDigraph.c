#include "MGraph.h"

void printDigraph(MGraph *g){
    printf("----------------------------------------\n");
    printf("您输入的无向图邻接矩阵为：\n");
    for(int i=0; i<g->vexnum; i++){
        for(int j=0; j<g->vexnum; j++){
            printf("%d\t", g->edge[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
}