#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr=(int*)malloc(5*sizeof(int));
    // int *ptr=(int*)calloc(5,sizeof(int));
    // int arr[5]={100,200,300};
    // *(arr+1)-> arr[1]
    ptr[0]=100;
    ptr[1]=200;
    ptr[2]=300;
    ptr[3]=400;
    ptr[4]=500;

    // for(int i=0; i<5; i++){
    //     printf("%d ",ptr[i]);
    // }

    realloc(ptr,4*sizeof(int));

    for(int i=0; i<4; i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);

    return 0;
}