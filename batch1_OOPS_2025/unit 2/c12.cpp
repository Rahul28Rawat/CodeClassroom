#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    char section;

    void details()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "section: " << section << endl;
    }
    student(string name, int age, char section)
    {
        this->name = name;
        this->age = age;
        this->section = section;
    }
    student()
    {
    }
};

int main()
{

    student s1("rahul", 20, 'A');

    student s2("shaurya", 18, 'C');

    student arr[10];
    arr[0].name = "jay";
    arr[0].age = 21;
    arr[0].section = 'B';
    arr[0].details();

    return 0;
}