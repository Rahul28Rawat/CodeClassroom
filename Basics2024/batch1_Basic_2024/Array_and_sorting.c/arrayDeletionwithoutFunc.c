#include<stdio.h>

int main() {

    int arr[20]={1,2,3,4,5,7,8,9};
    int size=8;

    int position=6;

    printf("Old array: "); 
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(j=(pos-1);j<n-1;j++) 
        a[j]=a[j+1]; 

    for( int i=position; i<size; i++ ){
        arr[i-1]=arr[i];
    }
    size--;
    

    printf("New array: "); 
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}