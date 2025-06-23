#include<stdio.h>
#include<string.h>

//union theory defination
// Union is an user defined datatype in C programming language. 
// It is a collection of variables of different datatypes in the same memory location. 
// We can define a union with many members,
//  but at a given point of time only one member can contain a value.

union student{
    int roll;
    char name[20];
    float marks;
};

int main() {

    union student s1;
    s1.roll = 1;
    strcpy(s1.name,"arshbir");
    printf("%d",s1.roll);
    // s1.marks = 18.5;

    return 0;
}