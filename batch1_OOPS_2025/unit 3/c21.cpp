#include <iostream>
using namespace std;

class ytchannel
{
public:
    int subscribers = 0;
    string name = "default";

    void display()
    {
        cout << "channel name : " << name << endl;
        cout << "total subscribers : " << subscribers << endl;
    }

    ytchannel(string name, int subscribers)
    {
        this->name = name;
        this->subscribers = subscribers;
    }
};

int main()
{

    ytchannel c1("abcd", 1000);
    c1.display();

    return 0;
}