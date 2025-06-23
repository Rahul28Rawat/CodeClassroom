#include<iostream>
using namespace std;

//void function with parameters

//create a function which write an essay about myself.

void myself_printer(string name, int age, string school, double percentage, bool drivingLicense ){
    cout<<"My name is "<<name<<"."<<endl;
    cout<<"I am "<<age<<" years old."<<endl;
    cout<<"I am studying in "<<school<<"."<<endl;
    cout<<"My percentage in 10th is "<<percentage<<"."<<endl;
    if( drivingLicense ==true ){
        cout<<"I have a driving license."<<endl;
    }else{
        cout<<"I don't have a driving license."<<endl;
    }
}


//A+ --> 90-100
//A  --> 80-89
//B+ --> 70-79
//B  --> 60-69
//D  --> 50-34
//F  --> 33-

void grade_calculator( int marks ){
    if( marks>=90 ){
        cout<<"A+"<<endl;
    }
    else if( marks >=80){
        cout<<"A"<<endl;
    }
    else if( marks >=70){
        cout<<"B+"<<endl;
    }
    else if( marks >=60){
        cout<<"B"<<endl;
    }
    else if( marks >=50){
        cout<<"C"<<endl;
    }
    else if( marks >=34){
        cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
}

//create a function which takes marks of all 5 subjects and prints all the marks

void marks( string name, int english, int hindi , int physics, int chemistry, int maths ){
    cout<<"This is the marksheet of "<<name<<endl;
    cout<<"English    : "<<english<<" : ";
    grade_calculator(english);//call //resume
    cout<<"Hindi      : "<<hindi<<" : ";
    grade_calculator(hindi);//call //resume
    cout<<"Physics    : "<<physics<<" : ";
    grade_calculator(physics);
    cout<<"Chemistry  : "<<chemistry<<" : ";
    grade_calculator(chemistry);
    cout<<"Maths      : "<<maths<<" : ";
    grade_calculator(maths);
    double percentage=(english+hindi+physics+chemistry+maths)/5;
    cout<<"Percentage : "<<percentage<<" : ";
    grade_calculator(percentage);
}

int main(){

    marks("Rahul Rawat",71,80,98,77,90);

    return 0;
}