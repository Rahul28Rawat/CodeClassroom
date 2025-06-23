// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// C program to calculate electricity bill



// 1 toffee -> 0.5
// 40 toffee-> 20

// 1 unit -> 0.5*40
// 40 units -> 20

#include <stdio.h>
int main(){

    float units=400;
    float bill=0.0;

    if(units<=50){
        bill=units*0.5;
    }
    else{
        bill+=25;
        units-=50;
        if(units<=100){
            bill+=units*0.75;
        }
        else{
            bill+=75;
            units-=100;
            if(units<=100){
                bill+=units*1.2;
            }
            else{
                bill+=120;
                units-=100;
                bill+=(units*1.5);
            }
        }
    }
    printf("Total electricity bill is %.1f",bill);

    return 0;
}