#include<iostream>
using namespace std;

// amount=0+500+1200+ (250*8)
// units=600-50= 550-100=450-200=250-250=0


//units used        amount
//first 50 units     0
//next 100 units     5/unit
//next 200 units     6/unit
//remaining units    8/unit




class eBill{
    public:
        string Cname;
        int acno;
        int no_of_units=80;
        int amount;

        eBill( string c, int an, int u, int a ){
            this->Cname=c;
            this->acno=an;
            this->no_of_units=u;
            this->amount=a;
        }
        
        //150
        // amount=0+500+1200+(8*150)
        void totalBill(){
            amount=0;
            if(no_of_units<=50){
                amount=0;
            }
            else{
                no_of_units=no_of_units-50;
                if(no_of_units<=100){
                    amount=amount+(5*no_of_units);
                }
                else{
                    amount+=500;
                    no_of_units=no_of_units-100;
                    if(no_of_units<=200){
                        amount=amount+(6*no_of_units);
                    }
                    else{
                        amount+=1200;
                        no_of_units=no_of_units-200;
                        amount=amount+(8*no_of_units);
                    }
                }
            }

            cout<<"Hi "<<Cname<<", your bill is "<<amount<<endl;
        }

};

int main(){

    eBill b1("Tanishka",97654,500,0);
    b1.totalBill();

    return 0;
}