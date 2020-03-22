#include <stdio.h>
int factorial(int i){
    if(0 == i){
        return 1;
    }

    return i*factorial(i-1);
}

int main(int argc, char* argv[]){
    int i=10;
    printf("%d \n", factorial(i));
        
    return 0;
}