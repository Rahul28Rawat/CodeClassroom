// modifiers
#include<iostream>
using namespace std;

class student{
    public:
        //data member, properties
        string name;
        int rollno;

        //member function
        void details(){
            cout<<"name: "<<name<<endl;
            cout<<"Rollno: "<<rollno<<endl;
        }
        void marksprinter(){
            cout<<marks<<endl;
        }
    private:
        int marks=0;
};

int main(){

    student s1;
    //setting value
    s1.name="Rahul";
    s1.rollno=21;

    s1.marksprinter();


    // object cannot access private variable.
    // functions can access private variables.
    // object can access public functions.
    
    return 0;
}