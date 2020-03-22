#include <stdio.h>

void print(){
    char a;
    scanf("%c",&a);
    if( a != '#'){
        print();
    }

    if(a != '#'){
        printf("%c", a);
    }
}

int main(int argc, char *argv[]){
    fflush(stdin);
    print();

    printf("\n");

    return 0;
}
