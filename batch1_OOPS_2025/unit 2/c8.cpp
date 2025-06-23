#include<iostream>
using namespace std;

// ax+by+c

class QuadraticEquation{
    int a;
    int b;
    int c;
    public:
        void printEquation(){
            cout<<a<<"x+"<<b<<"y+"<<c<<endl;
        }
        //constructor is used to initialise data members.
        QuadraticEquation(int a, int b, int c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        QuadraticEquation(){}
        friend QuadraticEquation equationSum(QuadraticEquation, QuadraticEquation);
};

QuadraticEquation equationSum(QuadraticEquation o1, QuadraticEquation o2){
    QuadraticEquation o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    o3.c=o1.c+o2.c;
    return o3;
}

int main(){

    QuadraticEquation q1(5,6,8);
    q1.printEquation();
    QuadraticEquation q2(3,1,2);
    q2.printEquation();
    QuadraticEquation q3=equationSum(q1,q2);
    q3.printEquation();

    
    return 0;
}


