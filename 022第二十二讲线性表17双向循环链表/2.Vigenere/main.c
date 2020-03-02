#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <memory.h>

#define MAXSIZE 1000

typedef struct duplexNode{
    char alphabet;
    struct duplexNode * previous;
    struct duplexNode * next;
}DuplexNode,*DuplexLinkList;

typedef enum{
    FAILED,SUCCESS
}Status;

Status initDuplexLinkList(DuplexLinkList * duplexLinkList);
void vigenere(DuplexLinkList *duplexLinkList,char al,int n);
char * s_gets(char * s,int n);

int main(void)
{

    char str_temp[MAXSIZE] = {'\0'};
    int rand_temp[MAXSIZE] = {0};
    int j = 0;
    DuplexLinkList duplexLinkList = NULL;
    if(initDuplexLinkList(&duplexLinkList) == FAILED)
    {
        fprintf(stderr,"failed of init!");
        exit(1);
    }
    printf("请输入明文：");
    s_gets(str_temp,MAXSIZE);

    printf("随机密匙:");
    while(str_temp[j] != '\0')
    {
        rand_temp[j] = rand()%100+1;
        printf("%d ",rand_temp[j]);
        j++;
    }

    printf("\n");

    printf("密文:");
    for(int m=0;m<j;m++)
        vigenere(&duplexLinkList,str_temp[m],rand_temp[m]);

    printf("\n");

    return 0;
}


Status initDuplexLinkList(DuplexLinkList * duplexLinkList)
{
    (*duplexLinkList) = (DuplexNode *)malloc(sizeof(DuplexNode));
    (*duplexLinkList)->alphabet = '\0';
    DuplexNode *p, *q = NULL;
    p = (*duplexLinkList);
    int k;
    for(k=0;k<26;k++)
    {
        q = (DuplexNode *)malloc(sizeof(DuplexNode));

        if(!q)
        {
            fprintf(stderr,"error due to malloc!\n");
            return FAILED;
        }
        q->alphabet = (char) ('A' + k);

        q->previous = p;
        q->next = NULL;
        p->next = q;

        p = q;
    }

    q->next = (*duplexLinkList)->next;
    (*duplexLinkList)->next->previous = q;

    return SUCCESS;
}

void vigenere(DuplexLinkList *duplexLinkList,char al,int n)
{
    DuplexNode * node = (*duplexLinkList)->next; //指向A
    int i = al - 'A';

    for(int k=0;k<i+n;k++)
        node = node->next;

    printf("%c",node->alphabet);
}

char * s_gets(char * s,int n)
{
    char *st=NULL,*find=NULL;

    st = fgets(s,n,stdin);

    if(st)
    {
        find = strchr(st,'\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return st;

}
