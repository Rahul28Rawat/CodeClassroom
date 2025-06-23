#include<stdio.h>

int main(){

    int arr[]={5,9,1,7,11,4,8,2};
    int n=8;

    printf("Starting array: ");
    //Print array
    for( int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Bubble Sort 
    for( int j=0; j<n-1; j++){
        for( int i=0; i<n-1-j; i++ ){ //i=0
            if( arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    //jenny
    //striver
    

    printf("Fully sorted array: ");
    //Print array
    for( int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}