#include<iostream>
using namespace std;

int arr[]={1,2,3,4,5,8,9,0,1};
int length=sizeof(arr)/sizeof(arr[0]);

void arrprinter(int n){//0
    //Base condition
    if(n>(length-1)){
        return;
    }
    cout<<arr[n]<<" ";
    arrprinter(n+1);
}

void arrprinter2(int n){//4,3,2,1,0,-1
    if(n<0){
        return;
    }
    arrprinter2(n-1);
    cout<<arr[n]<<" ";
}

int main(){

    arrprinter2(length-1);
    cout<<endl;
    arrprinter(0);


    return 0;
}