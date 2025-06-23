#include<iostream>
using namespace std;

//(2x+4)*(3x+5) = 6x^2 + 22x + 20

class monomial{
    public:
        int m;
        int c;

        friend void monomialProduct( monomial o1, monomial o2 );
        void display();

        //parameterized constructor
        monomial(int m, int c){
            this->m=m;
            this->c=c;
        }
        //default constructor
        monomial(){
            this->m=0;
            this->c=0;
        }

        //copy constructor
        monomial( monomial &obj ){
            this->m = obj.m;
            this->c = obj.c;
        }


        void sum( monomial &o1, monomial &o2 ){
            this->m=o1.m+o2.m;
            this->c=o1.c+o2.c;
        }

};

void monomialProduct( monomial o1, monomial o2 ){
    //(2x+4)*(3x+5) = 6x^2 + 22x + 20
    int a= o1.m * o2.m;
    int b= (o1.m * o2.c) + (o1.c * o2.m);
    int z= o1.c*o2.c;
    cout<<a<<"x^2 +"<<b<<"x +"<<z<<endl;
}

void monomial::display(){ //3x
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


// class binomial{
//     //ax^2 +bx + c
//     public:
//         int a;
//         int b;
//         int c;

//         binomial(int a, int b, int c){
//             this->a=a;
//             this->b=b;
//             this->c=c;
//         }

//         binomial(){
//             this->a=0;
//             this->b=0;
//             this->c=0;
//         }

//         display(){
//             cout<<a<<"x^2 +"<<b<<"x +"<<c<<endl;
//         }

// };

int main(){

    //take 2 monomials as input and then return a third monomial which is the sum of previous two.
    //instance of class
    monomial m1;
    cout<<"enter cofficent and constant of first monomial: ";
    cin>>m1.m>>m1.c;

    monomial m2;
    cout<<"enter cofficent and constant of second monomial: ";
    cin>>m2.m>>m2.c;
    
    monomial m3;
    m3.sum(m1,m2);
    m3.display();

    monomial m4=new monomial;
    int a=new int;

    // monomialProduct(m1,m2);

    return 0;
}