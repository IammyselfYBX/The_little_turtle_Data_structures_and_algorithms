#include "BiThrTree.h"

// 创建一棵二叉树，约定用户遵照 前序遍历 的方式输入数据
// 习惯用 前序遍历 
void CreateBiThrTree( BiThrTree *T){
    char c;
    scanf("%c", &c);
    if( ' '== c){
        *T = NULL;
    }else{
        *T = (BiThrNode *)malloc(sizeof(BiThrNode));
        (*T)->data = c;
        (*T)->ltag=Link;
        (*T)->rtag=Link;
        CreateBiThrTree(&(*T)->lchild);
        CreateBiThrTree(&(*T)->rchild);
    }
}