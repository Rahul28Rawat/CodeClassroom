#include<stdio.h>

int main(){

    int arr[] = {1,2,10,5,11,4,3};
    int n = sizeof(arr)/4;

    {// print array
    printf("Original array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

    for( int i=0; i<n-1; i++){

        int min=i;
        for( int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    

    {//sorted array
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
    
    return 0;
}