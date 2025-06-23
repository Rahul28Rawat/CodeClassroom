#include<stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum=0;
    for( int i=1; i<=n/2; i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum==n){
        printf("IT is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }


    return 0;
}