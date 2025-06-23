#include<iostream>
using namespace std;
int main(){

    //***** //i=5--5star
    // **** //i=4--4star
    //  *** //i=3
    //   **
    //    *

    // for( int i=5; i>=1; i-- ){
    //     for( int j=5; j>i; j-- ){
    //        cout<<" "; 
    //     }
    //     for( int k=1; k<=i; k++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for( int i=1; i<=5; i++){ //i=1
    //     for( int j=1; j<=i-1; j++){ // j=1 to 1
    //         cout<<" ";
    //     }
    //     for( int k=i;k<=5; k++ ){ //k=5 to 2
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //    * //1
    //   ** //2
    //  *** //3
    // **** //4
    //***** //5 

    // for( int i=5; i>=1; i-- ){
    //     for( int a=1; a<=i-1; a++ ){
    //         cout<<" ";
    //     }
    //     for( int j=5; j>=i; j-- ){//i=1
    //         cout<<"*";
    //     }
    //     cout<<endl;     
    // }




    //    *     
    //   **     
    //  ***     
    // ****     
    //*****     


    for( int i=1; i<=5; i++ ){ //ascending
        for( int j=4; j>=i; j-- ){ //descending
            cout<<" ";
        }
        for( int k=1; k<=i; k++ ){ //ascending
            cout<<"*";
        }
        cout<<endl;
    }




        //*********     i=1 --> 9 star
        // *******      i=2 --> 7 star
        //  *****       i=3 --> 5 star
        //   ***        i=4 --> 3 star
        //    *         i=5 --> 1 star



    for( int i=1; i<=5; i++ ){
        for( int j=1; j<i; j++ ){
            cout<<" ";
        }
        for( int k=1; k<=((5-i)*2)+1; k++ ){
            cout<<"*";
        }
        cout<<endl;
    }



    // for( int i=1; i<=5; i++){//i=5
    //     for( int j=1; j<=i-1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    return 0;
}