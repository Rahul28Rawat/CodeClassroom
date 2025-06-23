#include<iostream>
using namespace std;

class base{
    public:
        int baseX=100;
        virtual void display(){
            cout<<"I am base class"<<endl;
        }
};
// baseP=&c1;
// baseP->display();

class child: public base{
    public:
        int childX=10;
        virtual void display(){
            cout<<"I am child class"<<endl;
        }
};

class grandchild: public child{
    public:
        void display(){
            cout<<"I am grandchild class"<<endl;
        }
};


int main(){

    // int a=3;
    // float b=4.3f;
    // double c;
    // bool d;
    //pointers are special variables which store address of other variables
    // cout<<p<<endl;
    // float *q=&b;
    // cout<<*q<<endl;
    // cout<<*p<<endl;

    base b1;
    base *baseP;
    baseP=&b1;


    child c1;
    child *childP;
    childP=&c1;

    // cout<<childP->baseX<<endl;
    // b1.display();
    // //dereference 
    // // (*baseP).display();
    // baseP->display();

    baseP=&c1;
    baseP->display();

    // grandchild gc1;
    // childP=&gc1;
    // childP->display();

    // childP--> display child

    // childP --> childX
    //        --> baseX   
    //        --> Display

    // baseP --> baseX
    //       --> Display
    

    return 0;
}