#include<stdio.h>

int main(){

    int arr[]={2,4,6,7,11,19,23,27,33,67,89,90,101};
    int n=sizeof(arr)/4;

    int key;
    printf("Enter a key: ");
    scanf("%d",&key);

    int start=0;
    int end=n-1;
    int mid;
    int found=0;
    while(start<=end){
        mid=(start+end)/2;
        if(key==arr[mid]){
            printf("Element is found at index %d\n",mid);
            found=1;
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    if(found==0){
        printf("Element is not found in the array\n");
    }

    return 0;
}