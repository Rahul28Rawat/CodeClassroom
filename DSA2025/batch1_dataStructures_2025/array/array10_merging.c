#include<stdio.h>


int main() {

    int a[5]= {3,5,11,13,21}; // element=n1
    int n1=5;
    int b[3]= {1,2,8};  // element=n2
    int n2=3;
    int c[100]; //element= n1+n2

    int k=0;
    for( int i=0; i<n1; i++){
        c[k]=a[i];
        k++;
    }
    for( int j=0; j<n2; j++){
        c[k]=b[j];
        k++;
    }

    printf("Elements of your array are : \n");
    for( int i=0; i<n1+n2; i++ ){
        printf("%d ", c[i]);
    }

    return 0;
}