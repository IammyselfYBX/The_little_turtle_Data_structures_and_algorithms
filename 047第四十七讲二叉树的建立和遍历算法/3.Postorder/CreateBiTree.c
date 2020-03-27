#include "BiNode.h"

// 创建一棵二叉树，约定用户遵照前序遍历的方式输入数据
void CreateBiTree(BiTree *T){
    char i;
    scanf("%c", &i);

    if(' ' == i){
        *T = NULL;

    }else{
        *T = (BiTNode *)malloc(sizeof(BiTNode));
        (*T)->data = i;
        CreateBiTree(&(*T)->lchild);        
        CreateBiTree(&(*T)->rchild);        
    }
}