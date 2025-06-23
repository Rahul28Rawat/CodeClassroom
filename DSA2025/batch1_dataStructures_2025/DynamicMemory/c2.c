#include<stdio.h>
#include<stdlib.h>

int p=13; 

void sum(int x, int y){
    printf("%d",x+y);
    int a=5; //static variable
    printf("%d",p);
}

//those variables with are declared with func execution and deleted with function end 

int main() {

    int z=33;
    int *ptr=&z;

    printf("%x\n",ptr);
    printf("%d",*ptr);

    // &variable= addr of that variable
    // *addr= value at that addr

    //dynamic variable
    
    int* ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d",*ptr);

    free(ptr);

    return 0;
}