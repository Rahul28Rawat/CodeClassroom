#include<iostream>
using namespace std;

void sum(int a){
    cout<<"I do sum"<<a<<endl;
}

void operator+(string& s1, string& s2){
    s1=s1+" "+s2+" The Great";
}

int main(){

    string name="rahul";
    string surname="sharma";
    name+surname;
    cout<<name<<endl;


    return 0;
}