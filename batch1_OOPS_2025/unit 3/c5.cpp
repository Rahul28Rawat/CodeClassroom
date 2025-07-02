#include <iostream>
using namespace std;

class human
{
protected:
    int legs;
    int eyes;
    string food;
    bool isMale;

public:
    void display()
    {
        cout << "this is display function of human" << endl;
        // cout << "this is a human" << endl;
        // cout << "this human is " << (isMale ? "Male" : "Female") << endl;
        // cout << "no of legs : " << legs << endl;
        // cout << "no of eyes : " << eyes << endl;
        // cout << "this human eats : " << food << endl;
    }

    human()
    {
        // cout << "this is a empty constructor of human" << endl;
        legs = 2;
        eyes = 2;
        food = "nothing";
        isMale = true;
    }
    human(string food, bool isMale)
    {
        // cout << "this is a parmeterised constructor of human" << endl;
        legs = 2;
        eyes = 2;
        this->food = food;
        this->isMale = isMale;
    }
};

// private > protected > public

class vegetarian : public human
{

public:
    bool eatsEgg;
    void display()
    {
        cout << "this is display function of vegetarian" << endl;
    }
    // void Pdisplay()
    // {
    //     human::display();
    // }

    vegetarian()
    {
        // cout << "this is a empty constructor of vegetarian" << endl;
        food = "Dal Chawal";
        eatsEgg = false;
    }
    vegetarian(string food, bool isMale, bool eatsEgg) : human(food, isMale)
    {
        // cout << "this is a parameterised constructor of vegetarian" << endl;
        food = "Dal Chawal";
        this->eatsEgg = eatsEgg;
    }
    vegetarian(bool eatsEgg) : human("mango", true)
    {
        // cout << "this is a parameterised constructor of vegetarian" << endl;
        food = "Dal Chawal";
        this->eatsEgg = eatsEgg;
    }
};

int main()
{
    vegetarian v1;

    // early binding
    vegetarian *ptrV = &v1;
    cout << (*ptrV).eatsEgg;

    // late binding
    human *ptrH = &v1;
    // (*ptrH).display();

    return 0;
}