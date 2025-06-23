#include<stdio.h>

int main() {

    int arr[]={2,5,4};
    int size= sizeof(arr)/sizeof(arr[0]);

    printf("\narray before sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }

    //selection sort
    for( int i=0; i<size-1; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp; 
    }

    printf("\narray after sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }

    return 0;
}