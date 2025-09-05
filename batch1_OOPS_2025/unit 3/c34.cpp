#include <iostream>
using namespace std;

class car
{
public:
    int *seats;
    string name;
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "seats:" << *seats << endl
             << endl;
    }
    car()
    {
    }
    car(string n, int s)
    {
        this->name = n;
        this->seats = new int;
        *(this->seats) = s;
    }
    car(const car &o1)
    {
        this->name = o1.name;
        this->seats = new int;
        *(this->seats) = *(o1.seats);
    }
    ~car()
    {
        delete seats;
    }
};

int main()
{
    car c1;
    c1.seats = new int;
    *(c1.seats) = 4;
    c1.name = "Swift";

    car c2(c1);

    *(c2.seats) = 6;
    c1.display();
    c2.display();

    return 0;
}