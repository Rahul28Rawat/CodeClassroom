#include<iostream>
using namespace std;

// *
// **
// ***

// create a function which prints above pattern
void pattern1( int row ){
    for( int i=1; i<=row; i++){
        for( int j=1; j<=i; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}

// ******1****** //stars = total no of rows
// ******2******
// ******3******
// ******4******
// ******5******
// ******6******

// create a function which prints above pattern
void pattern2( int row=5 ){
    for( int i=1; i<=row; i++){
        for( int j=1; j<=row; j++ ){
            cout << "*";
        }
        cout <<i;
        for( int j=1; j<=row; j++ ){
            cout << "*";
        }
        cout<<endl;
    }
}

//create a function which prints whether the number is even or odd
void oddeven( int number){
    if( number==1 || number==-1 ){
        cout<<number<<" is neither even nor odd."<<endl;
    }
    else if( number%2==0 ){
        cout<<number<<" is even."<<endl;
    }
    else{
        cout<<number<<" is odd."<<endl;
    }
}


// create a function which takes a number as input and prints whether it is prime number or not.
// prime no are those no jo sirf 1 ki table and apni table me ate hai
void primechecker( int number=7 ){

    bool prime=true;
    for( int i=2; i<=(number-1); i++){
        if(number%i==0){
            prime=false;
            break;
        }
    }
    
    if(prime==true){
        cout<<"it is a prime number."<<endl;
    }
    else{
        cout<<"it is not a prime number."<<endl;
    }

}


int main(){

    // int n;
    // cin>>n;
    primechecker(673);

    return 0;
}