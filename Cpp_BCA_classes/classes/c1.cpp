#include<iostream>
using namespace std;
//class is a blueprint.
//object is a instance of class.

class car{
    public:
    int tyre=4;
    string color="White";
    int engine=1200;
    int speakers=4;
    int seats=4;
    double price=10000.0;
};


int main(){

    car audi;
    audi.price=90000;
    cout<<"Price of audi = "<<audi.price<<endl;
    //objectName.PropertyName
    // cout<< audi.tyre<<endl;
    // cout<<audi.color<<endl;
    cout<<audi.engine<<endl;

    car Nano;
    Nano.price=2000;
    cout<<"Price of Nano = "<<Nano.price<<endl;

    car Eon;
    Eon.price=15000;
    cout<<"Price of Eon = "<<Eon.price<<endl;

    return 0;
}