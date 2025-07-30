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
    student()
    {
    }
};

// create a function which takes two object as input and prints the marks of each of them
// void operator*(student &o1, student &o2)
// {
//     cout << "sum: " << o1.marks + o2.marks << endl;
// }

student operator+(student o1, student o2)
{
    student result;
    result.name = o1.name + o2.name;
    result.marks = o1.marks + o2.marks;
    return result;
}

student operator-(student o1, student o2)
{
    student result;
    result.name = o1.name + o2.name;
    result.marks = o1.marks - o2.marks;
    return result;
}

int main()
{

    student s1("jay", 60);
    student s2("ram", 20);
    student s3("prem", 50);

    student ans = s1 + s2 - s3;
    cout << "name=" << ans.name << endl;
    cout << "marks=" << ans.marks << endl;

    return 0;
}