#include<stdio.h>

void func1( int arr[] ){
    arr[0]=100;
}


int main(){
    
    int marks[]={50};

    func1(marks);

    printf("%d",marks[0] );

    return 0;
}