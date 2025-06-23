#include<iostream>
using namespace std;

int arr[]={1,2,3,4,5,6,7,8,9};
int length=sizeof(arr)/sizeof(arr[0]);

void arrayreverse(){
    for(int i=length-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    arrayreverse();

    return 0;
}