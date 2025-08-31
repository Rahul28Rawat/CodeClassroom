#include <iostream>
using namespace std;

class base;
class student
{
public:
    void outsidefunction1();
    void outsidefunction2();
    void outsidefunction3();
    void outsidefunction4();
};

class base
{
private:
    int a = 0;

public:
    void display()
    {
        cout << "value of a:" << a << endl;
    }
    base(int a)
    {
        this->a = a;
    }
    friend class student;
};

void student::outsidefunction1()
{
    base o1(20);
    cout << o1.a << endl;
}
void student::outsidefunction2()
{
    base o1(20);
    cout << o1.a << endl;
}
void student::outsidefunction3()
{
    base o1(20);
    cout << o1.a << endl;
}
void student::outsidefunction4()
{
    base o1(20);
    cout << o1.a << endl;
}

int main()
{
    // base b1(34);
    student s1;
    s1.outsidefunction1();

    return 0;
}