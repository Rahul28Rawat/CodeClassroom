#include<stdio.h>

int main() {

    // &(variable) --> addr of that variable
    // *(address) --> value present at that address / derefrencing a address

    // int a = 10;
    // char b='@';
    // float c = 10.5;
    // // those variables which stores address of other normal variales are known as pointer variable
    // int *p;
    // p=&a;

    // printf("%u\n",&a);
    // printf("%u\n",p);
    // printf("%d", *p);

    char ch[4]="string";
    printf("%s",ch);

    return 0;
}