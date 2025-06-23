#include<stdio.h>

int main() {

    int arr[20]={1,2,3,4,5,7,8,9};
    int size=8;

    int position=6;
    int key=60;

    printf("Old array: "); 
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    //insertion
    for(int i=size-1; i>=position-1; i-- ){
        arr[i+1]=arr[i];
    }
    arr[position-1]=key;
    size++;

    printf("New array: "); 
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}