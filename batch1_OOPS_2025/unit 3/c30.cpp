#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    void display()
    {
        cout << x << endl;
    }
    A(int x)
    {
        this->x = x;
    }
    friend class B;
};
// If class B is a friend of class A, then class A's object inside member
//  any function of class B, can access their private variables.
class B
{
public:
    void show()
    {
        A o1(100);
        cout << o1.x << endl;
    }
    void show2()
    {
        A o2(122);
        cout << (o1.x) * 2 << endl;
    }
};

int main()
{
    B o2;
    o2.show();

    return 0;
}