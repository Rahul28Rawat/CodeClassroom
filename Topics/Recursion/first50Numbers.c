#include<stdio.h>

//1 to 50 numbers print karega
void numberprinter( int i ){
    // work
    printf("%d ",i);
    // base statement
    if(i==50){
        return;
    }
    // call recursion
    numberprinter(i+1);
}

int main() {

    numberprinter( 1 );

    return 0;
}