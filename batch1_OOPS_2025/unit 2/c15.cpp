#include <iostream>
using namespace std;

class shirt
{
private:
    string brand;
    int *sizePtr;

public:
    void details()
    {
        cout << "Brand Name: " << brand << endl;
        cout << "Different Sizes: ";
        for (int i = 0; i < 5; i++)
        {
            cout << sizePtr[i] << " ";
        }
        cout << endl;
    }
    shirt(string brand)
    {
        this->brand = brand;
        this->sizePtr = (int *)malloc(sizeof(int) * 5);
        this->sizePtr[0] = 00;
        this->sizePtr[1] = 10;
        this->sizePtr[2] = 20;
        this->sizePtr[3] = 30;
        this->sizePtr[4] = 40;
    }
    // deep copy
    shirt(shirt &o1)
    {
        this->brand = o1.brand;
        this->sizePtr = (int *)malloc(sizeof(int) * 5); // s3
        this->sizePtr[0] = o1.sizePtr[0];
        this->sizePtr[1] = o1.sizePtr[1];
        this->sizePtr[2] = o1.sizePtr[2];
        this->sizePtr[3] = o1.sizePtr[3];
        this->sizePtr[4] = o1.sizePtr[4];
    }

    // shallow copy
    // shirt(shirt &o1)
    // {
    //     this->brand = o1.brand;
    //     this->sizePtr = o1.sizePtr;
    // }
    ~shirt()
    {
        this->sizePtr = NULL;
    }
};

int main()
{
    {
        shirt s1("polo");
        shirt s2("buffalo");
        shirt s3(s2);
        // shallow copy
        // deep copy
        s1.details();
        s2.details();
        s3.details();
    }

    return 0;
}