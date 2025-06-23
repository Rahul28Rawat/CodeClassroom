#include<iostream>
using namespace std;

class bill{
    public:
        int dishes;
        int drinks;
        bool cuisine=false;
        string name;
        
        //default constructor
        bill(){
            dishes=0;
            name="default";
            drinks=0;
            cuisine=false;
        }

        //parameterised constructor
        bill( string name, int dishes, int drinks, bool cuisine ){
            //"this" keyword is object ka pointer.
            (*this).name=name;
            this->dishes=dishes;
            this->drinks=drinks;
            this->cuisine=cuisine;
        }

        bill( string name, int dishes, int drinks ){
            //"this" keyword is object ka pointer.
            (*this).name=name;
            this->dishes=dishes;
            this->drinks=drinks;
        }

        bill( bill &o1){
            this->name=o1.name;
            this->dishes=o1.dishes;
            this->drinks=o1.drinks;
            this->cuisine=o1.cuisine;
        }

        // bill( bill *p){
        //     this->name=p->name;
        //     this->dishes=p->dishes;
        //     this->drinks=p->drinks;
        //     this->cuisine=p->cuisine;
        // }


        void totalbill(){
            cout<<"Total bill is: "<<endl;
            cout<<"Total dishes : "<<dishes<<endl;
            cout<<"Total drinks : "<<drinks<<endl;
            if(cuisine){
                cout<<"Hi "<<name<<", your total bill is "<<(150*dishes)+(50*drinks);
            }
            else{
                cout<<"Hi "<<name<<", your total bill is "<<(100*dishes)+(50*drinks);
            }
        }

};

int main(){

    bill b1("Rahul",5,2,true);
    bill b2("tanishka",1,1);
    bill b3(b1);
    // bill b3(&b1);


    
    return 0;
}