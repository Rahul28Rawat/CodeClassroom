#include<stdio.h>

int main() {

    int arr[]={2,4,5,7,11,53,58,77,93,94,99,103,111,121,150,170};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int key;
    printf("Enter the key to search: ");
    scanf("%d",&key);
    
    // binary Search
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int found=0;

    while(start<=end){
        if(arr[mid]==key){
            printf("Element is present at position %d\n",mid+1);
            found=1;
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
        printf("Element is not present in array\n");
    }
    


    return 0;
}
