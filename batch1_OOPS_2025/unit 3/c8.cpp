#include <iostream>
using namespace std;

class smartphone
{
public:
    // function override
    void display()
    {
        cout << "I am a smartphone" << endl;
    }
};

class samsung : public smartphone
{
public:
    void display()
    {
        cout << "I am samsung" << endl;
    }
};

class redmi : protected smartphone
{
public:
    void display()
    {
        cout << "I am redmi" << endl;
    }
};

class iphone : private smartphone
{
public:
    void display()
    {
        cout << "I am iphone" << endl;
    }
};

int main()
{

    iphone o1;
    o1.display();

    return 0;
}