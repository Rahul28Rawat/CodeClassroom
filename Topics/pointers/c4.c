#include<stdio.h>

int multiply(int a, int b){
    int c=a*b;
    return c;
}

//w*x + y*z
void SOP(int w,int x,int y,int z,int (*p)(int,int)){
    int ans1=(*p)(w,x);
    int ans2=(*p)(y,z);
    int ans3=ans1+ans2;
    printf("%d\n",ans3);
}

int main() {

    int (*ptr)(int,int)=&multiply;
    SOP(2,3,4,5,ptr);

    return 0;
}

