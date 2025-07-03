#include <iostream>
using namespace std;

class base
{
public:
    // data members
    int a;
    int b;
    // default constructor
    base()
    {
        cout << "default constructor of BASE class is called" << endl;
    }
    // parameterised constructor
    base(int a, int b)
    {
        cout << "1st parameterised constructor of BASE class is called" << endl;
        this->a = a;
        this->b = b;
    }
    base(int a)
    {
        cout << "2nd parameterised constructor of BASE class is called" << endl;
        this->a = a;
        this->b = 2;
    }
};

class child : public base
{
public:
    // data members : a,b
    int c;
    int d;
    // default constructor
    child()
    {
        cout << "default constructor of CHILD class is called" << endl;
    }
    // parameterised constructor
    child(int c, int d)
    {
        cout << "1st parameterised constructor of CHILD class is called" << endl;
        this->c = c;
        this->d = d;
    }
    child(int a, int b, int d) : base(a, b)
    {
        cout << "2nd parameterised constructor of CHILD class is called" << endl;
        this->c = 3;
        this->d = d;
    }
};

int main()
{

    child o1(1, 2, 4);
    // whenever we create a child object, then first parent constructor is called, then child constructor is called

    return 0;
}