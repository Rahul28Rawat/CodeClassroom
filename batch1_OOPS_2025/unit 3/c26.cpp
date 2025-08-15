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
    // base *ptr = new base(88, "hanu");
    // ptr->display();

    // int* ptr=new int;

    // dynamic object
    //  base* b1=new base(50,"shaurya");
    //  b1->display();
    //  base* arr1=new base[5];
    //  arr1[0].display();
    //  arr1[1].
    //  arr1[2].
    //  arr1[3].
    //  arr1[4].

    // static object
    //  base b2(48,"hanu");
    //  base arr2[5];
    //  arr2[0].
    //  arr2[1].
    //  arr2[2].
    //  arr2[3].
    //  arr2[4].

    // delete ptr;

    base o1;   // static
    base *ptr; // static
    ptr = &o1;
    ptr = new base;

    o1.display();
    ptr->display();

    return 0;
}