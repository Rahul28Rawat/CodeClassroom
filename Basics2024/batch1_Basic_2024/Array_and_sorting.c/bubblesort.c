#include<stdio.h>

int main() {

    int arr[]={4,6,1,8,2,11,7};
    int size= sizeof(arr)/sizeof(arr[0]);

    printf("\narray before sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }


    //bubble sort
    for(int i=0; i<size-1; i++){
        for( int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\narray after sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }


    return 0;
}