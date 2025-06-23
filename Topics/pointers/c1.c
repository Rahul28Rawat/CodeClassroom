#include<stdio.h>
#include<stdlib.h>

int main() {

    int* ptr=(int*)malloc(4);
    *ptr=10;
    printf("%d",*ptr); //function
    
    return 0;
}