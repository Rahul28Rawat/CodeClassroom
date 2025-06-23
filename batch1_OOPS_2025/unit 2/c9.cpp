#include<iostream>
using namespace std;

class human{
    string name;
    int chocolate;
    public:
    //function inside a class can access it private values
    void HumanDetails();
    
    //constructor is also a function and function inside a class can access it private values
    human(string name, int chocolate){
        this->name=name;
        this->chocolate=chocolate;
    }
    human(){

    }

    friend void sumchocolates(human,human);
};

//scope resolution operator
void human::HumanDetails(){
    cout<<name<<" has "<<chocolate<<" chocolates."<<endl;
}

//friend function outside a class can access its private values
void sumchocolates(human h1, human h2){
    int total= h1.chocolate + h2.chocolate;
    cout<<"total chocolates: "<<total<<endl;
}

int main(){
    
    human c1("ram",4);
    c1.HumanDetails();

    human c2("jay",6);
    c2.HumanDetails();

    sumchocolates(c1,c2);



    return 0;
}