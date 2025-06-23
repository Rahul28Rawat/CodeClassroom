#include<iostream>
using namespace std;


int sum(int x, int y){
    int value=x+y;
    return value;
}

int main() {

    int a=5;
    int b=10;
    int ans=sum(a,b);
    cout<<"ans="<<ans<<endl;

    return 0;
}