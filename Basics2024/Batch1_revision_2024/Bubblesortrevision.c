#include<stdio.h>

int main(){

    int arr[]={16,2,15,7,8};
    int n= sizeof(arr)/4;

    // print array
    printf("Original array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //bubble sort
    for( int i=0; i<n-1; i++){
        for( int j=0; j<n-1-i; j++ ){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


    //sorted array
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}