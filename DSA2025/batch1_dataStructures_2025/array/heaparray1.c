#include<stdio.h>

int main() {

    int *ptr;
    int n;
    printf("Enter size of array: ");

    ptr= (int*)malloc(n*sizeof(int));

    printf("INPUT ARRAY : \n");
    for(int i=0; i<size; i++){
        // scanf("%d",&arr[i]);
        scanf("%d",ptr+i);
    }

    //printing array: 
    printf("OUTPUT ARRAY : ");
    for(int i=0; i<size; i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);

    return 0;
}