#include<stdio.h>
#include<stdlib.h>

int *ptr;

void hello(){
    ptr= (int*)malloc(10*sizeof(int));
    ptr[0]=10;
}

int main() {

    hello();
    printf("%d\n",ptr[0]);

    return 0;
}