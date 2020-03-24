#include <stdio.h>

typedef struct CTNode{
    int child;              //child下标
    struct CTNode *next;    //指向下一个结点
}CTNode, *ChildPtr;
