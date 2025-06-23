#include<iostream>
using namespace std;

class monomial{
    public:
        int m;
        int c;

        //parameterised constructor
        monomial(int m, int c){
            // cout<<"parameterised constructor is called"<<endl;
            this->m=m;
            this->c=c;
        }
        //default constructor
        monomial(){
            // cout<<"default constructor is called"<<endl;
            this->m=0;
            this->c=0;
        }

        //copy constructor
        monomial( monomial &obj ){
            // cout<<"copy constructor is called"<<endl;
            this->m = obj.m;
            this->c = obj.c;
        }

        //deconstructor-->
        ~monomial(){
            // cout<<"deconstructor is called"<<endl;
        }

        void display(){ //3x
            if(m==0){
                cout<<c<<endl;
            }
            else if(c==0){
                cout<<m<<"x"<<endl;
            }
            else{
                cout<<m<<"x+"<<c<<endl;
            }
        }

        void sum( monomial &o1, monomial &o2 ){
            this->m=o1.m+o2.m;
            this->c=o1.c+o2.c;
        }

        void sum( monomial &o1, monomial &o2, monomial &o3 ){
            this->m=o1.m+o2.m+o3.m;
            this->c=o1.c+o2.c+o3.c;
        }

};

// void sum(int a, int b){
//     cout<<a+b;
// }

// void sum(int a, int b, int c){
//     cout<<a+b+c;
// }

int main(){
    //polymorphism
    
    monomial m1(2,3);
    monomial m2(4,5);
    monomial m3(3,4);
    monomial m4;
    m4.sum(m1,m2,m3);
    m4.display();
    
    monomial m5;
    m5.sum(m3,m4);
    m5.display();


    return 0;
}