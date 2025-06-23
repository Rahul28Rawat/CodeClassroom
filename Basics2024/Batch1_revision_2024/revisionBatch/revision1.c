#include<stdio.h>

//type of storage classes 
// auto --> these variables arr the default variable 
//      --> stored in stack memory 
//      --> these variables are declared within their func and 
//          gets destroyed when function terminates.
//      --> by default they are uninitialized.

// static --> these variables are stored in data segment of memory
//        --> these variables are declared outside functions
//        --> these variables are initialized by default to zero.

// extern --> extern keyword extends the visibility of the variable.
//        --> these variables are always global variable

// registers 
//      --> these variables are stored in registers of CPU
//      --> these variables are choosen by CPU itself

extern int z;

int main() {

    printf("%d",z);
    
    return 0;
}