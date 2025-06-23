#include<stdio.h>

void factorial( int a, int *fact ){
    *fact=*fact * a;
    if(a==1){
        return;
    }
    factorial(a-1,fact);
}

int main() {

    int total=1; //5*4*3*2*1
    factorial(5,&total);
    printf("Factorial = %d",total);

    return 0;
}