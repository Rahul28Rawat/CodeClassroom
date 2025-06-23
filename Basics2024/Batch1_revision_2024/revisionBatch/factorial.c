#include<stdio.h>

int main(){

    // 4! = 1*2*3*4

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact=1;
    for( int i=1; i<=n; i++){
        fact*=i;
    }

    printf("Factorial = %d",fact);

    return 0;
}