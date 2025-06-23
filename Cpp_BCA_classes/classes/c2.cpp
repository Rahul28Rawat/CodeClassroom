#include<iostream>
using namespace std;

class CocaCola{
    public:
    int sugartp=12;
    int water=200;
    bool preservatives=true;
    bool color=true;
    double sizeofBottle=1.5;

    CocaCola( int sugartp, int water, bool preservative, bool color, double sizeofBottle ){
        this.sugartp=sugartp;
        this.water=water;
        this.preservatives=preservative;
        this.color=color;
        this.sizeofBottle=sizeofBottle;

    }

    CocaCola(){

    }

    CocaCola(double size){
        sizeofBottle=size;
    }

    CocaCola(bool col){
        color=col;
    }

    void properties(){
        cout<<"The size of the bottle is "<<sizeofBottle<<" liters."<<endl;
        cout<<"sugar content is "<<sugartp<<" tablespoons."<<endl;
        cout<<"water content is "<<water<<" milliliters."<<endl;
        cout<<endl;
    }    

};

int main(){

    CocaCola bottle1(1.0);
    bottle1.properties();
    

    CocaCola dietcoke(3,300,false,false,1.5);
    dietcoke.properties();

    CocaCola familypack;
    familypack.sizeofBottle=2.5;
    familypack.sugartp=25;
    familypack.water=1500;
    familypack.properties();

    CocaCola miranda(true);
    CocaCola pepsi(2.5);


    return 0;
}