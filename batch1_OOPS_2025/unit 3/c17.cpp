#include <iostream>
using namespace std;

class base
{
private:
    int a = 4;
    int b = 9;

public:
    void display();
    friend void sum();
};

void base::display()
{
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
}

void sum()
{
    base b1;
    cout << b1.a + b1.b;
}

int main()
{

    sum();

    return 0;
}