#include <iostream>
using namespace std;

void numberPrinter()
{
    static int num = 1; // static variables lasts till the end of the code
    cout << "Value of num: " << num << endl;
    num++;
}

int main()
{
    numberPrinter(); // 1
    numberPrinter();
    numberPrinter();

    return 0;
}