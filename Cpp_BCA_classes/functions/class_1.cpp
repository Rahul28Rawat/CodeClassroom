#include<iostream>
using namespace std;

//FUNCTION
//block of code which we can run anytime by calling the function

//TYPE OF FUNCTION
// 1) void function with no parameters
// 2) void function with parameters

//returntype function_name( parameters ){
//    block of code
//}

void numprinter(){
    for( int i=1; i<=5; i++){
        cout<<i<<endl;
    }  
}

void vowelprinter(){
    cout<<"a,e,i,o,u"<<endl;
}

//compiler calls main function
//compiler --> calls --> main --> call --> numprinter function

int main(){

    cout<<"I m rahul rawat"<<endl;
    cout<<"i am happy"<<endl;
    vowelprinter();//call //resume
    int j=5;
    cout<<j<<endl;
    cout<<"this is a coding class"<<endl;
    numprinter(); //call //resume
    cout<<"1234890"<<endl;

    return 0;
}