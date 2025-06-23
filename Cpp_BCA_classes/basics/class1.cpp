#include<iostream>
using namespace std;
int main(){

    // int marks1=90;
    // int marks2=80;
    // int marks3=75;
    // int marks4=89;
    // int marks5=56;

    // array allows us to store multiple values of similar datatype inside a single variable

    // int marks[5]={50,60,70,80,90};



    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[100];

    int index=2;

    for( int i=1; i<=size; i++ ){
        cin>>arr[index]; //arr[2]
        index++;
    }



    // char vowels[5]={'a','e','i','o','u'};

    // cout<<numbers[0]<<endl;
    // cout<<numbers[1]<<endl;
    // cout<<numbers[2]<<endl;
    // cout<<numbers[3]<<endl;
    // cout<<numbers[4]<<endl; 


    // for( int i=0; i<7; i++){ //i=1
    //     cout<<numbers[i]<<endl;
    // }


    

    // int maths_marks[40]={90,53,67,30,88,91,19};
    // int science_marks[40]={90,53,67,30,88,91,19};
    // int english_marks[40]={90,53,67,30,88,91,19};

    // int marks[5];

    // cin>>marks[0];
    // cin>>marks[1];
    // cin>>marks[2];
    // cin>>marks[3];
    // cin>>marks[4];

    // for( int i=0; i<5; i++){
    //     cin>>marks[i];
    // }

    // int marks[5]={56,89,99,19,76};

    // marks={99,89,76,56,19};

    // create a array named totalmarks, input 10 values form user ,
    // then print those values
    // binary sort


    //find the sum of array
    
    int marks[5]={1,1,1,1,1};
    int sum=0;
    for( int i=0; i<=4; i++ ){
        sum= sum+marks[i];
    }
    cout<<sum;


    return 0;
}