//  Write a C program to input month number and 
// print number of days in that month.
#include<stdio.h>

int main(){
    
    int cp,sp,profit,loss;
    double percent;
    char ch='%';

    
    printf("enter cost price: ");
    scanf("%d",&cp);
    printf("enter selling price: ");
    scanf("%d",&sp);

    if(cp>sp){
        loss=cp-sp;
        printf("loss is: %d",loss);
        percent=(loss*100)/cp;
        printf("\nloss percentage is: %.0lf%c",percent,ch);
    }
    else if(cp<sp){
        profit=sp-cp;
        printf("profit is: %d",profit);
        percent=(profit*100)/cp;
        printf("\nprofit percentage is: %.0lf%c",percent,ch);
    }
    else{
        printf("no profit no loss");
    }


    return 0;
}