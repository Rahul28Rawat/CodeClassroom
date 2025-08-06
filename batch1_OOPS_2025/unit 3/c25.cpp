#include <iostream>
using namespace std;
class Student
{
private:
    int marks;
    int rollNo;
    string name;

public:
    void setDetails()
    {
        cout << "SET Roll Number:  ";
        cin >> rollNo;
        cout << "SET Name: ";
        cin >> name;
        cout << "Enter Marks";
        cin >> marks;
    }

    void set_marks(int val)
    {
        if (val >= 0 && val <= 100)
        {
            marks = val;
        }
        else
        {
            cout << "invalid number" << endl;
        }
    }

    int get_marks()
    {
        return marks;
    }

    void display()
    {
        cout << "-----------------------------------------" << endl;
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "-----------------------------------------" << endl;
    }
    Student()
    {
        rollNo = 0;
        name = "Unnamed";
        marks = 0;
    }
    Student(int rollNo, string name, int m)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = m;
    }

    Student(int rollNo)
    {
        this->rollNo = rollNo;
        name = "Default";
        marks = 0;
    }
    friend void myPrinter(Student o1);
    friend void myPrinter2(Student o1);
};

void myPrinter(Student o1)
{
    cout << "my name is " << o1.name << "." << endl;
    cout << "my roll number is " << o1.rollNo << "." << endl;
    cout << "I got " << o1.marks << " marks in my test." << endl;
    // cout<<s1.marks;
}

void myPrinter2(Student o1)
{
    cout << o1.name;
}

int main()
{
    Student s1;
    // cout<<s1.marks;
    s1.setDetails();
    myPrinter(s1);
    // s1.display();
    // Student s2(101, "Shaurya", 87);
    // s2.display();
    // Student s3(102);
    // s3.set_marks(100);
    // s3.set_marks(37);
    // s3.display();
}