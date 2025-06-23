#include<stdio.h>

void func1( int arr[]){
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}

//call by reference
void swap( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by value
void swap( int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int marks[5]={10,20,30,40,50};
    func1(marks); //call by reference 

    int x=5;
    int y=10;
    swap(&x,&y);

    // &variable --> address of that value
    // *address --> value at that address

    return 0;
}