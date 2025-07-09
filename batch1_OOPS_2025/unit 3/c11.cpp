#include <iostream>
using namespace std;
class human
{
public:
    string birthMonth = "may";
    void details()
    {
        cout << "this is the details of a human" << endl;
    }
};

class student : public human
{
public:
    string name = "rahul";
    int age = 22;
    int standard = 11;
};

int main()
{
    {
        // student s1;
        // student *ptr = &s1;

        // human h1;
        // human *ptr2 = &h1;

        // cout << ptr->name << endl;
        // cout << ptr->age << endl;
        // cout << ptr->standard << endl;

        // cout << h1.birthMonth << endl;
        // h1.details();

        // cout << ptr2->birthMonth << endl;
        // ptr2->details();
    }

    // student s1;
    human h1;

    // upcasting
    human *ParentPTR = &h1;
    // student *childPTR = &h1;

    // ParentPTR->details();

    // cout << childPTR->age << endl;
    // cout << childPTR->birthMonth << endl;

    return 0;
}