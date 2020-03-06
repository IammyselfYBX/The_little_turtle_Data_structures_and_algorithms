#include "node.h"

int main(int argc, char *argv[]){
    ElemType c;
    sqStack s;
    int len = 0, sum =0;

    InitStack(&s);
    fflush(stdin);

    printf("Please input binary, '#' is end\n");
    scanf("%c", &c);
    while (c != '#')
    {
        push(&s, c);
        scanf("%c", &c); 
    }
    
    len=stacklen(s);
    printf("The current capacity of the stack: %d\n", len);

    for(int i=0; i<len; i++){
        pop(&s, &c);
        sum = sum + (c-48) * pow(2, i);
    }

    printf("Convert to decimal number: %d\n", sum);

    return 0;
}
