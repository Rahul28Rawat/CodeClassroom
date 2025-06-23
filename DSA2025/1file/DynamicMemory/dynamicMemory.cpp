#include<iostream>
// #include<stdlib>
using namespace std;

// malloc() --> memory allocation
// realloc() --> re allocation
// free() --> destroys dynamic variable

//123B7

//DSA 
//OOPs

int* sum(){

    int x;
    cin>>x;
    // int arr[20];
    int* ptr=malloc(4); //2000-2003
    ptr=realloc(ptr,8); //2000-2007
    *ptr=10;
    
    return ptr;
    
    // int a=5;
    // int* ptr=&a;
    // return ptr;
}

int main(){
    
    int* x=sum();
    cout<<"value="<<*x<<endl;

    return 0;
}