#include<iostream>
using namespace std;

int main(){

    // 1 1 1 1 1 
    // 2 2 2 2 2 
    // 3 3 3 3 3 
    // 4 4 4 4 4 
    // 5 5 5 5 5 

    //1 1 1 1 1 
    //2 2 2 2 2
    //3 3 3 3 3
    //4 4 4 4 4
    //5 5 5 5 5


    //Ques 1
    for(int i=1;i<=5;i++){ 
        for(int j=1;j<=5;j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }

    //Ques 2
    for(int i=1;i<=5;i++){ 
        for(int j=1;j<=5;j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //Ques 3
    for(int i=1;i<=5;i++){ //i=1
        for(int j=1;j<=5;j++){ 
            cout<<j<<" ";
        }
        cout<<endl;
    }


    //1 2 3 4 5
    //1 2 3 4 5
    //1 2 3 4 5
    //1 2 3 4 5
    //1 2 3 4 5

    //1 1 1 1 1 
    //2 2 2 2 2
    //3 3 3 3 3
    //4 4 4 4 4
    //5 5 5 5 5
    
    for(int i=1;i<=5;i++){ //i=2
        for(int j=1;j<=i;j++){ //j=2 
            cout<<"* ";
        }
        cout<<endl;
    }

    //* 
    //* * 
    //* * *
    //* * * *
    //* * * * *



    
    //* * * * * 
    //* * * *
    //* * *
    //* *
    //*

    for(int i=1;i<=5;i++){ //i=6

        for(int j=i;j<=5;j++){ //j=i= 5 to 5
            cout<<"* ";
        }
        cout<<endl;

    }


    //1 
    //2 2
    //3 3 3
    //4 4 4 4
    //5 5 5 5 5

    for( int i=1; i<=5; i++){
        for( int j=1; j<=i; j++){
            cout<<i<<" ";
        }
    }

    // piyush and muskan

    //2 3 4 5 6
    //3 4 5 6 7 
    //4 5 6 7 8
    //5 6 7 8 9
    //6 7 8 9 10

    for(int i=1; i<=5; i++ ){ //i=1
        for(int a=1; a<=5; a++){//a=3
            cout<<i+a<<" ";
        }
        cout<<endl;
    }


    //riya

    for(int i=5;i>=1;i--){  //i=4
        for(int j=1;j<=i;j++){ //j=1
            cout<<"* ";
        }
        cout<<endl;
    }

    //1 2 3 4 5
    //1 2 3 4
    //1 2 3
    //1 2
    //1


    //1 2 3 4 5
    //1 2 3 4
    //1 2 3 
    //1 2 
    //1

    //6 7 8 9 10
    //5 6 7 8
    //4 5 6
    //3 4
    //2


    for(int i=5;i>=1;i--){ //i=5
        for(int j=1;j<=i;j++){//j=2
            cout<<j+i<<" ";
        }
        cout<<endl;
    }



    //*
    //* *
    //* * *
    //* * * *
    //* * * * *

    for(int i=5;i>=1;i--){  //i=4
        for(int j=5;j>=i;j--){ //j=3
            cout<<"h"<<j<<" ";
        }
        cout<<endl;
    }



    //* * * * * * * * * *
    //* * * * * * * * * * 
    //* * * * * * * * * * 
    //* * * * * * * * * * 
    //* * * * * * * * * * 



    for(int i=1;i<=5;i++){ //i=2
        for(int j=1;j<=5;j++){ //j=1
            cout<<"* ";
        }
        for(int j=1;j<=5;j++){ //j=1
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}

