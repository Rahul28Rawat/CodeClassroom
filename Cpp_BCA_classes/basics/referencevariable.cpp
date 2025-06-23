#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){

    int a;
    int b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    //before swap
    cout<<"Before swap a = "<<a<<" b = "<<b<<endl;
    //swap
    swap(a,b);
    //after swap
    cout<<"After swap a = "<<a<<" b = "<<b<<endl;

    return 0;
}