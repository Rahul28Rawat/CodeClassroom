#include <iostream>
using namespace std;

class base
{
private: // these values are not accessible outside the class & they are not inherited by child class
    int a = 1;

protected: // these values are not accessible outside the class & they can be inherited by child class
    int b = 2;

public: // these values are accessible outside the class & they can be inherited by child class
    int c = 3;

    // getter
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }

    // setter
    void seta(int value)
    {
        this->a = value;
    }
    void setb(int value)
    {
        this->b = value;
    }

    void display()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
        cout << "c= " << c << endl;
    }
    base()
    {
    }
    base(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

// private > protected > public

// variable public , inheritance access modifier private  -> variable will be inherited protected
// variable protected , inheritance access modifier public  -> variable will be inherited protected
// variable public , inheritance access modifier private  -> variable will be inherited private
// variable private , inheritance access modifier public  -> not inherited

class child : public base
{
public:
int c
    // protected:
    // int b;
    // private:
    // int a;
    public :
    // int bprinter()
    // {
    //     return b;
    // }
    // int aprinter()
    // {
    //     int ans = geta();
    //     return ans;
    // }
    void
    aprinter()
    {
        int ans = geta();
        cout << ans << endl;
    }
    void bprinter()
    {
        cout << b << endl;
    }
};

int main()
{
    child c1;
    c1.aprinter();

    return 0;
}
