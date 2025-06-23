#include<stdio.h>
// array is a user defined datatype where we store multiple values of same data type.
// structure is a user defined datatype where we store multiple values of different data type.

// how to make a structure
//datatype
struct student{
    int rollno;
    int class;
    char section;
    int marks;
}s2;

int main() {
    
    // int , float, double, struct student
    int a;
    float b;
    double c;
    struct student s1;

    s1.rollno=1;
    s1.class=10;
    s1.section='A';
    s1.marks=90;



    

    return 0;
}