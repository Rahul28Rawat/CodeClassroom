#include<iostream>
using namespace std;

//swap using reference variable
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sum(int a, int b){
    int ans=a+b;
    a=a+b;
    cout<<ans<<endl;
}


int main(){

    int x=10,y=3;

    //pass by value
    sum(x,y);





    // swap(x,y);
    // cout << "x = " << x << endl;
    // cout << "y = " << y << endl;



    // //reference variable
    // int m=10;
    // int &n=m;
    // // int &y=m;

    // // y=100;
    // // cout<<n<<endl;



    return 0;
}