#include<iostream>
using namespace std;

// &variable -> address
// *addr -> variable

//function overloading 

//call by value
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
}

//call by reference
void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void swap(int a, int b, int c){
    int ans=a+b+c;
    cout<<"ans="<<ans<<endl;
}

int main(){
    
    int a=5;
    int b=7;

    swap(a,b,c);

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    return 0;
}