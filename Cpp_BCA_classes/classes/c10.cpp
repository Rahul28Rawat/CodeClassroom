//INHERITANCE
#include<iostream>
using namespace std;


// The capability of a class to derive properties and characteristics from another class is called Inheritance. 
// Inheritance is one of the most important features of Object Oriented Programming in C++. 

//Private values are never inherited.
//public values are always inherited.

class college{
    private:
        bool married;
    public:
        int id_number=-1;
        string name="";
        int age=-1;
        bool uniform;
        bool ispresent;

        college(college obj){

        }
};

class student:public college{
    public:
        int university_roll_no=1;
        int marks;
        string branch="";
};

class teacher: private college{
    public:
        string subject;
        int salary;
        void namesetter(string name){
            this->name=name;
        }
        string namegetter(){
            return this->name;
        }
};

int main(){

    // college person1;
    // person1.id_number=1;
    // person1.name="John";
    // person1.age=20;
    // person1.uniform=true;
    // person1.married=true;
    // cout<<person1.id_number<<endl<<person1.name<<endl<<person1.age<<endl<<
    // (person1.uniform?"they have unifrom":"no uniform")<<endl;

    // student s1;
    // s1.id_number=200;
    // s1.name="muskan";
    // s1.university_roll_no=200311;
    // s1.branch="cse";
    // s1.married=true;
    // cout<<"all is well";

    teacher t1;
    t1.subject="english";
    t1.salary=10000;
    t1.namesetter("Rahul");
    
    cout<<"all is well";


    return 0;
}