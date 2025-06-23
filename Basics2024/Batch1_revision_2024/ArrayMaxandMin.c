#include<stdio.h>
#include<limits.h>

int main(){

    int arr[]={-1,-3,-5};
    int max=arr[0];

    for( int i=0; i<6; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Max: %d",max);


    return 0;
}