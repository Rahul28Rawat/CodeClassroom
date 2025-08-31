#include <iostream>
using namespace std;

class base
{
public:
    void display();
};

void base::display()
{
    cout << "I am a function of base class..." << endl;
}

int main()
{
    base b1;
    b1.display();
    return 0;
}