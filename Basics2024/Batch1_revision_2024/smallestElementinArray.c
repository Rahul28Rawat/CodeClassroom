#include<stdio.h>

int main(){

    int arr[] = {2,7,15,16,8};
    int n = sizeof(arr)/4;

    int smallest=arr[0];//1

    for( int i=1; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("%d",smallest);

    return 0;
}