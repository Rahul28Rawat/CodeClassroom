#include <iostream>
using namespace std;

class LivingThings
{
public:
    bool mobility = false;
    void display()
    {
        cout << "I am a living thing" << endl;
    }
};

class animal : public LivingThings
{
public:
    string Diet = "Herbivrous";
    void display()
    {
        cout << "I am a animal" << endl;
    }
};

// class mammal inherits animal
// size
// display->"I am a mammal"

int main()
{

    // LivingThings l1;
    // cout<<l1.mobility<<endl;

    animal a1;
    cout << a1.Diet << endl;
    cout << a1.mobility << endl;
    a1.display();

    return 0;
}