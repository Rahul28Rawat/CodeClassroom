#include<stdio.h>

int main(){

    int age;
    printf("Enter your age: "); //string
    scanf("%d",&age);

    if(age<5){
        printf("You are a kid");
    }
    else if(age<18){
        printf("You are a child");
    }
    else if(age<22){
        printf("You are a young adult");
    }
    else{
        printf("You are an adult");
    }


    return 0;
}