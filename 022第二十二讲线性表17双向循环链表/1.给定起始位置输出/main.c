#include "node.h"

int main(int argc, char *argv[]){
    DuLinklist L;
    int n;

    InitList(&L);
    printf("Plaese input Integer\n");
    scanf("%d", &n);
    printf("\n");
    Caesar(&L, n);

    for(int i = 0; i<=26; i++){
        L=L->next;
        printf("%c ",L->data);
    }

    printf("\n");
    return 0;
}
