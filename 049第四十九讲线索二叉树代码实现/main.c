#include "BiThrTree.h"

int main()
{
    BiThrTree P, T = NULL;  //P是头指针， T是根结点
    printf("请按照前序遍历的方式输入一刻二叉树，子结点空用' '表示： ");
    CreateBiThrTree( &T);
    InOrderThreading(&P, T);
    printf("中序遍历输出结果为: ");
    InOrderTraverse( P );
	printf("\n");

    return 0;
}