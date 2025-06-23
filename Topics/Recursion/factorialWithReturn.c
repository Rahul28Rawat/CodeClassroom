#include<stdio.h>

int factorial( int x ){

    if( a<=1 ){
        return 1 ;
    }
    return x * factorial(x-1) ;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n); //5

    int ans= factorial(n);
    printf("Sum of numbers = %d",ans);

    //fibonacci ==> 0 1 1 2 3 5 8 
    //sum of digits

    return 0;
}