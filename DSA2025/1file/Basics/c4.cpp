#include<iostream>
using namespace std;

int sumOfn(int n){
    if(n<0){
        return -1;
    }
    if(n<=0){
        return 0;
    }
    return n + sumOfn(n-1);
    
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int ans=sum(number);
    if(ans>0){
        cout<<ans;
    }
    else{
        cout<<"Error";
    }
    

    return 0;
}