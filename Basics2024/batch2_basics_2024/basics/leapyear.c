#include<stdio.h>

int main(){

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    //year is divisible 4 
    //year not divisible by 100  --2000,2200,2400,2800,3200,3600,4000
    //year is divisible by 400

    if( ((year%4==0) && (year%100!=0)) ){
        printf("%d is a leap year",year);
    }
    else if(year%400==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }

    return 0;
}