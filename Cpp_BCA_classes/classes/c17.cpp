#include <iostream>
using namespace std;

// HIERARCHIAL INHERITANCE
//  living things--> animals
//  living things--> plants
//  living things--> MicroOrganisms

class car
{
    public:
        int seats = 4;
        int windows=4;
        string color="White";
        void display(){
            cout<<"I am a car blueprint."<<endl;
        }
};

class Hyundai: public car
{
    public:
        string model="Eon";
        void display(){
            cout<<"HYUNDAI : New Thinking, New Possibilities."<<endl;
        }
};

class tata: public car
{
    public:
        string model="Nano";
        bool BestQuality=true;
        void display(){
            cout<<"TATA : JAGO RE!"<<endl;
        }
};

//class maruti 



int main()
{

    Hyundai car1;
    // cout<<car1.model<<endl;
    // cout<<car1.seats<<endl;
    // cout<<car1.windows<<endl;   
    // cout<<car1.color<<endl;
    cou<<car1.BestQuality<<endl;
    car1.display();



    return 0;
}