#include <iostream>
using namespace std;

class MyString
{
public:
    string val;
};

string operator+(const MyString &o1, const MyString &o2)
{
    return o1.val + o2.val;
}

bool operator==(const MyString &o1, const MyString &o2)
{
    return (o1.val == o2.val);
}

int main()
{

    MyString s1;
    s1.val = "Hello";

    MyString s2;
    s2.val = "World";

    cout << s1 + s2 << endl;

    cout << (s1 == s2) << endl;

    return 0;
}