#include<stdio.h>

int main(){

    int a,b,c,d;

    //ab, cd
    //ac, bd,
    //ad, bc

    int ans= (a==b && c==d)? 1: (a==c && b==d)? 1: (a==d && b==c)? 1: 0;

    printf("%d",ans);


    return 0;
}