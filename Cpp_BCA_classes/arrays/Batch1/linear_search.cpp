#include<iostream>
using namespace std;


void linearSearch(int brr[], int size, int key){
    //search the arrray for key

    for( int i=0; i<size; i++){
        if(brr[i]==key){
            cout<<"Element is present at index "<<i<<endl;
            break;
        }
        else if(i==(size-1)){
            cout<<"element not found"<<endl;
        }
    }

}

int main(){

    int arr[5]={11,22,33,44,55};

    int k;
    cin>>k;

    linearSearch(arr,5,k);

    //how compiler works.

    int a=10;
    int b=a;


    return 0;
}