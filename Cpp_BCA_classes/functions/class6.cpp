#include<iostream>
using namespace std;

//create a function which takes a number as input and returns its cube.
int cubefunc( int n ){
    int ans= n*n*n;
    return ans;
}

//create a function which takes 3 numbers as input and prints the sum of their cubes.
void sumofcube( int x, int y, int z){
    int a= cubefunc(x);
    int b= cubefunc(y);
    int c= cubefunc(z);
    int ans=  a+b+c;
    cout<<ans;

}

void printer(){
    cout<<"hello world"<<endl;
}

int main(){

    
    
    return 0;
}