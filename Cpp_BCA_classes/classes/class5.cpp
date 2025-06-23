//getters and setters

#include<iostream>
using namespace std;

class employee{
    // access modifers
    private:
        int salary=25000;
        int age=18;
    public:
        string name="";
        string department="";
        int education=10;
        bool validEmp=true;

        //constructor
        employee( string name, int age, string department, int education){
            this->name=name;
            if(age>=18){
                this->age=age;
            }else{
                this->age=age;
                validEmp=false;
            }
            this->department=department;
            this->education=education;
        }
        employee(string name, int age, string department){
            this->name=name;
            if(age>=18){
                this->age=age;
            }else{
                this->age=age;
                validEmp=false;
            }
            this->department=department;
        }
        employee(){
        }

        void salaryslip(){
            cout<<"your salary is "<<salary<<"rs."<<endl;
        }

        void display(){
            if(validEmp==true){
                cout<<"Name: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
                cout<<"Department: "<<department<<endl;
                cout<<"Education: "<<education<<endl;
                cout<<"Salary: "<<salary<<endl;
            }else{
                cout<<"You are too young to join company"<<endl;
                cout<<"age: "<<age<<endl;
            }
        }
};

int main(){

    employee emp1("Rahul",17,"IT");
    emp1.display();

    
    return 0;
}