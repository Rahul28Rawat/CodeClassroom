#include<iostream>
using namespace std;

int main(){

    // memory ka chota sa hissa hota hai
    int a =10;
    //ki variables ka kuch address hota hai
    cout<<&a<<endl;
    cout<<a<<endl;

    //pointer variable
    int *address= &a;

    string name="rahul";
    string *addr = &name;

    double square=49;
    double *addr2= &square;

    *addr2=100;
    cout<<square<<endl;

    //both will print address of square
    cout<<&square<<endl;
    cout<<addr2<<endl;

    //both will print value of square
    cout<<square<<endl;
    cout<<*(&square)<<endl; //addr2 jisko bhi point kar rha hai uske andar ki value print kardo
    // // dereference karna
    // 0x61fee0 --> square --> 49

    

    return 0;
}