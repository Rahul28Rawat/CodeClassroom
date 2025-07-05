#include <iostream>
using namespace std;

class person
{

protected:
    string name = "joe";

public:
    void display()
    {
        cout << "person name : " << name << endl;
    }
};

class employee : public person
{
protected:
    string empID = "emp00";

public:
    void display()
    {
        cout << "Employee ID : " << empID << endl;
    }
};

class manager : public employee
{
private:
    string department = "sales";

public:
    void display()
    {
        // cout << "Manager Department : " << department << endl;
        person::display();
    }
};

// Device ->

int main()
{
    // person p1;
    // p1.display();
    // employee e1;
    // e1.display();
    manager m1;
    m1.display();
    // p1.showname();
    // employee e1;
    // manager m1;

    return 0;
}