#include<stdio.h>

void countSort(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int posArr[10]={0};
    for(int i=0; i<n; i++){
        int k=arr[i];
        posArr[k]++;
    }
    for(int i=1; i<=max; i++){
        posArr[i]+=posArr[i-1];
    }
    int output[10];
    for(int i=0; i<n; i++){
        int k=arr[i];
        int j= --posArr[k];
        output[j]=k;
    }
    for(int i=0; i<n; i++){
        arr[i]=output[i];
    }

}

int main() {

    int arr[]={4,2,2,5,7,0,1,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    countSort(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}