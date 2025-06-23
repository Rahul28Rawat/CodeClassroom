#include<iostream>
using namespace std;

// class is a blueprint for an object 
// class node{
//     int data;
//     char alpha;
// };
//public,private,protected
//getter setter

class student{
    public:
        string name;
        int age;
        char section;

        void details(){
            cout<<"Name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"section: "<<section<<endl;
        }

        

    private:
        int marks;
        void marksSetter(int val){
            marks=value;
        }
};

int main(){

    student s1;
    s1.name="rahul";
    s1.age=21;
    s1.section='A';
    s1.
    s1.details();

    student s2;
    s2.name="shaurya";
    s2.age=19;
    s2.section='B';
    s2.details();
    
    return 0;
}