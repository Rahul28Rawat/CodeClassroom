#include<stdio.h>

int prime(int a){
    if(a==1){
        return 0;
    }
    for( int i=2; i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    // 12-->1,2,3,4,6,12

    // 1----------------------------n

    for( int i=1 ; i<=n; i++){
        if( n%i==0 && prime(i)==1 ){
            printf("%d ",i);
        }
    }

    // 12--> 2,3,

    return 0;
}