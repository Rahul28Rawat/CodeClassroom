#include<stdio.h>
#include<math.h>

//function which takes two values as input and return whichever is maximum

//perfect Number-> divisors sum-> number itself

// int sum( int a, int b ){
//     int sum=a+b;
//     return sum;
// }

int SquareSum( int a, int b, int c){
    int squareA=a*a;
    int squareB=b*b;
    int squareC=c*c;

    int squareSum=squareA+squareB+squareC;
    return squareSum;
}

int main(){

    //Functions basically takes a input and returns some output
    //lets make function "sum" which takes two values as input, 
    // and returns sum of those values.

    //take two numbers , square them , and then print their sum;
    int a=3;
    int b=9;
    int c=5;
    int ans=SquareSum(a,b,c);
    printf("SUM OF SQUARES ARE : %d\n",ans);

    int x=1;
    int y=11;
    int z=4;
    int ans2=SquareSum(x,y,z);
    printf("SUM OF SQUARES ARE : %d\n",ans2);

    int m=13;
    int n=10;
    int o=7;
    int ans3=SquareSum(m,n,o);
    printf("SUM OF SQUARES ARE : %d\n",ans3);

    return 0;
}