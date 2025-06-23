#include<stdio.h>

int main() {

    int arr[]={10,5,4,7,8,33,57,11,58}; //array
    int size=sizeof(arr)/sizeof(arr[0]); //size

    int key;
    printf("Enter the key to search: ");
    scanf("%d",&key);

    //Linear search
    int found=0;
    for(int i=0; i<size; i++){
        if(key==arr[i]){
            printf("Element is present at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element is not present in array\n");
    }
    
    


    return 0;
}
