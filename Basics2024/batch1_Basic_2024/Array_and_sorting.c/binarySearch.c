#include<stdio.h>

void linearsearch(int arr[], int size, int key){

    int found=0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            found=1;
            printf("Element found at position %d.\n",i+1);
            break;
        }
    }
    if(found==0){
        printf("Element not found in the array.\n");
    }

}

void binarysearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int found=0;

    while(start<=end){
        if(arr[mid]==key){
            found=1;
            printf("Element found at position %d.\n",mid+1);
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
            mid=(start+end)/2;
        }
        else if(arr[mid]<key){
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    if(found==0){
        printf("Element not found in the array.\n");
    }
}
 

int main() {

    int arr[5]={11,63,99,115,200};
    int key=115;
    int size=sizeof(arr)/sizeof(arr[0]);

    linearsearch(arr,size,key);
    binarysearch(arr,size,key);
    return 0;
}