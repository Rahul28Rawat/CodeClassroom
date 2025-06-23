#include<iostream>
using namespace std;

//90-100 -- keep doing well.
//80-90 -- good job, you can do better.
//80-60 -- you need improvement.
//60-34 -- you need to work harder.
//0-34 -- you need to repeat the class.

void remarksPrinter( int percentage){
    if(percentage>=90){
        cout<<"keep doing well."<<endl;
    }
    else if(percentage>=80){
        cout<<"good job, you can do better."<<endl;
    }
    else if(percentage>=60){
        cout<<"you need improvement."<<endl;
    }
    else if(percentage>=34){
        cout<<"you need to work harder."<<endl;
    }
    else{
        cout<<"you need to repeat the class."<<endl;
    }
}

//A+ --> 90-100
//A  --> 80-89
//B+ --> 70-79
//B  --> 60-69
//D  --> 50-34
//F  --> 33-

//create a function which takes a number as input and prints the grade acc to it.

//default value of parameter
//we can call a function inside another function

void grade_calculator( int marks, bool percentage=false ){
    if( marks>=90 ){
        cout<<"A+"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : keep doing well."<<endl;
        }
    }
    else if( marks >=80 ){
        cout<<"A"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : good job, you can do better."<<endl;
        }
    }
    else if( marks >=70 ){
        cout<<"B+"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : you need improvement."<<endl;
        }
    }
    else if( marks >=60 ){
        cout<<"B"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : you need improvement."<<endl;
        }
    }
    else if( marks >=50 ){
        cout<<"C"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : you need to work harder."<<endl;
        }
    }
    else if( marks >=34 ){
        cout<<"D"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : you need to work harder."<<endl;
        }
    }
    else{
        cout<<"F"<<endl;
        if(percentage==true){
            cout<<"Teachers remarks : you need to repeat the class."<<endl;
        }
    }
}



void marksheet( string name, int hindi, int english, int science, int maths, int sst ){

    cout<<"This is the marksheet of "<<name<<endl;
    cout<<" Hindi   : "<<hindi<<" : ";
    grade_calculator(hindi);
    cout<<" English : "<<english<<" : ";
    grade_calculator(english);
    cout<<" Science : "<<science<<" : ";
    grade_calculator(science);
    cout<<" Maths   : "<<maths<<" : ";
    grade_calculator(maths,false);
    cout<<" S.S.T.  : "<<sst<<" : ";
    grade_calculator(sst,false);
    int percentage = (hindi+english+science+maths+sst)/5;
    cout<<" FINAL PERCENTAGE : "<<percentage<<" : ";
    grade_calculator(percentage,true);

}

int main(){
    
    marksheet("Shaurya Agarwal.",91,43,85,78,58);//call //pause
    

    return 0;
}