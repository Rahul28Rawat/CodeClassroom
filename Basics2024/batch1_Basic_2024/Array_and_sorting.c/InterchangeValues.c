#include<stdio.h>

void ElementInterchange(int arr[], int size){
    if(size<2){
        printf("Error, Array should have at least two elements");
    }
    else{
        int temp=arr[1];
        arr[1]=arr[size-1];
        arr[size-1]=temp;
    }
}

int main() {

    int arr[]={2,3,5,6,7,8,9,11};
    int size=sizeof(arr)/sizeof(arr[0]);

    ElementInterchange(arr,size);


    // //print array
    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    // if(size<2){
    //     printf("Error, Array should have at least two elements");
    // }
    // else{
    //     int temp=arr[1];
    //     arr[1]=arr[size-1];
    //     arr[size-1]=temp;
    // }

    // //print array
    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    return 0;
}