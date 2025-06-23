#include<stdio.h>

int main(){

    //Write a C program to find maximum between two numbers.
    //Write a C program to find maximum between three numbers.
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);


    //for 'a' to be greatest --> a>b && a>c
    a=5
    b=5
    c=4
    
    if(a>b){ 
        if(a>c){
            printf("a is the greatest number.");
        }
        else{
            printf("c is the greatest number.");
        }
    }
    else{
        if(b>c){
            printf("b is the greatest number.");
        }
        else{
            printf("c is the greatest number.");
        }
    }

    // 5 se divisible 















    // if( a>b && a>c ){
    //     printf("a is the largest number.");
    // }
    // else if( b>a && b>c ){
    //     printf("b is the largest number.");
    // }
    // else if( c>a && c>b ){
    //     printf("c is the largest number.");
    // }
    // else if(a==b && a>c){
    //     printf("a and b are the largest numbers.");
    // }
    // else if(a==c && a>b){
    //     printf("a and c are the largest numbers.");
    // }
    // else if( b==c && b>a){
    //     printf("b and c are the largest numbers.");
    // }
    // else{
    //     printf("All values are equal");
    // }

    


    // if(){

    //     if(){

    //     }
    //     else{

    //     }

    // }


    


    //Ques- First step is to recognize whether we need to use if else or it.
    //Ans - we use if else when we have to check value of something.

    //For 'a' is greatest --> a>b && a>c
    //For 'b' is greatest --> b>a && b>c
    //For 'c' is greatest --> c>a && c>b

    // if
    // else if
    // else if
    // else if
    // else

    // if(condition){
    //     //code to be executed if condition is true
    // }
    // else{
    //     //code to be executed if condition is false
    // }

    // if(){
    //     if(){

    //     }
    //     else{
    //         if(){

    //         }
    //         else{

    //         }
    //     }
    // }
    // else{

    // }

    return 0;
}