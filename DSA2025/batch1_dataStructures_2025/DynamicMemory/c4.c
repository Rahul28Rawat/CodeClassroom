#include<stdio.h>
#include<stdlib.h>

int main() {

    // int a;
    // a=5;

    int *ptr; //static memory
    ptr=malloc(8); //dynamic memory

    // ptr=(int*)calloc(5,sizeof(int)); //dynamic memory
    
    // *(ptr+0)=20;
    ptr[0]=20;
    ptr[1]=30;
    ptr[2]=40;
    ptr[3]=50;
    ptr[4]=60;

    for(int i=0; i<5; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    // ptr[4]=NULL;
    realloc(ptr,7*sizeof(int));
    ptr[5]=70;
    ptr[6]=80;

    for(int i=0; i<7;i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);

    return 0;
}