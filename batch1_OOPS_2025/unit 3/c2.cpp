#include <iostream>
using namespace std;

class base
{
private:
    int a = 1;

protected:
    int c = 3;

public:
    int b = 2;

    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};

class derived : public base
{
public:
    int e = 5;
    int d = 4;

    // ambiguity
    void display()
    {
        base::display();
        cout << "d=" << d << endl;
        cout << "e=" << e << endl;
    }
};

// parent-> john (blue eyes)
// child-> max (green eyes)

// public - can be accessed by object outside the class (derived public )
// private - cannot be accessed by object outside the class (it is never inherited)
// protected - cannot be accessed by object outside the class

int main()
{
    derived o1;
    o1.display();

    return 0;
}