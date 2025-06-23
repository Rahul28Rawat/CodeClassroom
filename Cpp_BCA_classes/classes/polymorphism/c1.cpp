#include<iostream>
using namespace std;

class father{
    public:
        string name="jay";
        void display(){
            cout<<"father name is "<<name<<endl;
        }
};

class mother{
    public:
        int age=40;
        void display(){
            cout<<"mother age is "<<age<<endl;
        }
};

class child: public father, public mother{
    public:
        void display(){
            mother::display();
        }
};



int main(){

    child c1;
    c1.display();

    return 0;
}