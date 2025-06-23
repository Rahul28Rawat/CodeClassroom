//Can you do this ques?
// T* (9/5) + 32 = F 

#include<stdio.h>

int main(){

    double t;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &t);

    double f= (t*9/5)+32;
    printf("%lf",f);

    return 0;
}