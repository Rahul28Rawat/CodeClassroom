#include<stdio.h>

void reverseNumber( int n, int *ans ){
    int ld=n%10;
    *ans=*ans * 10 + ld;
    n=n/10;
    if(n==0){
        return;
    }
    reverseNumber(n,ans);
}

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int result=0;
    reverseNumber(n,&result);
    printf("reversed number = %d",result);

    return 0;
}
