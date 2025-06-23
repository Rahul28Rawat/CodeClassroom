#include <iostream>
using namespace std;

class base
{
private: // these values are not accessible outside the class & they are not inherited by child class
    int a = 1;

protected: // these values are not accessible outside the class & they can be inherited by child class
    int b = 2;

public:
    int c = 3; // these values are accessible outside the class & they can be inherited by child class

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

class child : public base
{
    // public:
    // int c
    // protected:
    // int b;
    // private:
    // int a;
public:
    int bprinter()
    {
        return b;
    }
    int aprinter()
    {
        int ans = geta();
        return ans;
    }
};

int main()
{
    child c1;
    // c1.display();
    cout << c1.aprinter() << endl;

    return 0;
}

// {
// private:
//     int d;

// protected:
//     int e;

// public:
//     int f;

//     // getter
//     int getd()
//     {
//         return d;
//     }
//     int gete()
//     {
//         return e;
//     }

//     // setter
//     void setd(int value)
//     {
//         this->d = value;
//     }
//     void sete(int value)
//     {
//         this->e = value;
//     }

//     void display()
//     {
//         cout << "d= " << d << endl;
//         cout << "e= " << e << endl;
//         cout << "f= " << f << endl;
//     }
//     child()
//     {
//     }
//     child(int d, int e, int f)
//     {
//         this->d = d;
//         this->e = e;
//         this->f = f;
//     }
// }