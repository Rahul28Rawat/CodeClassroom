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
    int reverse=0; //20+3=230+6=236
    
    while(n>0){
        int D= n%10; 
        reverse = reverse*10 + D;
        n=n/10;
    }

    printf("Reversed Number is %d",reverse);


    // table: 
    // for(int i=1; i<=10; i++){
    //     printf("%d\n",i*n);
    // }

    return 0;
}