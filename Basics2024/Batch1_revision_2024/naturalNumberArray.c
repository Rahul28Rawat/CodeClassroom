#include<stdio.h>

int main(){

    // 1. Write a program to initialize a 1D array with the 
    // first 10 natural numbers and print the array.

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    for( int i=0; i<=9; i++ ){
        printf("%d ",arr[i]);
    }

    return 0;
}