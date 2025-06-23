#include<stdio.h>
#include <limits.h>

int main(){
    int a;
    int min1=INT_MAX;
    int min2=INT_MAX;

    for(int i=1;i<=4;i++){
        scanf("%d",&a);
        if(a<min1){
            min2=min1;
            min1=a;
        }else if(a<min2){
            min2=a;
        }
    }
    printf("second smallest num is %d",min2);

    return 0;
}