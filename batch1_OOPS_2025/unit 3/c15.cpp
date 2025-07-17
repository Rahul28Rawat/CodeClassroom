#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << "sum is " << a + b << endl;
}

void sum(int a, int b, int c)
{
    cout << "sum is " << a + b + c << endl;
}

void sum(float a, float b)
{
    cout << "sum is " << a + b << endl;
}

// my name is Rahul Rawat.
// I am 13 years old.
// I am in 5th standard.

int main()
{
    sum(2, 3);
    return 0;
}