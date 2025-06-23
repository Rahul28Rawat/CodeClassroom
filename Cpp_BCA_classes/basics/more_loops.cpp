#include<iostream>
using namespace std;
int main(){


    // if i created 1 1000 variables then , if it will be present in our memory all the time, then it will slow your pc


    //*         *     //9 space
    //**       **     //7 space
    //***     ***     
    //****   ****     
    //***** *****
    

    
    // int i=9;
    // int j=11;
    // while(i>0){
    //     int k=j-i;
    //     for(int m=0; m<k/2; m++){
    //         cout<<"*";
    //     }
    //     for(int m=0; m<i; m++){
    //         cout<<" ";
    //     }
    //     for(int m=0; m<k/2; m++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i-=2;
    // }


    // {int i=9;
    // int j=1;
    // while(i>0){
    //     for(int m=1; m<=j; m++){
    //         cout<<"*";
    //     }
    //     for(int m=0; m<i; m++){
    //         cout<<" ";
    //     }
    //     for(int m=1; m<=j; m++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i-=2;
    //     j++;
    // }}



    //***** ***** //1 space
    //****   **** //3 space
    //***     *** 
    //**       **
    //*         *
    //*         *     //9 space
    //**       **     //7 space
    //***     ***     
    //****   ****     
    //***** *****


    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<"*";
        }
        for(int k=1; k<=(i*2)-1; k++){
            cout<<" ";
        }
        for(int j=5; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    for( int i=5; i>=1; i--){ //decending
        for(int j=5; j>=i; j--){ //ascending
            cout<<"*";
        }
        for(int k=1; k<=(i*2)-1; k++ ){ //decending
            cout<<" ";
        }
        for(int j=5; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;

    }





    // for(int i=1; i<=4; i++){
    //     for( int j=4 ; j>=i; j--){
    //         cout<<"*";
    //     }
    //     for( int l=1; l<=(i*2)+1 ; l++){
    //         cout<<" ";
    //     }
    //     for( int k=4 ; k>=i; k--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    return 0;
}