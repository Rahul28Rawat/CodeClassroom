#include<stdio.h>
//multiply
// 153--> 1^3 + 5^3 + 3^3 = 153

int factorial( int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int cube( int n){
    return n*n*n;
}


void armstrongnumber( int number){

    int original=number;
    int sum=0;
    while(number!=0){
        int digit = number % 10;
        sum= sum+cube(digit);
        number=number/10;
    }
    if(original==sum){
        printf("%d is a armstrong number",original);
    }
    else{
        printf("%d is not a armstrong number",original);
    }
}

//strong number 451= 4! + 5! + 1!
void strongnumber( int number){

    int original=number;
    int sum=0;
    while(number!=0){
        int digit = number % 10;
        sum= sum+factorial(digit);
        number=number/10;
    }
    if(original==sum){
        printf("%d is a strong number",original);
    }
    else{
        printf("%d is not a strong number",original);
    }
}
//
int multiply( int a ){
    int result = a*5;
    return result;
}

int main(){

    // strongnumber(145);
    // int ans=multiply(12);
    // printf("%d",ans);
    armstrongnumber(371);

    return 0;
}