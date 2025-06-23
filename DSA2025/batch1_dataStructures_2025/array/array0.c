#include<stdio.h>

int main() {

    // datatype *pointerName;
    // &variable --> variable ka addr
    // *addr --> value at that addr ( Dereference )

    int a;
    int *ptr = &a;

    printf("%d", ptr);

    // int *ptr;

    return 0;
}