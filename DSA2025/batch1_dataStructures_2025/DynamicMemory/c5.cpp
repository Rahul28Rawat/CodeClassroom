#include<iostream>
using namespace std;

// &variable --> memory addr of that variable
// *addr --> variable 

int main(){
    
    int a=7;
    int b=2;

    //pointer --> special variable which sotres memory addr of other variables
    int* ptr1= &a;
    int* ptr2= &b;

    cout<<(*ptr1 + *ptr2)<<endl;

    // &variable --> memory addr of that variable
    // *addr --> value of that variable 

    // hexa decimal 16 digits 
    // 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,10,11,12,13,14,15,16,17,18,19,1A,1B

    return 0;
}