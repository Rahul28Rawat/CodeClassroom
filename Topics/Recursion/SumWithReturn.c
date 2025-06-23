#include<stdio.h>

int sum( int a  ){ //addition karta hai //5
    if(a<=0){
        return 0;
    }
    return a + sum(a-1);
}

int main() {

    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    int ans= sum(n);
    printf("Sum of numbers = %d",ans);   

    return 0;
}