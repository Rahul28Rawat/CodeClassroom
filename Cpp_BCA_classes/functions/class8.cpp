#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****

// create a function which prints above pattern
void pattern1( int number){
    for(int j=1; j<=number; j++){ //ascending
        for( int i=1; i<=j; i++){
            cout << "*";
        }
        cout << endl;
    }
}

// ******1******
// ******2******
// ******3******
// ******4******
// ******5******
// ******6******

// create a function which prints above pattern
void pattern2( int row){
    for( int i=1; i<=row; i++ ){
        for( int j=1; j<=row; j++ ){
            cout << "*";
        }
        cout<<i;
        for( int j=1; j<=row; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}

//create a function which prints whether the number is even or odd
void oddeven(int number){
    if(number%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}

// create a function which takes a number as input and prints whether it is prime number or not.
void primechecker( int number ){
    bool prime=true;
    for( int i=2; i<number; i++){
        if(number%i==0){
            prime=false;
            break;
        }
    }
    if(prime==true){
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }
}

int main(){

    primechecker(55);

    return 0;
}