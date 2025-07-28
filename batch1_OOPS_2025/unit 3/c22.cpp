#include <iostream>
using namespace std;

class base
{
public:
    int count = 0;
};

// void operator+(base o1, base o2)
// {
//     cout << "SUM : " << o1.count + o2.count << endl;
// }

void operator--(base &o1)
{
    o1.count = o1.count - 1;
}

int main()
{

    base b1;
    b1.count = 5;
    // base b2;
    // b2.count = 3;

    --b1;
    cout << b1.count;

    // whenever i use + operator with two objects, I want to print their count values sum.
    // b1 + b2;
    // operator+(b1, b2);

    return 0;
}