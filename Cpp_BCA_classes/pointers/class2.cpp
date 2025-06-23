#include<iostream>
using namespace std;

void swap( int *a, int *b ){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void squarecreater( int *a, int *b ){
    //*address --> variable(value)
    ///&variable --> address
    // x=x*x;
    *a= (*a)*(*a);
    //y =y*y;
    *b= (*b)*(*b);
}

void sum( int a, int b){
    cout<<a+b<<endl;
}

void changeArrValue( int brr[] ){
    brr[0]=66;
}

int main(){

    int x=5;
    int y=10;
    //pass by value
    sum(x,y);
    //pass by reference
    squarecreater(&x,&y);

    int arr[5]={11,22,33,44,55};
    //pass by reference
    changeArrValue(arr);

    cout<<arr[0]<<endl;


    {
    // //pointers are special type of variable who has a specific role to store address of other variables
    // int a=100;
    // //pointer variable
    // int *adrr = &a;

    // cout<<"&a: "<<&a<<endl;  // 0x61ff0c --> hexadecimal numbers, .0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
    // cout<<"Adrr variable: "<<adrr<<endl;
    
    // //bina variable ko use kiye uski value change krne ke liye
    // cout<<a<<endl;
    // cout<<*adrr<<endl;
    // cout<<*(&a)<<endl;   //dereference karna
    }

    {
    // int x=10;
    // int y=20;

    // cout<<"x:"<<x<<", "<<"y:"<<y<<endl;

    // //pass by value
    // swap(&x,&y);

    // int m=x; //pass by value
    // int n=y; //pass by value

    // m=1000;
    // n=2000;
    
    // cout<<"x:"<<x<<", "<<"y:"<<y<<endl;
    }

    {
    // int m=10;
    // int *x= &m;
    // int **y = &x;
    // int ***z= &y;

    // cout<<m<<endl;
    // cout<<*x<<endl;
    // cout<<**y<<endl;
    // cout<<***z<<endl;
    }

    {
    // // create a function which takes two variables as input and makes square of both that numbers.
    // int x;
    // int y;
    // cin>>x>>y;

    // squarecreater(&x,&y);

    // //*address --> variable(value)
    // ///&variable --> address

    // cout<<"x: "<<x<<", y: "<<y<<endl;
    }

    {
        int a = 100;
        int b = 200;
        int *p = &a;
        int *q = &b;
        p = q;
        cout<<a; //100
        cout<<b; //200
        cout<<p; //address of b
        cout<<q; //address of b
        cout<<*p; //200
        cout<<*q; //200
    }
  
    {
        // char arr[20];
        // int i;
        // for(i = 0; i < 10; i++) {
        //     *(arr + i) = 65 + i;
        // }
        // *(arr + i) = '\0';
        // cout << arr;
    }

    {
        // int z;
        // int *ptr = &z; 
        // int a = 10; 
        // *ptr = a;//
        // cout << *ptr << endl;  //10
    }

    

    return 0;
}