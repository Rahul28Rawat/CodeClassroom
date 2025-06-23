#include<stdio.h>

int main(){

    // write a for loop to print table of 4.
    for( int i=1; i<=10; i++ ){
        printf("%d",i*4);
    }

    //write a while loop to print table of 4

    int j=1;
    while(j<=10){
        printf("%d\n",j*4);
        ++j;
    }

    //write a do while loop to print table of 4
    int k=1;
    do{
        printf("%d\n",k);
        ++k;
    }while(k<=10);

    // write a C program to print first 10 even numbers



    return 0;
}