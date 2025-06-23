#include<iostream>
using namespace std;


//create a function which takes two no as input and swaps their value

void swap( int x=a=5, int y=b=7){
    int temp=x;//temp=5
    x=y; //x=7
    y=temp;//y=5
}

int main() {

    int a= 5;
    int b =7;
    cout<<"Before swapping a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping a = "<<a<<" b = "<<b<<endl;

    return 0;
}

