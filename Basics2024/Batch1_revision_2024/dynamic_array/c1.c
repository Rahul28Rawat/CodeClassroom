#include<stdio.h>

int* printer(){
    // int x=10;
    //using dynamic memory
    int *x= (int*)malloc(sizeof(int));
    *x=10;
    printf("%d\n",*x);
    return x;
}

int main() {

    int *ptr= printer();
    printf("%d\n",*ptr);

    return 0;
}