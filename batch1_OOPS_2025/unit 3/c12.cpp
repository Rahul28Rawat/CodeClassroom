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

class person2
{
public:
    void display()
    {
        cout << "I am person2" << endl;
    }
    person2()
    {
        cout << "person2 constructor running" << endl;
    }
};

class person3
{
public:
    void display()
    {
        cout << "I am person3" << endl;
    }
    person3()
    {
        cout << "person3 constructor running" << endl;
    }
};

class child1 : public person1, public person2
{
public:
    child1()
    {
        cout << "child1 constructor running" << endl;
    }
};

class child2 : public person1, public person3
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
    int f = 6;
    grandchild()
    {
        cout << "grandchild constructor running" << endl;
    }
};

int main()
{
    grandchild g1;
    // cout << g1.display();

    return 0;
}
