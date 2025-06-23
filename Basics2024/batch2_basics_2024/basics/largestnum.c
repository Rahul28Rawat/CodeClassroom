#include<stdio.h>
#include<limits.h>

int main(){

    int a,fmin=INT_MAX,smin=INT_MAX;

    for( int i=1; i<=4; i++){
        printf("enter a number: ");//5
        scanf("%d",&a);
        if(a<fmin){
            smin=fmin;
            fmin=a;
        }else if(a<smin){
            smin=a;
        }
    }
    printf("Second minimum number is %d\n",smin);

    return 0;
}