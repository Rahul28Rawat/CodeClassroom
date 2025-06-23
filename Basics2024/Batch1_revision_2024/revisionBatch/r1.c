#include<stdio.h>

void swap( int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {

    // call by value and call by reference.
    // &a --> address of variable "a".
    // int *p --> creating a pointer variable
    // *(address) --> go to the address and fetch its value

    int x=5;
    int y=10;
    swap(&x,&y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}