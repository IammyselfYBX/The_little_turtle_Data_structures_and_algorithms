#include "MGraph.h"

void printDigraph(GraphAdjList *G){
    printf("----------------------------------------\n");
    printf("您输入的无向图邻接表为：\n");
    for(int i=0; i<G->numVex; i++){
        printf("%c的边有：", G->vexlist[i].data);

        EdgeNode *h=G->vexlist[i].firstEdge;
        while (h)
        {
            printf("%c", G->vexlist[h->adjvex].data);
            h = h->next;
        } 
        printf("\n");
    }
    printf("----------------------------------------\n");
}
