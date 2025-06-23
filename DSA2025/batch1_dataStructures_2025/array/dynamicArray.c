#include<stdio.h>
#include<stdlib.h>

void printer(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main() {

    // int a=25;
    // printf("Static memory: %d\n",a);

    //function for using dynamic(heap) memory is --> malloc()
    //malloc full form -> memory allocation
    // int* ptr=(int*)malloc(sizeof(int));

    // *ptr=40;

    // printf("dynamic memory : %d",*ptr);
    
    // int --> 4 byte
    // int --> 2 byte

    // int size = ;
    // printf("Size of int: %d\n",size);

    // arr of 5 size.
    int *arr = (int*)malloc(5*sizeof(int)); //dynamic memory

    printer(arr,5);

    // int arr[5]; //static array

    return 0;
}