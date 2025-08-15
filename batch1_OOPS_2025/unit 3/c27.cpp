#include <iostream>
using namespace std;

class school
{
public:
    string name;
    string standard;
    int *ptr;

    void display()
    {
        cout << "name: " << name << endl;
        cout << "standard: " << standard << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    school()
    {
    }

    // school(string n, string s, int a[5])
    // {
    //     name = n;
    //     standard = s;
    //     for (int i = 0; i < 5; i++)
    //     {
    //         ptr[i] = a[i];
    //     }
    // }

    // school(const school &o1)
    // {
    //     this->name = o1.name;
    //     this->standard = o1.standard;
    //     for (int i = 0; i < 5; i++)
    //     {
    //         this->arr[i] = o1.arr[i];
    //     }
    // }
};

int main()
{
    // int marks[] = {45, 35, 65, 78, 91};

    // school s1("alcon", "11", marks);
    // s1.display();

    // copy karna
    // school s2(s1);
    // s2.display();

    // school s2;
    // s2 = s1;
    // s2.display();

    int *marks = new int[5];
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;

    school s1("delhi public school", "10", marks);
    s1.display();

    return 0;
}