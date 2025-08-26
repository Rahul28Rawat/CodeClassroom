#include <iostream>
using namespace std;

class base
{
public:
    int x;
    bool y;
};

void sum(int a);
void sum(int a, int b);
void sum(int a, int b, int c);

// let us assume true=10, false=100
int operator+(const base &o1, const base &o2)
{
    return (o1.x + o2.x);
}
int operator+(int val, const base &o2)
{
    return (val + o2.x);
}
bool operator%(const base &o1, const base &o2)
{
    if (o1.x == o2.x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    base b1;
    b1.x = 3;

    base b2;
    b2.x = 3;

    base b3;
    b3.x = 5;

    base b4;
    b4.x = 100;

    base b5;
    b5.x = 1;

    base b6;
    b6.x = 2;

    base b7;
    b7.x = 3;

    // int ans = b1 + b2 + b3 + b4 + b5 + b5 + b7;
    // // obj1 + obj2
    // // int + obj2
    // cout << ans << endl;
    // // 55 + 123 + 77;

    // cout << b1 + 3 << endl;
    cout << b1 % b2 << endl;

    return 0;
}