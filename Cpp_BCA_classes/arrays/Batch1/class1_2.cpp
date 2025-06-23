#include<iostream>
using namespace std;

int main(){

    //Data structure -array ( consecutive memory allocation )

    int arr[5];
    // arr size= 28 byte
    int size= sizeof(arr)/sizeof(int);
    

    for( int i=0; i<size; i++){
        cin>>arr[i];
    }

    for( int i=0; i<size; i++){
        cout<<arr[i]<<", ";
    }

    // int --> 4 byte
    // float --> 4 byte
    // double --> 8 byte
    // char --> 1 byte
    // long --> 8 byte
    // string --> 24 byte



    return 0;
}