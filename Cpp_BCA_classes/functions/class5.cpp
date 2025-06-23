#include<iostream>
using namespace std;

//Ques 1- create a function which takes a number as input and print its cube.
// void cube(int n){
//     int ans=n*n*n;
//     cout<<ans;
// }

//Ques 1- create a function which takes a number as input and returns its cube.
int cube(int n){
    int ans=n*n*n;
    return ans;
}

//create a function which takes three numbers as input and prints the sum of their cubes.
void sumofthree( int a, int b, int c ){
    int ans= cube(a) + cube(b) + cube(c);
    cout<<ans;
}



int main(){

    sumofthree(1,2,3);

    return 0;
}