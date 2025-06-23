#include<iostream>
using namespace std;

//inheritance
class father{
    public:
        int fingers=6;
        //A virtual function (also known as virtual methods) is a member function that 
        //is declared within a base class and is re-defined (overridden) by a derived class
        void display(){
            cout<<"I am father class"<<endl;
            cout<<"Father has "<<fingers<<" fingers"<<endl;
        }
};

class mother{
    public:
        // void display(){
        //     cout<<"hi I am mother class"<<endl;
        // }
};

class child: public mother, public father{
    public:
        int teeth=32;
        void display(){
            cout<<"I am child class"<<endl;
        }
};


int main(){

    child c1;
    c1.display();

    return 0;
}