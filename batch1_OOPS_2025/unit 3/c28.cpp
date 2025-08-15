#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    int *ptr;
    void display()
    {
        cout << "rollno: " << rollno << endl;
        cout << "name: " << name << endl;
        cout << "marks: " << *ptr << endl;
    }
    student()
    {
    }
    student(int r, string n)
    {
        this->rollno = r;
        this->name = n;
    }
    student(const student &o1)
    {
        this->rollno = o1.rollno;
        this->name = o1.name;
        this->ptr = new int;
        *(this->ptr) = *(o1.ptr);
    }
};

int main()
{
    student s1(1, "aditya");
    s1.ptr = new int;
    *(s1.ptr) = 10;
    // s1.display();

    student s2(s1);
    // s2.name = s1.name;
    // s2.rollno = s1.rollno;
    *(s2.ptr) = 50;
    s2.display();

    s1.display();

    // student s3;
    // s3.rollno = 3;
    // s3.name = "bob";

    // student s3(3, "bob");

    return 0;
}