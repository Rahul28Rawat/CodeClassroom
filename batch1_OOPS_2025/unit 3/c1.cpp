#include <iostream>
using namespace std;

class animal
{
public:
    int eye = 2;
    string type = "Land";
    string color = "white";
    bool pet = true;
    int legs = 4;
    bool carnivorous = true;

    void display()
    {
        cout << "this animal has " << eye << " eyes" << endl;
        cout << "this animal has " << color << " color" << endl;
        cout << "this animal has " << legs << " legs" << endl;
        cout << "It is a " << type << " animal" << endl;
        if (pet)
        {
            cout << "It can be a pet" << endl;
        }
        if (carnivorous)
        {
            cout << "It is a carnivorous" << endl;
        }
    }
    // constructor
    animal(int eye, int legs, string color, string type, bool pet, bool carnivorous)
    {
        cout << "parameterised animal constrctor is called " << endl;
        this->eye = eye;
        this->legs = legs;
        this->color = color;
        this->type = type;
        this->pet = pet;
        this->carnivorous = carnivorous;
    }
    animal()
    {
        cout << "animal default constructor is called" << endl;
    }
};

class lion : public animal
{
public:
    string name = "unnamed";

    lion(string name, string color)
    {
        cout << "lion parameterised constructor is called" << endl;
        this->name = name;
        this->eye = 2;
        this->legs = 4;
        this->color = color;
        this->type = "Land";
        this->pet = false;
        this->carnivorous = true;
    }
    lion()
    {
        cout << "lion default constructor is called" << endl;
    }
};

// class cow : public animal
// {
//     //horns
// };

// class pigeon : public animal
// {
// };

// class fish : public animal
// {
// };

int main()
{

    lion l1("mufasa", "white");

    return 0;
}