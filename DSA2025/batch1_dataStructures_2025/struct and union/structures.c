#include<stdio.h>

// Q1) create a structure Named "car" which has 3 properties. 
// int seats, char model, int price.
// then create 2 variables of car and initialize its values and print them.

// &value -> address
// *addr -> value at that address

//dervied data type
struct school{ //5
    int rollno; //4
    char section; //1
};

//nested structure
struct CBSE{ //13
    int SchoolID; //4
    int schoolAge; //4
    struct school s; //5
};



struct Organisation  
{ 
    char organisation_name[20]; 
    char org_number[20]; 

    struct Employee 
    { 
        int employee_id; 
        char name[20]; 
        int salary; 
    }emp; 
};

int main() {

    // struct CBSE c1;
    // c1.SchoolID = 1001;
    // c1.schoolAge = 10;
    // c1.s.rollno=1;
    // c1.s.section='A';

    // struct school s1;
    // s1.rollno=1;
    // s1.section='A';

    // struct school s2;
    // s2.rollno=2;
    // s2.section='B';

    // printf("%d\n",s1.rollno);
    // printf("%c\n",s1.section);

    // struct school* ptr=&s1;
    // struct school* ptr2=&s2;
    // //print s1's rollno
    // printf("%d",(*ptr).rollno);

    // //print s2's section
    // // printf("%c",(*ptr2).section);
    // printf("%c",ptr2->section);


    // int a=10;   
    // int *ptr=&a;

    // printf("%d",*ptr);

    // struct Organisation o1;
    // strcpy(o1.organisation_name,"Amazon");
    // strcpy(o1.org_number,"123456");
    // o1.emp.employee_id=100;
    // strcpy(o1.emp.name,"John");
    // o1.emp.salary=50000;
    // printf("Organisation Name: %s\n",o1.organisation_name);
    // printf("Organisation Number: %s\n",o1.org_number);
    // printf("Employee ID: %d\n",o1.emp.employee_id);
    // printf("Employee Name: %s\n",o1.emp.name);
    // printf("Employee Salary: %d\n",o1.emp.salary);

    struct CBSE s1;
    int ans=sizeof(s1);
    printf("%d\n",ans);

    return 0;
}