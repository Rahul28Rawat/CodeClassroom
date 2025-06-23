#include<stdio.h>

void insert(int arr[], int size, int key, int position){
    int i;
    for( i=size-1; i>=position-1; i-- ){
        arr[i+1]=arr[i];
    }
    arr[i+1]=key;
}

int main() {
    // {1,2,,3,4,5};
    int arr[20];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    int size = 5;

    insert(arr,size,71,3);
    //display
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}