#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int smallest= a<b? a<c? a:c : b<c? b:c; 

    int second_smallest= (a<b && a>smallest)? (a<c && a>smallest)? a:c : (b<c && b>smallest)? b:c;

    printf("second smallest: %d",second_smallest);

    return 0;
}