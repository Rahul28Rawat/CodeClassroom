#include <iostream>
using namespace std;

class vehicle;

class car
{
private:
    string brand;

public:
    void display()
    {
        cout << "brand = " << brand << endl;
    }
    car(string brand)
    {
        this->brand = brand;
    }
    // friend void vehicle::show();
    friend class vehicle;
};

class vehicle
{
private:
    string type;

public:
    void show()
    {
        car obj1("TATA");
        // obj1.display();
        cout << obj1.brand << endl;
        cout << "vehicle type is = " << type << endl;
    }
    void show2()
    {
    }
    vehicle(string type)
    {
        this->type = type;
    }
};

int main()
{
    // car c1("BMW");
    // c1.display();

    vehicle v1("CAR");
    v1.show();

    return 0;
}