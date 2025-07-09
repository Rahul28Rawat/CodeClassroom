#include <iostream>
using namespace std;

class camera
{
public:
    int totalPhotos = 25;
    void clickPhoto()
    {
        cout << "I am clicking a photo" << endl;
    }
};

class call
{
public:
    int totalCalls = 4;
    void makeCall()
    {
        cout << "I am calling my friend" << endl;
    }
};

class smartphone : public call, public camera
{
public:
    int TotalApps = 17;
    void surfInternet()
    {
        cout << "I am searching in google" << endl;
    }
};

int main()
{

        return 0;
}