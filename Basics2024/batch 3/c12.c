// INCREMENT AND DECREMENT OPERATOR
#include<stdio.h>

int main(){

    int num=5;
    // a=a+1;
    // a++;
    // ++a;

    //PRE INCREMENT- pehle a ki value ko increment kardo fir use karo.
    //POST INCREMENT- pehle a ki value ko use karlo fir increment karo.
    int ans= ++num + ++num;
    printf("%d",ans);



    return 0;
}