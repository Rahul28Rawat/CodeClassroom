#include<iostream>
using namespace std;

class coordinates{
    public:
    int x, y;

    //constructor
    coordinates( int a, int b){
        x = a;
        y = b;
    }
    coordinates(){
    }

    void sumOfCoordinates( coordinates o1, coordinates o2 ){
        this->x=o1.x+o2.x;
        this->y=o1.y+o2.y;
    }

    void valuesxy(){
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }

};



int main(){

    coordinates p1(3,7);
    coordinates p2(1,2);
    coordinates p3(0,0);
    p3.sumOfCoordinates(p1,p2);
    p1.valuesxy();
    p2.valuesxy();
    p3.valuesxy();

    return 0;
}