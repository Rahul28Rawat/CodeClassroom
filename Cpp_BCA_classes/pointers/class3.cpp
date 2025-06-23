#include<iostream>
using namespace std;

void swap( int x=5, int y=33 ){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    {
    // int a=5;
    // int b=7;
    // //swap
    // cout<<"before swaping: "<<endl;
    // cout<<"a="<<a<<" b="<<b<<endl;

    // int temp=a;
    // a=b;
    // b=temp;

    // cout<<"after swaping: "<<endl;
    // cout<<"a="<<a<<" b="<<b<<endl;
    }
    {
        // int x=10;
        // int y=3;
        // cout<<"before swaping: "<<endl;
        // cout<<x<<", "<<y<<endl;

        // int temp=x;
        // x=y;//x=3
        // y=temp;

        // cout<<"after swapping"<<endl;
        // cout<<x<<", "<<y<<endl;
    }
    
    int x=5;
    int y=33;
    cout<<"before swapping: "<<endl;
    cout<<x<<", "<<y<<endl;
    
    //pass by value
    swap(x,y); 

    cout<<"after swapping: "<<endl;
    cout<<x<<", "<<y<<endl;
    
    return 0;
}