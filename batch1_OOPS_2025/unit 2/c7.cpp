#include<iostream>
using namespace std;

// linear equation
class equation{
        int a;
        int b;
    public:
        //ax+b
        void printEquation(){
            cout<<"Equation: "<<a<<"x+"<<b<<endl;
        }
        equation(int x, int y){
            a=x;
            b=y;
        }
        equation(){}

        friend equation equationSum(equation,equation);
};

//normal function
equation equationSum(equation o1, equation o2){
    equation o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    return o3;
}

int main(){

    equation e1(7,3);
    e1.printEquation();

    equation e2(5,2);
    e2.printEquation();

    equation e3=equationSum(e1,e2);
    e3.printEquation();
    
    return 0;
}

// 7x+3
// 2x+5
//=5x-2
// friend function