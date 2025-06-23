#include<stdio.h>

void swap( int *a, int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    //insertion sort
    // x=22
    int arr[] = {12, 22, 25 34, 34, 64}; //array => n=5
    int n = sizeof(arr)/4;

    //insertion sort
    for( int i=1; i<n; i++){
        int curr=arr[i];
        for( int j=i-1; j>=0; j-- ){
            if( arr[j] > crr ){
                arr[j+1]=arr[j];
            }
            else if( arr[j]<=crr){
                arr[j+1]=crr;
                break;
            }
        }
    }


    

    for( int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }


    // selection sort
    // for( int i=0; i<n-1; i++){
    //     int min=i;
    //     for( int j=i+1; j<n; j++){
    //         if( arr[j]<arr[min]){
    //             min=j;
    //         }
    //     }
    //     swap(&arr[min],&arr[i]);
    // }

    // bubble sort
    // for( int j=0; j<n-1; j++){ //j=1
    //     for( int i=0; i<n-1-j; i++){ //condtition= 3
    //         if(arr[i]>arr[i+1]){
    //             swap(&arr[i],&arr[i+1]);
    //         }
    //     }
    // }

    return 0;
}