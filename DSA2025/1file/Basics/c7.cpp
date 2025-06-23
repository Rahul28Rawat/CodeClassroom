#include<iostream>
using namespace std;

//pre defined, user defined
struct student{ //12 byte
    int age; //4
    double standard; //8
};

// union student{ //8 byte
//     int age; //4
//     char a; //1
//     struct student* ptr; //8
// };

int main(){

    struct student s1;
    s1.age=20;
    s1.standard=11;
    cout<<"age="<<s1.age<<", standard="<<s1.standard<<endl;
    
    struct student* ptr=&s1;
    cout<<"age="<<ptr->age<<", standard="<<ptr->standard<<endl;
    cout<<"age="<<(*ptr).age<<", standard="<<ptr->standard<<endl;
    

    return 0;
}