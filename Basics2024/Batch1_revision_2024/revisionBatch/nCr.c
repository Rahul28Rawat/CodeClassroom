#include<stdio.h>

int fact( int a ){

    int ans=1;
    for( int i=1; i<=a; i++){
        ans=ans*i;
    }
    return ans;

}

int main(){

    int n,r;// n=5, r=2
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    int numerator = fact(n);
    int denominator = fact(r) * fact(n-r);

    int result = numerator/denominator;
    printf("Result: %d", result);

    return 0;
}