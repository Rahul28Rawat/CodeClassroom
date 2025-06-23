#include<stdio.h>

int main(){

    int a=3,b=4,c=2;
    
    int ans= a*b==c? 1: a*c==b? 1: b*c==a? 1:0; 

    printf("%d",ans);

    return 0;
}