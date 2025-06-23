#include<iostream>
using namespace std;

class X{
    public:
        int z=5;
};

class A: virtual public X{
    public:
        int a=5;
};

class B:virtual public X{
    public:
        int a=10;
};

class C : public A, public B {
    public:
        int a=B::a;
        void display(){
            cout<<"value of z = "<<z<<endl;
        }

};

int main(){

    A a1;
    B b1;
    C c1;
    cout<<a1.a<<endl;
    cout<<b1.a<<endl;
    c1.display();

    return 0;
}