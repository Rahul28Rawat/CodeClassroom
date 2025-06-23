#include<stdio.h>
#include<stdlib.h>

//*addrr --> value
//&value --> addr

int* multiplyer(int a, int b, int c){
    int *ptr =(int*)malloc(sizeof(int));
    *ptr=a*b*c;
    return ptr;
}

int main() {

    int *ans = multiplyer(3,4,2);
    printf("%d\n", *ans);

    return 0;
}