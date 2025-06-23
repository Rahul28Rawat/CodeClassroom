#include<stdio.h>

int main() {

    // char arr[5]={'r','a','h','u','l'};
    
    // strings is basically array of characters but in strings
    // the last element is always "\0"(null character).
    
    // array gives continous memory allocation
    char arr[9]={'r','a','h','u','l','\0'}; ///string
    char name[10]="arshbir";
    int square[5]={1,4,9,16,25};

    // printf( "%c", arr[1] );
    //*(addr) --> us addr par rakhi hui value mil jati hai (dereferencing that variable)
    //&(variable) --> us variable ka address

    // arr[1]  --> *(1+arr) --> 1[arr]
    // arr[0]  --> *(arr+0)

    char *p="RIYA";
    printf("%s",p);
 
    return 0;
}