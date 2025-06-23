#include<stdio.h>

int main() {

    // 0 1 1 2 3 5 8 13 21 34 

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int num1=0;
    int num2=1;
    int nextnum;
    printf("Fibonacci Series: ");

    for( int i=0; i<n; i++ ){
        printf("%d ",num1);
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
    }

    return 0;
}