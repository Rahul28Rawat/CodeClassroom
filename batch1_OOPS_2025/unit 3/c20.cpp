#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    int age;
    void run()
    {
        cout << "animal is running" << endl;
    }
    animal()
    {
        name = "tom";
        age = 0;
    }
};

int main()
{
    animal a1; // static object
    cout << a1.age << ", " << a1.name << endl;
    a1.run();

    animal *ptr = new animal;
    cout << ptr->age << ", " << ptr->name << endl;
    ptr->run();

    return 0;
}