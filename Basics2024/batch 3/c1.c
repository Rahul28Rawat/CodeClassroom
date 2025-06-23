#include<stdio.h>

int main(){

    //this is a lecture of datatypes.
    //"int" datatype is used to store integer(-100,-99,0,4,5,45,99,100) values.
    //double->(-4147483648 to 2147483647)
    // int -> 4 byte, double -> 8 byte
    int a=-10; 
    double b=7546452.95;
    float c=10.0;
    float f;
    char d='y';
    // %d-> integer
    // %f-> float
    // %lf-> double(long float)
    // %c-> character

    // int age=20;
    // printf("rahul is %d years old.",age);
    int marksObtained=80;
    int totalMarks=100;
    char grade='A';
    // printf("I scored %d marks out of %d in maths. I got grade %c.\n",marksObtained,totalMarks,grade);
    // printf("hello");

    c=14.23;
    printf("%.4f\n",c);

    


    return 0;
}