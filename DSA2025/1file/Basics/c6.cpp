#include<iostream>//cout,cin
#include<cstdlib>
#include<typeinfo>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // int* ptr=(int*)malloc(4);
    // *ptr=10;
    // cout<<*ptr<<endl;

    // int* ptr2=(int*)calloc(3,sizeof(int)); //continous allocation
    int* ptr=(int*)malloc(15*sizeof(int));
    realloc(ptr,17*sizeof(int));

    // int arr[5]={10,20,30,40,50}; //10
    // int a=100;

    // cout<<ptr[0]<<endl;
    // cout<<arr[0]<<endl;
    

    // cout<<2[arr]<<", "<<*(2+arr)<<endl;

    // 1000,1004,1008,1012,1016

    
    return 0;
}