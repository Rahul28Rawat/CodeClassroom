#include<stdio.h>
#include<conio.h>

//COMPILER
//quotes--> "  "
//modulus--> %

// the product of 22 and 5 is 110.
// the sum of 7,8 and 11 is 26.
// 5 vowels of english are a,e,i,o,u.

//I got 81.5 marks out of 100 in maths. My grade was A grade. 

int main(){

    float marks=81.5f;
    int totalMarks=100;
    char grade='A';

    printf("I got %.2f marks out of %d in maths. My grade was %c grade.",marks,totalMarks,grade);

    return 0;
}