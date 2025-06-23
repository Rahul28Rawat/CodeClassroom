#include<stdio.h>

void countSort(int arr[], int n){ 
    //find the maximum element to decide the length of count array
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int count[10]={0};
    // counts the occurrences of each element in the input array
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // Calculate the cumulative count for each element
    for(int i=1; i<=max; i++){
        count[i]+=count[i-1];
    }

    int output[14];
    for(int i=0; i<n; i++){
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i]=output[i];
    }
}

int main() {

    int arr[14]={0,4,2,2,0,0,1,1,0,1,0,2,4,2}; //0-4 ==> 5 numbers
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    countSort(arr,n);
    
    printf("\n");

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }   

    return 0;
}