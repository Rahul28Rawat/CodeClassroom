#include<stdio.h>

int prime( int n){
    if (n <= 1){
        return 0;
    }
    for(int i=2; i<n ; i++ ){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num,v1,v2,pair=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(  int i=2; i<=num-2; i++){
        if (prime(i)==1){
            v1=i;
            v2=num-i;
            if(prime(v2)==1){
                pair=1;
                printf("%d can be represented as sum of %d and %d",num,v1,v2);
                break;
            }
        }
    }
    if (pair==0){
        printf("%d cannot be represented as sum of two prime numbers",num);
    }

    return 0;
}