#include <iostream>
using namespace std;

class base
{
public:
    int age = 5;
    virtual void display()
    {
        cout << "I am base class" << endl;
    }
};

class child : public base
{
public:
    int a;
    void display()
    {
        cout << "I am child class" << endl;
    }
};

int main()
{

    child c1;
    // c1.display();

    base *ptr = &c1;
    // pointer of parent class can store address of child class object
    // but the parent class pointer can only access inherited values from the parent
    // int addr -> int pointer
    // boolean addr -> boolean pointer

    ptr->display();

    return 0;
}