#include<stdio.h>

int main(){

    //lets say ki koi number hai 98,
    //my task is to print all the digits of this numbwr individually.

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 100
    
    // while( n>0 ){
    //     int D = n%10;
    //     printf("%d\n",D);
    //     n = n/10;
    // }
    //n=9012
    
    int sum = 0;
    while( n>0 ){ //24
        int D = n%10;
        sum=sum + D;
        n=n/10;
    }
    printf("SUM = %d", sum);

    




    return 0;
}