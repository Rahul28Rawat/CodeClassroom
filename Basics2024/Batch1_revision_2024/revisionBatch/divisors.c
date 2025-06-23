#include<stdio.h>

int main(){

    //print all the divisors of a number

    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for( int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }

    return 0;
}