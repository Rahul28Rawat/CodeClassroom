#include<stdio.h>

int main(){

    int a=5; //2
    int b=2; //2

    int x=a;
    a=b;
    b=x;

    printf(" a: %d,  b: %d ",a,b);

    return 0;
}