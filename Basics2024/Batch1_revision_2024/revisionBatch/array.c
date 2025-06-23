#include<stdio.h>

int main() {

    int arr[5]={7,2,9,11,4}; //{14,4,18,22,8}
    int size=5;

    //bubble sort
    for( int i=0; i<size-1; i++){
        for( int i=0; i<(size-1); i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    printf("Elements of your array are : \n");
    for( int i=0; i<5; i++ ){
        printf("%d ", arr[i]);
    }






    // int min = arr[0]; //2
    // for( int i=1; i<5; i++){
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    // printf("Min= %d\n",min);

    // int max=arr[0];
    // for( int i=1; i<5; i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    // printf("Max= %d\n",max);


    return 0;
}