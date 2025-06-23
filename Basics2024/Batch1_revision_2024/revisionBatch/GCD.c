#include<stdio.h>

int main(){
    int n1,n2;     
    printf("Enter a number 1 and number 2: ");
    scanf("%d%d", &n1,&n2);

    int n;
    if(n1<n2){
        n=n1;
    }
    else{
        n=n2;
    }

    int GCD=1;
    for( int i=1; i<=n/2; i++){
        if(n1%i==0 && n2%i==0){
            printf("%d\n",i);
            GCD=i;
        }
    }

    printf("GCD=%d",GCD);

    return 0;
}