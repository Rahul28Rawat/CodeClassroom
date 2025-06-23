#include<stdio.h>

int main(){

    int arr[]={3,3,8,6,4,2};
    int n=sizeof(arr)/4;

    // insertion sort
    for( int i=1; i<n; i++){
        int curr=arr[i];
        for( int j=i-1; j>=0; j++){
            if( curr<arr[j]){
                arr[j+1]=arr[j];
                if(j==0){
                    arr[j]=curr;
                }
            }
            else{
                arr[j+1]=curr;
                break;
            }
        }
        
    }

    return 0;
}