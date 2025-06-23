#include<iostream>
using namespace std;

// classes are blueprints
// classes contain variables and functions
// object is a instance of class
// object will have variables and functions of its class

// class --> write once and use everywhere
// principle --> DRY -> donot Repeat yourself

class recipe{
    int stepcount=1;
    public:
    //properties--> objects
    //data members-->classes
    int maida=100;
    int sugar=50;
    int oil=20;
    int salt=5;
    int water=50;
    string flavour="Vanilla";
    bool birthday=false;
    bool gift= false;
    string name;
    bool boy=true;

    //function inside a class is called a method
    void desciption(){
        cout<<"This is a recipe for "<<flavour<<" cake"<<endl;
        cout<<"step "<<stepcount<<": take "<<maida<<"g maida and "<<sugar<<"g sugar and "<<oil
        <<"g oil and "<<salt<<"g salt and "<<water<<"g water in a bowl."<<endl;
        stepcount++;
        cout<<"step "<<stepcount<<": mix all the ingredients and add "<<flavour<<" flavour"<<endl;
        stepcount++;
        cout<<"step "<<stepcount<<": put the mixture in a cake mould and bake it in oven"<<endl;
        stepcount++;
        cout<<"step "<<stepcount<<": after baking, let the cake cool down"<<endl;
        stepcount++;
        //if the cake is birthday cake then design the cake with name -
        if(birthday==true){
            cout<<"step "<<stepcount<<": Add the name of the birthday boy/girl : "<<name<<"."<<endl;
            stepcount++;
        }
        if(gift==true){
            cout<<"step "<<stepcount<<": wrap the cake in a gift wrap"<<endl;
            stepcount++;
        }
        cout<<"step "<<stepcount<<": your cake is ready"<<endl<<endl;
    }

};

int main(){

    //object
    //class_name object_name;
    recipe cake1;
    cake1.flavour="red velvet";
    cake1.birthday=true;
    cake1.name="Rahul";
    cake1.desciption();

    recipe cake2;
    cake2.flavour="chocolate";
    cake2.maida=250;
    cake2.sugar=100;
    cake2.oil=30;
    cake2.water=100;
    cake2.gift=true;
    cake2.desciption();

    recipe cake3;
    cake3.flavour="strawberry";
    cake3.birthday=true;
    cake3.name="Rohan";
    cake3.gift=true;
    cake3.desciption();

    // int a=5;
    // cout<<a++<<endl; //post increment --> pehle a ki value use karo and next time ke liye update kardo
    // cout<<++a<<endl; //pre increment --> pehle value ko badha do fir use karna

    return 0;
}