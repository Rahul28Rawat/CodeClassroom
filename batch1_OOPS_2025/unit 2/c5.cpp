#include<iostream>
using namespace std;

//products -> price, id, exipire

class product{
    public:
        string name;
        int price;
        int id;
        bool expired;
        bool isMerchant;

        void details(){
            cout<<"Current product : "<<name<<endl;
            cout<<"ID of "<<name<<": "<<id<<endl;
            cout<<"Price of "<<name<<" "<<price<<"rs."<<endl;
            if(expired)
                cout<<"The current Item is Expired!!"<<endl;
            else
                cout<<"The current Item is still Fresh!!"<<endl;  
            if(isMerchant)
                cout<<"Merchant profit on this item is : "<<profit<<"%."<<endl;
        }
        //Setter
        void profitSetter(int val){
            if(isMerchant){
                profit=val;
            }
            else{
                profit=50;
            }
        }

        //getter
        void profitprinter(){
            if(isMerchant)
                cout<<"profit="<<profit<<endl;
        }

        //constructor
        product(string name, int price, int id, bool expired, bool isMerchant){
            this->name=name;
            this->price=price;
            this->id=id;
            this->expired=expired;
            this->isMerchant=isMerchant;
        }

        product(){

        }

        private:
            int profit=50;
};

void sum(int a, int b){
    cout<<a+b;
}

int main(){
    
    //whenever a object calls a function, then the function will always refer to that object's properties.
    product p1("milk",1001,70,false,true);
    p1.profitSetter(40);
    p1.profitprinter();
    // p1.details();

    return 0;
}