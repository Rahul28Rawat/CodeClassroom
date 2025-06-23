#include<stdio.h>

// how to print all the digits of a number
// how to print sum of all the digits of a number
// how to print sum of cube of all the digits of a number
//how to reverse a number
// how to check if a number is palindrome or not

int main(){

    int n; //632
    printf("Enter the number : ");
    scanf("%d", &n);
    int reverse=0;
    int temp=n;
    
    while(n>0){
        int D= n%10; 
        reverse = reverse*10 + D;
        n=n/10;
    }

    if( reverse == temp ){
        printf("\nNumber is palindrome");
    }
    else{
        printf("\nNumber is not palindrome");
    }

    return 0;
}