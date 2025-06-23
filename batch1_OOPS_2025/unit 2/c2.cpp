//this keyword 
#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int rollno;
        bool ispresent;

        string checkAttendence(){
            if(ispresent==true){
                return name+" is present today";
            }
            else{
                return name+" is absent today";
            }
        }

        void details(){
            cout<<"name: "<<name<<endl;
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"attendence: "<<checkAttendence()<<endl;
        }

        student(){

        }
        //this keyword
        student(string name, int rollno, bool ispresent){
            this->name=name;
            this->rollno=rollno;
            this->ispresent=ispresent;
        }
        
};

int main(){

    student s1("Rahul",21,true);
    s1.details();
    
    return 0;
}