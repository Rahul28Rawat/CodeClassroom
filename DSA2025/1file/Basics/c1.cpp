#include<iostream>
using namespace std;

//Non primitive datatype
// //structure
// struct student{
//     int age;
//     string name;
// };
// //union
// union car{
//     int wheels;
//     int steering;
// };

void NumPrinter(int n){ //3
    //base condition
    if(n<0){ //-1
        return;
    }
    cout<<"hello"<<n<<endl;
    //recursion statement
    NumPrinter(n-1);
    cout<<"your number is : "<<n<<endl; 
}

int main(){


    // struct student s1;
    // s1.age=20;
    // s1.name="John";
    // cout<<s1.age<<endl;
    // cout<<s1.name<<endl;


    // union car c1;
    // c1.wheels=4;
    // c1.steering=1;
    // cout<<c1.wheels<<endl;
    // cout<<c1.steering<<endl;

    //primitive 
    // int a; //4byte
    // float b=4.5; //1000 //4byte
    // char c='A'; //1 byte
    // double d=4.0; //2000 //8 byte
    // bool e=true; //1 bit 
    // string f="Rahul";
    // "R" //string --> double quotes

    //derived datatype
    // int arr[5];
    
    // int solution = sumOfNum(5,3);
    // cout<<solution<<endl;

    NumPrinter(3);

    return 0;
}