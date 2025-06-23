#include<stdio.h>

void sum( int *a, int *b){
    *a=100;
    int sum =*a+*b;
    printf("sum = %d",sum);
}

int main(){
    
    int x=4,y=7;
    sum(&x,&y);
    printf("X: %d",x);
    

    

    return 0;
}