#include <iostream>
using namespace std;

class parent2
{
public:
    int a = 2;
    void showname()
    {
        cout << "I am parent2" << endl;
    }
    // parent2()
    // {
    //     cout << "parent2 constructor is called" << endl;
    // }
};

class parent1
{
public:
    int a = 1;
    void showname()
    {
        cout << "I am parent1" << endl;
    }
    // parent1()
    // {
    //     cout << "parent1 constructor is called" << endl;
    // }
};

class child : public parent1, public parent2
{
public:
    void showname()
    {
        // cout << "I am the child" << endl;
        // parent2::showname();
    }
    // child()
    // {
    //     cout << "child constructor is called" << endl;
    // }
};

int main()
{
    // parent2 obj1;
    // obj1.showname2();

    child o1;

    return 0;
}