#include<iostream>
using namespace std;

//create a function which takes 2 numbers as input and prints the percentage increase.
void percentage_increase( double a , double b ){
    double percentage= ((a-b)/b)*100;
    cout<<a<<" is greater than "<<b<<" by "<<percentage<<"%."<<endl;
}

//create a function which takes 2 number and prints the largest btw them and the percentage difference.
void largest( int x, int y ){
    if(x>y){
        cout<<x<<" is the largest number."<<endl;
        percentage_increase(x,y);
    }
    else{
        cout<<y<<" is the largest number"<<endl;
        percentage_increase(y,x);
    }
}


int main(){

    int m;
    int n;
    cout<<"Enter the first number: ";
    cin>>m;
    cout<<"Enter the second number: ";
    cin>>n;
    largest(m,n);

    return 0;
}