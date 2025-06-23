#include<iostream>
using namespace std;

int main(){

    // if i created 1 1000 variables then , if it will be present in our memory all the time, then it will slow your pc
    
    int number=10;

    {
        cout<<number<<" zinda hai."<<endl;
    }

    //number named variable will be automatically destroyed
    // it will be removed from memory


    for(int j=5; j>=1; j--){
          cout<<"*";
    }
    //destory 
    for(int j=5; j>=1; j--){
          cout<<"*";
    }

    //MEMORY --> number=10




    for( int i=5; i>=1; i--){

        for(int j=5; j>=i; j--){
            cout<<"*";
        }

        for(int j=1; j<=(i*2)-1; j++ ){
            cout<<" ";
        }

        for(int j=5; j>=i; j--){
            cout<<"*";
        }

        cout<<endl;

    }


    return 0;

}

