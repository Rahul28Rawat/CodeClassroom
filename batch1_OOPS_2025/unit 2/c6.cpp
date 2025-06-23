#include<iostream>
using namespace std;

//products -> price, id, expire

class product{
    public:
        //data members, properties
        string name;
        int price;
        int id;
        bool expired;
        bool isMerchant;

        //member functions, methods
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
        int profitGetter(){
            if(isMerchant){
                return profit;
            }
            else{
                return -1;
            }
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

int main(){
    
    product p1("milk",1001,70,false,false);
    p1.profitSetter(70);
    cout<<"profit:"<<p1.profitGetter()<<endl;


    return 0;
}