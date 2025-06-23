#include<iostream>
using namespace std;

//when we make functions then:
//No two functions can have same function defination.
//Function defination = returntype + name + parameters
//void sum 2
//void sum 3

//polymorphism--> 
// 1) compile time polymorphism --> function overloading, operator overloading
// 2) Run time polymorphism --> function overloading through virtual function

//friend classes

class father{
    public:
        string name="jay";
        int age=40;

        father(string name, int age){
            this->name= name;
            this->age=age;
        }
        father(){
            this->name="jay";
            this->age=40;
        }

        father(int age){
            this->age=age;
            this->name="Ram";
        }

        //polymorphism--> compile time polymorphism --> function overloading

        void display(){
            cout<<"father name is "<<name<<endl;
        }

        void display(int n){
            for( int i=0; i<=n; i++){
                cout<<"I am father "<<i<<endl;
            }
        }
        
};

// class child: public father{
//     public:
//         void display(){
//             mother::display();
//         }
// };



int main(){
    
    //pointers
    father o1;
    father *p=&o1;

    o1.display();
    (*p).display();
    p->display();



    return 0;
}