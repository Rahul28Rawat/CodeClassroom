#include<stdio.h>

int main() {

    //&(variable) --> addr of variable
    //*(addr) --> value present at that addr

    // int a = 10;

    // //it stores address of normal variable
    // int *p;
    // p=&a;

    // //pointer variable for storing address of a pointer variable
    // int **p2=&p;

    // printf("%u\n",p2);  //addr of p
    // printf("%u\n",*p2); //addr of a
    // printf("%u\n",**p2); //value of a

    // printf("%u\n",*p);
    // printf("%u\n",&a);

    // printf("%d\n", *(&a));
    // printf("%d\n",*p);

    //NULL pointer
    // int *ptr1=NULL;

    // //wild pointer
    // int *ptr2;
    // // char z='a';
    // // ptr2=&z;

    // //void pointer
    // void *ptr3;

    int arr[5]={10,20,30,40,50};
    char arr2[3]={'a','b','c'};

    // printf("%u\n",arr); // name of the array stores addr of first element
    // printf("%d\n",*arr);
    // printf("%c",*arr2);

    int *p=arr;
    printf("%d\n",*(p+3));

    

    return 0;
}