#include<stdio.h>

// recursion
// pointers

//factorial 1*2*3*4*5
//fact=1;

void numbberprinter( int a ){
    //base condition
    if(a==10){
        return;
    }
    numbberprinter(a+1);
    printf("%d ",a);
}

int main() {

    numbberprinter(1);

    return 0;
}