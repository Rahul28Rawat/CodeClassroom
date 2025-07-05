#include <iostream>
using namespace std;

class animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
    animal()
    {
        cout << "animal empty constructor" << endl;
    }
};

class mammal : public animal
{
public:
    void walk()
    {
        cout << "mammal is walking" << endl;
    }
    mammal()
    {
        cout << "mammal empty constructor" << endl;
    }
};

class dog : public mammal
{
public:
    string name = "tom";
    void bark()
    {
        cout << "dog is barking" << endl;
    }
    dog()
    {
        cout << "dog empty constructor" << endl;
    }
};

int main()
{
    // animal a1;
    // a1.eat();

    // mammal m1;
    // m1.eat();
    // m1.walk();

    dog d1;
    // d1.eat();
    // d1.walk();
    // d1.bark();

    return 0;
}