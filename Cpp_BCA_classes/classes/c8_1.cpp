#include<iostream>
using namespace std;
// 2x+3
//here 2 is cofficent and 3 is constant
class monomial{
    public:
        int m;
        int c;

        void sumOfMonomial( monomial z, monomial q);

        monomial(int a, int b){
            m=a;
            c=b;
            display();
        }

        void display(){
            cout<<m<<"x+"<<c<<endl;
        }

};

void monomial::sumOfMonomial( monomial z, monomial q){
    this->m= z.m+ q.m;
    this->c= z.c+ q.c;
}


int main(){

    monomial f1(4,2);
    monomial f2(3,5);  

    monomial f3(0,0);
    f3.sumOfMonomial(f1,f2);
    f3.display();

    return 0;
}