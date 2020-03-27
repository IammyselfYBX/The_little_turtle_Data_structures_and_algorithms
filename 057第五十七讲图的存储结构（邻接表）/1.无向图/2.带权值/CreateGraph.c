#include "MGraph.h"

void creategraph(GraphAdjList *G){
    printf("请输入顶点和边数(以空格隔开): ");
    scanf("%d%d",&(G->numVex), &(G->numEdges));
    getchar();

    //判断是否符合逻辑，一般 n 个结点，最多有 n(n-1)/2 个边
    int n = G->numVex;
    int temp = ((n-1)*n)/2;
    if(G->numEdges > temp){
        printf("对不起，你输入的边与顶点数不匹配!!!\n");
        exit(0);
    }

    printf("请输入顶点字母: ");
    fflush(stdin);
    for(int i=0;i<G->numVex; i++){
        scanf("%c", &(G->vexlist[i].data));
        G->vexlist[i].firstEdge=NULL;   //初始化 first 全为 NULL;
    }
    getchar();

    for(int i=0; i<G->numVex; i++){
        printf("请输入顶点%c相关连的边(使用#结束): ", G->vexlist[i].data);

        EdgeNode *h ; //头指针h——>用于指向边表的头结点
        h=NULL;

        char v[MAX_VERTEX_NUM];
        scanf("%s", v);
        int size = strlen(v);
        for (int k = 0; k < size; k++)
        {
            char a = v[k];
            if( a == '#'){
                break;
            }
            EdgeNode *e = (EdgeNode *)malloc(sizeof(EdgeNode));
            if(e){  //申请成功
                int j=0;
                for (j = 0; j < G->numVex; j++)
                {
                    if(a == G->vexlist[j].data){
                        //头插法
                        e->adjvex = j;
                        e->weight=0;    //初始化
                        e->next=h;
                        h = e;
                    }else
                    {
                        continue;
                    }
                                            
                }                    
            }else
            {
                perror("Create EdgeNode ERROR");
            }
        }

        G->vexlist[i].firstEdge=h;
    }

    //输入权值
    for(int i=0; i<G->numVex; i++){
        EdgeNode *h=G->vexlist[i].firstEdge;
        if(0 == h->weight){
            while (h)
            {
                printf("%c-%c之间的权值为： ", G->vexlist[i].data, G->vexlist[h->adjvex].data);
                int w;
                scanf("%d", &w);
                getchar();
                h->weight=w;
                h = h->next;
            } 
        }
        printf("\n");
    }
}
