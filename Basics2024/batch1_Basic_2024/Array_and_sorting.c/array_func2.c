#include<stdio.h>

void display( int ptr[] ){
    int size=sizeof(arr)/sizeof(arr[0]);
    for( int i=0; i<size; i++){
        printf("%d ", ptr[i] );
    }
}

void maximum( int a[] ){
    int size=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    for( int i=1; i<size; i++){
        if( a[i] > max ){
            max=a[i];
        }
    }
}

int main() {

    int arr[5]={10,20,30,40,50};
    display(arr);

    return 0;
}