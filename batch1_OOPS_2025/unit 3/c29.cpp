#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;

public:
    void display()
    {
        cout << "rollno: " << rollno << endl;
        cout << "name: " << name << endl;
    }
    student()
    {
    }
    student(int r, string n)
    {
        this->rollno = r;
        this->name = n;
    }
    friend void myfunc();
    friend void sum(int a, int b);
};

// by default a object inside a function cannot access its private data members.
// In friend functions, a object can access its private variables.
void myfunc()
{
    student s1(10, "rahul");
    cout << s1.name << endl;
}

void sum(int a, int b)
{
    cout << a + b << endl;
    student s1(10, "rahul");
    cout << s1.name << endl;
}

int main()
{
    myfunc();
    sum(1, 3);
    student s2;
    s2.display();
    myfunc();

    return 0;
}