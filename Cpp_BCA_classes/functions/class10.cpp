#include<iostream>
using namespace std;

//functions, patterns, loops, conditional statement
//sorting(array)

//create a function which takes value of temperature in celcius and converts it into fareinite,
//and returns the value.

double conversion( int C ){
    double F = (C*9/5)+ 32;
    return F;
}

//C = x°C
//F = x*(9/5) + 32

int main(){

    int c;
    cin>>c;
    double ans= conversion(c);
    cout<<ans;

}