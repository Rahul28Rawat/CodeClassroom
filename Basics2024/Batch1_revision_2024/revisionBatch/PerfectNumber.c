#include<stdio.h>

//it is equal to sum of its proper divisors

int main(){

    //jo 1 se and khud se divide hota hai vo prime number hota hai
    //jo 2 se lakar n-1 tak kisi se divide nhi hota vo prime number hota hai

    // 2-----------------(n-1)
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int prime= 1;
    
    for( int i=2; i<n; i++ ){
        if(n%i==0){
            prime=0;
        }
    }

    if(prime==1){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }




    return 0;
}
