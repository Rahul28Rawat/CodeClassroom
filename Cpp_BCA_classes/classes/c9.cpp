#include<iostream>
using namespace std;

//DRY-> do not repeat yourself

//parent
class vehicle{
    public:
        int tyres=0;
        int power=0;
        bool engine=false;
        bool ambience=false;
        string color="white";
        string owner="";
        int noOfseats=2;

        void display(){
            cout<<"Owner of this vehicle is: "<<owner<<endl;
            cout<<"Tyres: "<<this->tyres<<endl;
            if(ambience){ cout<<"It has ambience lights."<<endl; }
            cout<<"color: "<<color<<endl;
            if(engine){ cout<<"It has a "<<this->power<<"cc engine."<<endl; }
            cout<<"Number of seats: "<<noOfseats<<endl;
        }
};

//child class
class bike: public vehicle{
    public:
        int speaker=100;
        int battery=1000;
        bool helmet=true;

        void display(){
            cout<<"Owner of this vehicle is: "<<owner<<endl;
            cout<<"this is a bike"<<endl;
            cout<<"Tyres: "<<this->tyres<<endl;
            if(ambience){ cout<<"It has ambience lights."<<endl; }
            cout<<"color: "<<color<<endl;
            if(engine){ cout<<"It has a "<<this->power<<"cc engine."<<endl; }
            cout<<"Number of seats: "<<noOfseats<<endl;
            cout<<"speaker: "<<speaker<<"dc"<<endl;
            cout<<"It has  handles for steering"<<endl;
            cout<<"It has a "<<battery<<"mah battery"<<endl;
            if(helmet){ cout<<"It has a helmet."<<endl; }
        }
};

class aeroplane{
    public:
        int tyres=3;
        int power=1500;
        int noOfseats=100;
};

class car{
    public:
        int tyres=4;
        int power=600;
        int noOfseats=4;
};

int main(){

    bike b1;
    b1.owner="Tanishka";
    b1.ambience=true;
    b1.engine=true;
    b1.tyres=2;
    b1.power=300;
    b1.display();

    return 0;
}