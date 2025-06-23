#include<iostream>
using namespace std;

//Parent class- child class

//single class --> multiple child class banate hai ( hierarchal inheritance )
// single class --> single child class (single inheritance)
//multilevel inheritance 

// living_things--> animals-->mammals->dog 

class animal{
    //access modifier
    public:
        int teeth;
        bool tail;
        void animalsound(){
            cout<<"The animal makes a sound"<<endl;
        }
};

class dog : public animal {
    public:
        int soundwave=200;
        string dogname;
        void animalsound(){
            cout<<"bhaw bhaw"<<endl;
        }

};

class cat : public animal {
    public:
        string name="bilo";
        string color="white";
        void animalsound(){
            cout<<"meaw meaw"<<endl;
        }

};

int main(){

    animal a1;
    a1.animalsound();

    dog d1;
    d1.animalsound();

    cat c1;
    c1.animalsound();


    return 0;
}