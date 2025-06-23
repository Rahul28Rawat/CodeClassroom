#include<iostream>
using namespace std;
int b=20;

//class--> blueprint
//object--> reality me chiz banne wali hai

//public and private keywords are access modifiers
//public--> public access modifier--> allows the object to access its properties
//private--> private access modifier--> Does not allows to access its properties

//getters and setters

class cakeRecipe{
    private:
        int eggs=4;
    public:
        int maida=250;
        int sugar=200;
        int oil=4;
        int water=100;
        int salt=1;
        int bakingsoda=4;
        string flavour="vanilla";
        bool birthdaycake=false;

        //getters
        int eggGetter(){
            return eggs;
        }

        //setters
        void setter(int a){
            eggs=a;
        }

        //member function/method
        //this function will print the properties of that object who calls it. 
        void display(){
            cout<<"Recipe for "<<flavour<<" cake"<<endl;
            cout<<"ingredients"<<endl;
            cout<<"maida: "<<maida<<endl;
            cout<<"sugar: "<<sugar<<endl;
            cout<<"eggs: "<<eggs<<endl;
            cout<<"oil: "<<oil<<endl;
            cout<<"water: "<<water<<endl;
            cout<<"salt: "<<salt<<endl;
            cout<<"bakingsoda: "<<bakingsoda<<endl;
            cout<<"flavour: "<<flavour<<endl;
            if(birthdaycake==true){
                cout<<"It is a birthday cake"<<endl;
            }
            else{
                cout<<"It is a party cake"<<endl;
            }
            cout<<endl;
        }

};

int main(){
    
    

    // //recipe for cake2
    // cakeRecipe cake2;
    // cake2.flavour="strawberry";
    // cake2.birthdaycake=true;
    // cake2.display();


    return 0;
}