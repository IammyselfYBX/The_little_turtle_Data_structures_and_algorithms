#define OK 1
#define ERROR 0
#define TREU 1
#define FALSE 0
typedef int Status;

#include <stdlib.h>

typedef int ElemType;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node, *LinkList;


