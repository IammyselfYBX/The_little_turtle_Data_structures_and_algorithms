#define OK 1
#define ERROR 0
#define TREU 1
#define FALSE 0
typedef int Status;   /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType; /* ElemType类型根据实际情况而定，这里假设为int */

#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node, *LinkList;


