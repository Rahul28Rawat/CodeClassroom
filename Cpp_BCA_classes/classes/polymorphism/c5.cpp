#include<iostream>
using namespace std;

// run time polymorphism vs compile time polymorphism
// Late binding VS early binding

//pure virtual base class //abstact class
class base{
    public:
        int a=5;
        //pure virtual function
        void display(){
            cout<<"Base class"<<endl;
        }
};

class child : public base{
    public: 
        int b=10;
        void display(){
            cout<<"Child class is running "<<endl;
        }
};

int main(){

    base b1;

    child c1;
    base* baseP;
    baseP=&c1;
    baseP->display();


    return 0;
}