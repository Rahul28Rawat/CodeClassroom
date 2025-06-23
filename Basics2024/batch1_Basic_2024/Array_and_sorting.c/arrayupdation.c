#include<stdio.h>

int linearsearch(int arr[], int size, int key){

    int found=0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            found=1;
            return i;
        }
    }
    if(found==0){
        return -1;
    }

}

void binarysearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid;
    int found=0;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            found=1;
            return i;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    if(found==0){
        return -1;
    }
}

int main() {

    int arr[5]={1,2,3,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int index=linearsearch(arr,size,7);
    arr[index]=4;

    int index2=binarysearch(arr,size,7);
    arr[index2]=4;

    return 0;
}