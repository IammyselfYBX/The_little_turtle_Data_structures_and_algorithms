//递归法
#include <stdio.h>

int Fibonacci(int i){
    if(i<2){
        return i<1?0:1;
    }

    return Fibonacci(i-1)+Fibonacci(i-2);
}

int main(int argc, char *argv[]){
    for(int i=0; i<40; i++){
        printf("%d ", Fibonacci(i));
    }   
    printf("\n");

    return 0;
}