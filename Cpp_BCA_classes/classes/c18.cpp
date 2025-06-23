#include <iostream>
using namespace std;

// MULTPILE INHERITANCE
class Mother
{
    public:
        string eyeColor = "brown";
        void Display()
        {
            cout << "I am Mother class." << endl;
        }
};

class Father
{
    public:
        string skin = "fair";
        void Display(){
            cout << "I am Father class." << endl;
        }
};

class child : public Mother, public Father
{
    public:
        int height=4;
        void Display(){
            cout << "I am child class." << endl;
        }
}; 

int main()
{
    child jay;
    jay.Display();

    //How to use same function name in multiple inheritance

    return 0;
}