#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int marks;

    student(string name, int marks)
    {
        this->marks = marks;
        this->name = name;
    }
};

// create a function which takes two object as input and prints the marks of each of them
void operator*(student &o1, student &o2)
{
    cout << "sum: " << o1.marks + o2.marks << endl;
}

int main()
{

    student s1("shaurya", 50);
    student s2("hanu", 65);
    operator*(s1, s2);
    s1 *s2;

    return 0;
}