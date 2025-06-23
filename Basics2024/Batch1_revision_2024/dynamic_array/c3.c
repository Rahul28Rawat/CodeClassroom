#include<stdio.h>
#include<stdlib.h>
//*addr = value
//&value = addr

int main() {

    int *ptr=(int*)malloc(5*sizeof(int));

    int *ptr2=(int*)malloc(sizeof(int));
    // int *ptr2=(int*)calloc(1,sizeof(int));

    *ptr=10;
    printf("%d\n",*ptr);

    realloc(ptr2,3*sizeof(int));

    free(ptr);

    return 0;
}