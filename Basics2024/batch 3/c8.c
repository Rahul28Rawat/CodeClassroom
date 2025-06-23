#include<stdio.h>

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    //check if it is 3 digit number
    if(number>=100 && number<1000 ){
        printf("The number is 3 digit number");
    }
    else{
        printf("The number is not 3 digit number");
    }

    //int a;
    //5 and 7 se divisble hona chahiye
    //print-->"number is divisible by 5 and 7"
    //3 and 11 se divisible hona chahiye
    //print-->"number is divisible by 3 and 11"
    //else
    //print-->"number is not divisible"

    return 0;
}