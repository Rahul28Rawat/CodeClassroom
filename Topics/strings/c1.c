#include<stdio.h>

// The Union is a user-defined data type in C language that can contain elements
//  of the different data types just like structure. But unlike structures, 
//  all the members in the C union are stored in the same memory location. 
//  Due to this, only one member can store data at the given instance.

union student{
    int a; //4
    char b; //4
    double c; //8
    // it will take 8 byte of memory size from memory 
};

int main() {

    // union student s1;
    // s1.a = 10; // it will store 10 in memory location of s1
    // s1.c= 20.3;
    // printf("%d",s1.a);


    // strings
    // it is a array of char values with '\0' (NULL Character) as last element

    // char arr[6]={'r','a','h','u','l','\0'}; //string
    // printf( "%s",arr);

    // char name[50];

    // for( int i=0; i<50; i++){
    //     scanf("%c",&name[i]);
    // }

    // gets(name); //input karata hai
    // printf("%s\n",name); //print karwata hai
    // puts(name); //print karwata hai


    char arr[8]={'r','a','h','u','l','\0','x','y'};
    
    //

    printf("%s",arr);

    return 0;
}