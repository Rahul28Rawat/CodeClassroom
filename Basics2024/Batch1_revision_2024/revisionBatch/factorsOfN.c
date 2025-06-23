#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 24-->  1................12.....13,14,15,16,17,18.....23.....24
    // 1......................24
    
    printf("Factors of %d are : ",n);
    for( int i=1; i<=n/2; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }



    return 0;
}