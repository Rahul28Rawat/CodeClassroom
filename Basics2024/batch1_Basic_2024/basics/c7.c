#include<stdio.h>

void pattern( int n ){
    for( int i=1; i<=n; i++){//i=1
        for( int j=n; j>i; j-- ){
            printf(" ");
        }
        for( int k=1; k<=i; k++ ){
            printf("*");
        }
        printf("\n");
    }
}

void pattern2( int n ){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    pattern(4);

    return 0;
}

A      A
AB    AB
***  ***
********