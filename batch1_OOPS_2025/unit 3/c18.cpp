#include <iostream>
using namespace std;

class shape
{
public:
    virtual void draw()
    {
        cout << "this is shape class" << endl;
    };
};

class rectangle : public shape
{
public:
    void draw() override
    {
        cout << "I am drawing a rectangle of 4 sides " << endl;
    }
};

int main()
{
    // rectangle r1;
    // r1.draw();

    shape *pr1 = new rectangle; // early binding
    pr1->draw();

    return 0;
}