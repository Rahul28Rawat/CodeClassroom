#include<stdio.h>

int maxElement(int arr[],int n){
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Bucketsort(int arr[], int n){
    int max=maxElement(arr,n);
    int bucket[max+1]={0};
    for (int i = 0; i < n; i++) {
        int k=arr[i];
        bucket[k]++;
    }
    int j=0;
    for(int i=0; i<=max; i++){
        while(bucket[i]>0){
            arr[j]=i;
            j++;
            bucket[i]--;
        }
    }
}

int main() {

    int arr[]={21,9,7,3,19,14,6,12,23,16};
    int n = sizeof(arr)/sizeof(arr[0]);

    Bucketsort(arr,n);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}