#include<iostream>
using namespace std;

/*
1) what are classes
2) what are objects
3) classes ke data members/properties/class variable
4) classes ke member methods/functions
5) access modifiers
*/

//KEYWORD?--> any word which holds a specific meaning in C++.

class Student{
    private:
        string pronoun="His";
        string pronoun2="He";
        int marks=0;
    public:
        string name="jay";
        int age=10;
        int rollno=1;
        bool commerce=true;
        int standard=6;
        bool boy=true;

        //constructors
        Student( string n, int a, int r, bool c, int s, bool b ){
            this->name=n;
            age=a;
            rollno=r;
            commerce=c;
            standard=s;
            boy=b;
        }

        Student( string n, int a, int r, int s){
            name=n;
            if(a>10){ age=a; }
            rollno=r;
            standard=s;
        }

        //default constructor
        Student(){

        }

        student( int m){
            if(m>0){
                marks=m;
            }
        }
        //THIS --> it is a keyword which points to properties of that object which has called it.
        Student( string name, int rollno ){
            this->name=name;
            rollno=rollno;
        }

        void description(){
            if(boy==false){
                pronoun="Her";
                pronoun2="She";
            }
            cout<<"Name of the student is "<<name<<"."<<endl;
            cout<<pronoun<<" age is "<<age<<"."<<endl;
            cout<<pronoun<<" roll no is "<<rollno<<"."<<endl;
            cout<<pronoun2<<" is studying in "<<standard<<"th standard."<<endl;
            if(commerce==true && standard>10 ){
                cout<<pronoun<<" stream is commerce."<<endl;
            }
            else if( commerce==false && standard>10 ){
                cout<<pronoun<<" stream is science."<<endl;
            }
            cout<<"-----------------x----------------------"<<endl;
        }

};

int main(){
    //initialize
    // what are constructors-> constructors are created to initialize properties of an object 
    // at the time of declaration of our object.
    Student person1("Muskan",17,19,true,12,false);
    person1.description();

    // Student person2;
    // person2.name="Riya";
    // person2.age=18;
    // person2.rollno=20;
    // person2.standard=12;
    // person2.boy=false;
    // person2.description();

    Student person3("Piyush",15,21,10);
    person3.description();

    Student person4("rahul",23);

    Student person5(-100);

    return 0;
}