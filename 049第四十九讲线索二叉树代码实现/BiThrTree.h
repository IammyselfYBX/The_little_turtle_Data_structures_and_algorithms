#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
// 线索存储标志位
// Link(0)：表示指向左右孩子的指针
// Thread(1)：表示指向前驱后继的线索
typedef enum {Link, Thread} PointerTag;

typedef struct BiThrNode{
    ElemType data;
    PointerTag ltag, rtag;
    struct BiThrNode *lchild, *rchild;
}BiThrNode, *BiThrTree;

//全局变量，始终指向刚刚访问过的结点
BiThrTree pre;

void CreateBiThrTree( BiThrTree *T);
void InThreading(BiThrTree T);
void InOrderThreading( BiThrTree *p, BiThrTree T);
void visit( char c );
void InOrderTraverse(BiThrTree T);
