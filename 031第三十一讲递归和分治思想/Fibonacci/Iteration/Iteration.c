//迭代法
#include <stdio.h>

int main(int argc, char *argv[]){
    int a[40]={0};
    a[0]=0;
    a[1]=1;

    for(int i=2; i<40; i++){
        a[i]=a[i-1]+a[i-2];
    }

    for(int i=0; i<40; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}