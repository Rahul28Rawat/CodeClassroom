#include<iostream>
using namespace std;

//how compiler starts reading the code
//step 1 - compiler reads all the header files.
//step 2 - compiler reads all the function defination.
//step 3 - Starts reading Main function till it ends.

// ReturnType Function_Name ( parameters ) {   }

void tablePrinter(){
    cout<<"Hello world"<<endl;
}

string helloprinter(){
    return "Hello world";
}

void sumprinter( int a, int b ){
    cout<<a+b<<endl;
}

int main(){

    // tablePrinter(); //function call karna is equal to function ke andar ka code execute karna.

    // string ans= helloprinter();
    // cout<<ans<<endl;
    
    sumprinter(4,5);

    return 0;
}