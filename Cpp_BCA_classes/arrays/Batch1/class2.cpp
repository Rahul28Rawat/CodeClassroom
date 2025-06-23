#include<iostream>
using namespace std;

int main(){
    // index --> 0 se start hota hai
    // position --> 1 se start hota hai
    int arr[3]={ 87,44,9 };

    //linear search -- to find a particular value inside a array
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    int size= sizeof(arr)/sizeof(int);

    for( int i=0; i<size;  i++){
        if( arr[i]==key ){
            cout<<"Element found at position "<<i+1<<endl;
            break;
        }
        if( i==(size-1)){
            cout<<"Element not found"<<endl;
        }
    }
    
    return 0;
}