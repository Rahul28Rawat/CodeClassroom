#include<stdio.h>

int main() {

    int arr[]={2,7,3,1,5,0,-5,-2};
    int size=sizeof(arr)/sizeof(arr[0]);


    printf("Elements of your array before sorting are : \n");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //selection Sort
    for(int i=0; i<size-1; i++){
        int minIndex=i;
        for( int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }

    printf("Elements of your array after sorting are : \n");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}