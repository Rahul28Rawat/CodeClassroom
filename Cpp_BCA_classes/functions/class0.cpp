#include<iostream>  //header file
#include<math.h>
using namespace std; //header file

//how compiler starts reading the code
//step 1 - compiler reads all the header files.
//step 2 - compiler reads all the function defination.
//step 3 - Starts reading Main function till it ends.

// functions are a block of code which we can run anytime by calling them

//  6......6.33.........7
// floor              ceil

// pre-defined function
// user-made function

void average(){

}

//ques 1- create a function which do not take anything as input and prints "hello world"
void helloprinter(){
    cout<<"hello printer function is executed."<<endl;
}










//ques 2- create a function which takes 2 numbers as input and prints their sum
void sumfunc( int a, int b ){ //parameters
    int sum=a+b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
}



//FUNCTION OVERLOADING
//ques 3 - create a function which takes two numbers as input and divides them and prints thier quotient
void quotientfunc(double x, double y){
    double quotient = x/y;
    cout<<"the quotient is "<<quotient<<endl;
    cout<<"I am in 1st function";
}

void quotientfunc( int a, int b ){
    int quotient =a/b;
    cout<<"the quotient is "<<quotient<<endl;
    cout<<"I am in 2nd function";
}

// void quotientfunc( double a ){
//     double quotient = a/10; 
//     cout<<"the quotient is "<<quotient<<endl;
//     cout<<"I am in 3rd function";
// }



//TYPES OF FUNCTION
//1. void function with no parameters  
//2. void function with parameters
//3. function with return type and no parameters

//jo values ko apne app print karte hai  3,4--> 7 --> print
// dusre vo jo value ko calculate karke mujhe ans vapis return karte hai. 3,4 --> 7 --reurn 

// int productfunc( int a, int b ){
//     int product = a*b;
//     return product;
// }

//ques 3 - create a function which takes 3 numbers as input and prints their product
// void productfunc( int a, int b, int c ){
//     int product= a*b*c;
//     cout<<"the product is "<<product<<endl;
// }

// string nameprinter(string name){
//     string ans= "I am "+ name;
//     return ans;
// }

// int dukanwala( int a, int b ){
//     int ans = a*b;
//     return ans;
// }

// void dukanwala( int a, int b ){
//     int ans = a*b;
//     cout<< ans;
// }

// void bankpassword(){

// }

// string bankemployee( string password ){
//     return password;
// }








//Q1- create a function which takes 2 numbers as input and returns their sum
//Q2- create a function which takes 2 numbers as input and prints the greatest number.

int main(){

    




    return 0;
}
