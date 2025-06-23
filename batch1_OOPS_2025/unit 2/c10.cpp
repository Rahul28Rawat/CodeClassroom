#include <iostream>
using namespace std;

class A
{

public:
    int x;
    int y;
    // value printer function
    void ValuePrinter()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout << "object created" << endl;
    }
    // copy constructor
    A(A *obj)
    {
        this->x = obj->x;
        this->y = obj->y;
    }
    // Destructor
    ~A()
    {
        cout << "object destroyed" << endl;
    }
};

void func1()
{
    A obj3(1, 2); // Create an object of class A
    obj3.ValuePrinter();
}

int main()
{
    func1();

    return 0;
}