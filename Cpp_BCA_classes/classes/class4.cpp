#include<iostream>
using namespace std;

class house{
    public:
    int windows=4;
    int doors=2;
    int rooms=3;
    int price=50000;
    bool tier1city=true;

    house(int w, int d, int r, int p, bool t){
        windows=w;
        doors=d;
        rooms=r;
        price=p;
        tier1city=t;
    }  

    house(int r){
        rooms=r;
    }

    house(){

    }

    void display(){
        cout<<"Number of windows: "<<windows<<endl;
        cout<<"Number of doors: "<<doors<<endl;
        cout<<"Number of rooms: "<<rooms<<endl;
        cout<<"Price: "<<price<<endl;
        if(tier1city==true){
            cout<<"It is Located in tier 1 city"<<endl;
        }
        else{
            cout<<"It is not Located in tier 1 city"<<endl;
        }
        cout<<endl;
    }

};

void sum(int a, int b, int c){
    cout<<"Sum of three numbers: "<<a+b+c<<endl;
}

int main(){

    house mannat(8,6,10,10000,false);
    mannat.display();

    house villa(2,1,2,5000,true);
    villa.display();

    house bunglow(7);
    bunglow.display();

    house jannat;
    jannat.display();

    return 0;
}