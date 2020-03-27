#include "MGraph.h"

void printDigraph(GraphAdjList *G){
    printf("----------------------------------------\n");
    printf("您输入的无向图邻接表为：\n");
    for(int i=0; i<G->numVex; i++){
        printf("%c的边有：\n", G->vexlist[i].data);

        EdgeNode *h=G->vexlist[i].firstEdge;
        while (h)
        {
            printf("\t\t%c ——>权值：%d\n", G->vexlist[h->adjvex].data, h->weight);
            h = h->next;
        } 
        printf("\n");
    }
    printf("----------------------------------------\n");
}
