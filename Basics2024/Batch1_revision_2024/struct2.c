#include<stdio.h>

struct student{

    int rollno;
    int class;
    char section;
    int marks;

}
// . operator is called as structure member operator


int main() {
    int arr[]={1,2,3,4,5};
   struct student s1={1,10,'A',90};
   
   int a,b,c;
   struct student s2,s3,s4;

   int x=3,y=5,z=10;
   struct student s5={2,10,'A',80}, s6={3,10,'A',88}, s7={4,10,'A',70};
   
    return 0;
}