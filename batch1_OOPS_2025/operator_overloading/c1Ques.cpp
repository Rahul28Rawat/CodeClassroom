#include <iostream>
using namespace std;

class MyString
{
public:
    string val;
};

//  overload "+" operator, which takes 2 object as input and  returns concatenation
//  of val of both these inputed objects.
// WRITE YOUR CODE HERE

//  overload "==" operator, which takes 2 object as input and  returns true
//  if val of both object is equal, else return false.
// WRITE YOUR CODE HERE

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