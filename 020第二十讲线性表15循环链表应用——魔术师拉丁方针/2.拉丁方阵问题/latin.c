#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
 
int main ()
{
    node *head;
    head = (node*)malloc(sizeof(node));
    int n;
    printf("请输入N阶拉丁方阵的N:\n");
    scanf("%d", &n);
    node *p, *q;
    p = head;
    for(int i = 1;i <= n; i++)
    {
        q = (node *)malloc(sizeof(node));
        printf("请输入第一行第%d个数字\n",i);
        scanf("%d",&(q->data));
        p->next = q;
        p = q;
    }
    p->next = head->next;
    p = head->next;
    free(head);
    head = NULL;
 
    for(int i = 0;i < n; i++)
    {
        q = p;
        for(int j = 0;j < n; j++)
        {
            printf("%d ",q->data);
            q = q->next;
        }
        printf("\n");
        p = p->next ;
    }
    return 0;
}
