#include<stdio.h>

int main(){

    //write a C program to check whether a alphabet is vowel or not using switch statemens.

    // char ch;
    // printf("Enter a character: ");
    // scanf("%c",&ch);

    // if(  ch=='a'){
    //     printf("%c is a vowel",ch);
    // }
    // else if( ch=='e'){
    //     printf("%c is a vowel",ch);
    // }
    // else if( ch=='i'){
    //     printf("%c is a vowel",ch);
    // }
    // else if( ch=='o'){
    //     printf("%c is a vowel",ch);
    // }
    // else if( ch=='u'){
    //     printf("%c is a vowel",ch);
    // }
    // else{
    //     printf("%c is not a vowel",ch);
    // }

    // switch(ch){
    //     case 'a' : 
    //     case 'e' : 
    //     case 'i' : 
    //     case 'o' : 
    //     case 'u' : printf("It is a vowel\n");
    //     break;
    //     default  : printf("%c is not a vowel\n",ch);
    // }

    //WAP to print whether it is a weekday or weekend based on number.

    //1) Write a C program print total number of days in a month using switch case.
    //2) Write a C program to create Simple Calculator using switch case.

    int a;
    int b;
    char operator;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&operator);

    switch(operator){
        case '+' : printf("sum of %d and %d is = %d",a,b,a+b);
        break;
        case '-' : printf("difference of %d and %d is = %d",a,b,a-b);
        break;
        case '*' : printf("product of %d and %d is = %d",a,b,a*b);
        break;
        case '/' : printf("division of %d and %d is = %d",a,b,a/b);
        break;
        default  : printf("Invalid operator");
    }


    return 0;
}