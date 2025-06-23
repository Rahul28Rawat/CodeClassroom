#include<iostream>
using namespace std;
int main(){


    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;
    // cout<<"my name is taniska"<<endl;

    // int a=6;
    // a=a+1;
    // a++;

    // number - i=1
    // condition - i<5
    // update

    //1) Initialise
    //2) Condition check
    //3) loop run 
    //4) update

    // for( int i=1; i<=12; i++ ){ //i=5
    //     cout<<"my name is taniska"<<endl;
    // }
    //numbers print form 0 to 10

    //5
    //10    
    // ICU- initialize, condition, update

    //Initialize
    //condition
    //loop run - loop iterate
    //update
    //condition
    //loop run - loop iterate
    //till condition is false
    
    //memory- x,y,j=3,

    // int x=12;
    // int y=13;
    // int j=3;
    // j=10; //overwrite
    // for( j=5; j<=50; j=j+5){ 
    //     cout<<j<<endl;
    // }

    // for( int j=5; j<=50; j=j+5){
    //     cout<<j<<endl;
    // }

    //memory

    // sum of digits
    int number; 
    cin>>number;
    int sum=0;
    int lastDigit;

    for( int i=1; i<=15; i++){
        lastDigit= number%10;
        sum=sum+lastDigit;
        number=number/10;
    }
    cout<<sum<<endl;

    // cout<<sum;
    
    // print 5 ka table

    //print first 10 even numbers




    // for(int i=1;i<=5;i++){
    //     cout<<i<<endl;
    // }

    // int i=1;
    // while(i<=5){
    //     cout<<i<<endl;
    //     i++;
    // }

    // int j=1;
    // do{
    //     cout<<j<<endl;
    //     j++;
    // }while(j<=5);


    // for(int i=0; i<10;i++){
    //     cout<<"jai hind"<<endl;
    // }


    // for(int i=1; i<=5; i++){ //i=2
    //     for(int a=1;a<=5;a++){ //a=1 to 5
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}