#include <iostream>
using namespace std;

// In C++, a static variable is initialized only
// once and retains its value between multiple function calls
// or object instantiations.

class student
{
private:
    static int totalstudent;
    string name;
    int rollno;
    int age;
    double marks;

public:
    void details()
    {
        cout << "Student name: " << name << endl;
        cout << "Student rollno: " << rollno << endl;
        cout << "Student age: " << age << endl;
        cout << "Student marks: " << marks << endl;
    }
    void StudentCount()
    {
        cout << "Total number of student : " << totalstudent << endl;
    }
    student(string naam, int rolno, int ages, double mark)
    {
        totalstudent++;
        name = naam;
        rollno = rolno;
        age = ages;
        marks = mark;
    }
    student(student &o1)
    {
        totalstudent++;
        this->name = o1.name;
        this->rollno = o1.rollno;
        this->age = o1.age;
        this->marks = o1.marks;
    }
    ~student()
    {
        totalstudent--;
    }
};

int student::totalstudent = 0;

int main()
{
    student s1("rahul", 25, 22, 51);
    s1.details();
    student s2("shaurya", 21, 19, 90);
    student s3(s2);
    s1.StudentCount();

    return 0;
}