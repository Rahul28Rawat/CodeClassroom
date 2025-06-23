//write a program to input two numbers and print their sum.
// 1) create two variables.
// 2) input numbers in these two variables.
// 3) sum these two numbers
// 4) print the sum

#include<stdio.h>

int main(){

    int a;
    int b;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);

    int sum=a+b;
    printf("sum = %d\n",sum);

    int difference=a-b;
    printf("difference = %d\n",difference);

    int product=a*b;
    printf("product = %d\n",product);

    // write a program to input two numbers and print their division.
    printf("divison = %d\n",a/b);

    printf("remainder = %d",a%b);

    return 0;
}