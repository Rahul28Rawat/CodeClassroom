#include<iostream>
using namespace std;

//constructors....

//class is a user defined datatype
//car -> color,brand,running,stop
class car{
    public:
        //data members, properties, attributes
        string brand;
        string color;

        //member methods, member function
        void CarRun(){
            cout<<"car is running."<<endl;
        }
        void CarStop(){
            cout<<"car is parked."<<endl;
        }
        //constructors are used to initiate data members of class.
        //types of constructor - 
        // default constructor, 
        // parameterised constructor, 
        // unparameterised constructor
        // copy constructor
        // deconstructor


        //default constructor
        // car(){}
        //parameterised constructor
        car(string mybrand, string mycolor){
            brand=mybrand;
            color=mycolor;
            cout<<"constructor 1 is called"<<endl;
        }
        //unparameterised constructor
        // car(){
        //     cout<<"constructor 2 is called"<<endl;
        // }
        car(){
            brand="maruti";
            color="Grey";
        }

        car(string mybrand){
            brand=mybrand;
            color="grey";
            cout<<"constructor 3 is called"<<endl;
        }
        
};

int main(){

    //object -> instance of a class.
    car c1("toyota","black");
    car c2("bmw","red");
    car c3("maruti","white");
    car c4;

    return 0;
}