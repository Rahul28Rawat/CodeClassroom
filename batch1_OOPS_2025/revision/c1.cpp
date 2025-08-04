#include <iostream>
using namespace std;

class car
{
private:
    bool self_driving = false;

public:
    int tyre = 4;
    string color = "White";
    int seats = 4;

    // Getter- It is a public function which is used to retrieve value of a private variable from its class
    bool get_self_driving()
    {
        return self_driving;
    }
    // Setter- It is a public function which is used to change the data of private variable from its class
    void set_self_driving(bool value)
    {
        self_driving = value;
    }

    void display()
    {
        cout << "tyre: " << tyre << endl;
        cout << "color: " << color << endl;
        cout << "seats: " << seats << endl;
    }

    // constructor - it is used to initialise data members at the time of declaration of object(at the time of instantiating a object)
    car(int tyre, string color, int seats)
    {
        this->color = color;
        this->tyre = tyre;
        this->seats = seats;
        // this keyword is a pointer to the current object we are referring to...
    }
    // deconstructor - it is used to destroy object, you cannot manually call deconstructor.
    ~car()
    {
    }

    car()
    {
    }
};

int main()
{
    car c4(4, "blue", 6);
    car c1;
    c1.seats = 6; // setter for private values

    // c1.self_driving = true;
    c1.set_self_driving(true);

    // cout << c1.seats; // getter for private values

    // cout<<c1.self_driving;
    cout << c1.get_self_driving();

    // int num; // declaration of the variable
    // num=6; // initialisation of the variable

    car c2;           // declaration of the object
    c2.color = "red"; // i am initialising color variable
    c2.seats = 6;     // i am initialising seats variable
    c2.tyre = 6;      // i am initialising tyre variable

    car c3(6, "red", 6);

    car *o1 = new car;
    cout << o1->color;

    return 0;
}