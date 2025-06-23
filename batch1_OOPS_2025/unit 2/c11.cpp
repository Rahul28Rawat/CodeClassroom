#include <iostream>
using namespace std;
class Car
{
public:
    int engine = 1500;
    string brand = "Toyota";
    double price = 500000;
    float discount = 50;
    int seater = 5;

    void run()
    {
        cout << brand << " is running." << endl;
    }
    void display()
    {
        cout << "Engine:" << engine << "CC" << endl;
        cout << "Brand:" << brand << endl;
        cout << "Price:" << price << "Rs" << endl;
        cout << "Discount:" << discount << "%" << endl;
        cout << "Seater:" << seater << "Seater" << endl
             << endl;
    }
    Car(int engine, string brand, double price, float discount, int seater)
    {
        this->engine = engine;
        this->brand = brand;
        this->price = price;
        this->discount = discount;
        this->seater = seater;
    }
    // our class always has a default constructor and a copy constructor
    Car(Car &original)
    {
        this->engine = original.engine;
        this->brand = original.brand;
        this->price = original.price;
        this->discount = original.discount;
        this->seater = original.seater;
    }
};

// void sum(int a, int b)
// {
//     a = 3;
//     b = 2;
//     cout << a + b << endl;
// }

int main()
{
    cout << "C1 car is printing" << endl;
    Car c1(1400, "Honda", 600000, 70, 6);
    c1.run();
    c1.display();

    cout << "C2 car is printing" << endl;
    Car c2(c1);
    c2.display();

    int x = 5;
    int y = 4;
    sum(x, y);

    // reference variable - A reference variable in C++ acts as an alias or alternative name for an existing variable.

    int a = 5;
    int &y = a;
    cout << "a=" << a << ", y=" << y << endl;
    y = 10;
    cout << "a=" << a << ", y=" << y << endl;
    a = 12;
    cout << "a=" << a << ", y=" << y << endl;
}