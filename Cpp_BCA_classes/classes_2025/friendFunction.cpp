#include<iostream>
using namespace std;

//class ->public, 

class student{
    private:
        int marks=0;
        int rollno=0;
    public:
        string name="Unnamed";

        void details(){
            cout<<"name: "<<name<<endl;
            cout<<"rollnoo: "<<rollno<<endl;
            cout<<"marks: "<<marks<<endl;
        }
        
        student(string name, int marks, int rollno){

        }

};

int main(){
    
    
    
    return 0;
}