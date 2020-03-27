#include "MGraph.h"

void printDigraph(MGraph *g){
    printf("----------------------------------------\n");
    printf("您输入的有向图邻接矩阵为：\n");
    for(int i=0; i<g->vexnum; i++){
        for(int j=0; j<g->vexnum; j++){
            if(MAX_VALUE == g->arc[i][j]){
                printf("∞\t");
            }else{
                printf("%d\t", g->arc[i][j]);
            }
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
}