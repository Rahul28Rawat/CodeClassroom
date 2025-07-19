#include <iostream>
using namespace std;
// Any class that contains a pure virtual function becomes a abstract class
//  Can't create object
// Can have constructors
// Can have regular or virtual functions
// Can inherit from other abstract classes

// class geometry
// {
// public:
//     void values()
//     {
//         cout << "I will soon make a geometrical drawing" << endl;
//     }
// };

class shape
{
public:
    virtual void draw() = 0; // pure virtual function
    void hello()
    {
        cout << "Hello guys from shape class" << endl;
    }
    shape()
    {
        cout << "shape constructor called" << endl;
    }
    // tilda
    virtual ~shape()
    {
        cout << "shape constructor called" << endl;
    }
};

class rectangle : public shape
{
public:
    void draw() override
    {
        cout << "I am drawing a rectangle of 4 sides " << endl;
    }
    // rectangle()
    // {
    //     cout << "rectangle constructor called" << endl;
    // }
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "I am drawing a circle of no sides " << endl;
    }
};

class triangle : public shape
{
public:
    void draw()
    {
        cout << "I am drawing a triangle of 3 sides " << endl;
    }
};

int main()
{

    // shape s1;
    // s1.draw();

    rectangle r1;
    r1.hello();
    // r1.draw();

    return 0;
}