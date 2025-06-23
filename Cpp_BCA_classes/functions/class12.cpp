#include<iostream>
using namespace std;

void swap( int *addr1, int *addr2 ){
    int temp= *addr1;
    *addr1=*addr2;
    *addr2= temp;
}

void swap( int x, int y){
    int temp = x;
    x = y;//x=77
    y = temp;//y=13
}

int main(){

    int a=13;
    int b=77;

    cout<<"before: "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    swap(a,b);

    cout<<"after swap: "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}