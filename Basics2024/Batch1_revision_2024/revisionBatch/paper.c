#include<stdio.h>

int factorial( long int a ){ //0! or 1!
    if(a==0 || a==1 ){
        return 1;
    }
    return a*factorial(a-1);
}

int sum( int a ){
    if(a==0){
        return 0;
    }
    return a+ sum(a-1);
}

int SOD( int a ){
    if(a==0){
        return 0;
    }
    int ld=a%10;
    int n=a/10;
    return ld + SOD(n);
}

int main() {

    // SOD(564) --> 4+ SOD(56)
    // SOD(56)  --> 6 + SOD(5)
    // SOD(5)   --> 5 + SOD(0)
    // SOD(0)   --> 0 

    // 5! --> 5*(4!)
    // 4! --> 4*(3!)
    // 3! --> 3*(2!)
    // 2! --> 2*(1!)
    // 1! --> 1

    long int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    long int ans= factorial(n);
    printf("Factorial of %d is %d\n", n, ans);



    return 0;
}