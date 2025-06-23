#include<iostream>
using namespace std;

//FUNCTION OVERLOADING
// same name but different function defination

void averageprinter(int a, int b ){ 
    int ans = (a+b)/2;
    cout<<"The average of "<<a<<" and "<<b<<" is "<<ans<<"."<<endl;
    cout<<"i am in func 1"<<endl;
}

void averageprinter( int x, int y, int z ){
    int ans=(x+y+z)/3;
    cout<<"The average of "<<x<<" "<<y<<" and "<<z<<" is "<<ans<<"."<<endl;
    cout<<"i am in func 2"<<endl;
}

int main(){

    int number;

    int a=10;
    int b=16;
    averageprinter(a,b);

    int x=154;
    int y=26;
    averageprinter(x,y);

    int m=497;
    int n=7;
    int o=100;
    averageprinter(m,n,o);

    return 0;
}