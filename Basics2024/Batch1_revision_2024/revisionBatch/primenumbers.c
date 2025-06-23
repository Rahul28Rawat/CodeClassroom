#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n); //n=81

    int prime=1;
    for( int i=2; i<=sqrt(n); i++ ){ // 2......9
        if(n%i==0){
            printf("%d is not a prime number", n);
            prime=0;
            break;
        }
    }

    if(prime==1){
        printf("%d is a prime number", n);
    }

    return 0;
}