#include <iostream>
using namespace std;

class base
{
private:
    int marks;
    string name;

public:
    void display()
    {
        cout << name << endl;
        cout << "marks: " << marks << endl;
    }
    // base()
    // {
    // }
    base(int m, string n)
    {
        marks = m;
        name = n;
    }
};

int main()
{

    // stack
    //  1000-20,000
    //  currently filled-  8000
    //  new memory - 8001

    // heap
    //  21,000- 50,000
    // 21000- 22000
    //  40000

    // how to create a dynamic object in C++?
    base *ptr = new base(88, "hanu");
    ptr->display();

    // base b1(11,"sharuya");

    delete ptr;

    return 0;
}