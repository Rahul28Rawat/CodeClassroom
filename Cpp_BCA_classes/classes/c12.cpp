#include<iostream>
using namespace std;

// there are three types of constructors
// 1) default constructor

class car{
    public:
    int tyre;
    string color;
    int engine;
    int speakers;
    int seats;
    double price;

    //constructor-> It is used to initialise the properties of object.
    // Constructors are methods that are automatically executed every time you create an object. 
    // The purpose of a constructor is to construct an object and assign values to the object’s members

    //default constructor
    car(){
        this->tyre=4;
        this->color="red";
        this->engine=2;
        this->speakers=4;
        this->seats=4;
        this->price=10000.0;
    }

    //parameterized constructor
    car(int tyre, string color, int engine, int speakers, int seats, double price){
        this->tyre=tyre;
        this->color=color;
        this->engine=engine;
        this->speakers=speakers;
        this->seats=seats;
        this->price=price;
    }

    car(int s, string color){
        this->seats=s;
        this->tyre=4;
        this->color=color;
        this->engine=2;
        this->speakers=4;
        this->price=10000.0;
    }

    //copy constructor
    car( car *obj1){
        this->seats=(*obj1).seats;
        this->tyre=(*obj1).tyre;
        this->color=(*obj1).color;
        this->engine=(*obj1).engine;
        this->speakers=(*obj1).speakers;
        this->price=(*obj1).price;
    }

    //I want to create a constructor which helps me to make a copy of another object

    //behaviours/methods/functions/member method
    void display(){
        cout<<"Tyres: "<<tyre<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Engine: "<<engine<<endl;
        cout<<"Speakers: "<<speakers<<endl;
        cout<<"Seats: "<<seats<<endl;
        cout<<"price: "<<price<<endl;
    }
};

void sum(int a, int b){
    cout<<"Sum of two numbers is: "<<a+b<<endl;
}

int main(){

    car c1(10,"magenta");
    // c1.display();
    // int x=3,y=6;
    // sum(x,y);

    car c2(&c1);
    c2.display();
    
    //copy constructor copies value of one object into another


    return 0;
}