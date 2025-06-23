#include<iostream>
using namespace std;

//what is a array
//  Arrays are used to store multiple values in a single variable,
//  instead of declaring separate variables for each value.

int main(){

    // int rollno1=60;
    // int rollno2=70;
    // int rollno3=84;
    // int rollno4=50;
    // int rollno5=55;

    // int rollno[5]; //create a array
    // rollno[0]=60; // initialize value of array
    // rollno[1]=70;
    // rollno[2]=84;
    // rollno[3]=50;
    // rollno[4]=55;

    // cout<<rollno[3];

    int arr[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    for( int i=0; i<=2; i++){
        cin>>arr[i];
    }
    // cin>>arr2[]; // this is wrong format

    for( int i=0; i<=2; i++){
        cout<<arr[i]<<endl;
    }
    

    for( int i=0; i<=2; i++ ){
        cout<<"value at "<<i<<"th index is : "<<arr[i]<<endl;
    }

    

    
    // what is the size of a integer = 4 bytes
    // what is the size of a double = 8 bytes
    // what is the size of a string = 24 bytes
    // what is the size of a bool,char = 1 bytes
    // 1 byte= 8 bits

    // 110 001 111 -- 9 bits
    
    int a;
    //built in func
    cout<<sizeof(a);

    //array ka size

    int arr[5]={91,23,77,11,12};

    int n= sizeof(arr)/sizeof(int);

    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}


