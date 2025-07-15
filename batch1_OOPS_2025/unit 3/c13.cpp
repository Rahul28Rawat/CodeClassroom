#include <iostream>
using namespace std;

class person1
{
public:
    void display()
    {
        cout << "I am person1" << endl;
    }
    person1()
    {
        cout << "person1 constructor running" << endl;
    }
};

class child1 : virtual public person1
{
public:
    child1()
    {
        cout << "child1 constructor running" << endl;
    }
};

class child2 : virtual public person1
{
public:
    child2()
    {
        cout << "child2 constructor running" << endl;
    }
};

class grandchild : public child1, public child2
{
public:
    grandchild()
    {
        cout << "grandchild constructor running" << endl;
    }
};

int main()
{
    grandchild g1;
    // g1.display();

    return 0;
}
