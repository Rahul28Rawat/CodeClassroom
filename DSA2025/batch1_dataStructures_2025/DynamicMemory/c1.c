#include<stdio.h>
#include<stdlib.h>

int c=100; // static plus Global variable

// int *p= (int*)malloc(sizeof(int));

void sum(){
    int a=5; //static Plus local variable
    int b=10;
    printf("%d\n",a+b);
    
}

int main() {

    return 0;
}