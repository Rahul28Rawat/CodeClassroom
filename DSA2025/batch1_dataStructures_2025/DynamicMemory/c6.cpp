#include<iostream>
using namespace std;

// call by value
// void changevalue(int x, int y){
//     x=1;
//     y=2;
// }

//call by reference
void changevalue(int* x, int* y){
    *x=1;
    *y=2;
}

int main(){
      
    int a=5;
    int b=3;
    changevalue(&a,&b);
    
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}