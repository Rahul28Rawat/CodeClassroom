#include <iostream>
using namespace std;

// blueprint
//  ~-tilda
class student
{
    // access modifier
public:
    // data members
    int rollno;
    string name;

    // member methods
    void details()
    {
        cout << "rollno : " << rollno << endl;
        cout << "name : " << name << endl;
    }
    void marksGetter()
    {
        cout << marks << endl;
    }
    void marksSetter(int val)
    {
        marks = val;
    }
    // constructor
    student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }

private:
    int marks = 0;
    void details2()
    {
        cout << "rollno : " << rollno << endl;
        cout << "name : " << name << endl;
    }
};

int main()
{
    // instance of class
    student s1(12, "hannu");
    s1.details();
    // s1.marks = 100;
    // s1.details2();
    s1.marksSetter(20);
    s1.marksGetter();

    return 0;
}