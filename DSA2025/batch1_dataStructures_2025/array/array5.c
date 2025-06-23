#include<stdio.h>

void sum( int ptr[] ){
    ptr[0]=90;
}

int main() {

    int arr[4]={10,20,30,40};
    sum(arr);
    printf("%d",arr[0]);

    return 0;
}