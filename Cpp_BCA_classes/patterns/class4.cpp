#include<iostream>
using namespace std;

int main(){

    // // * * * * *
    // // * * * * * 
    // // * * * * *
    // // * * * * *
    // // * * * * *

    // for(int i=1;i<=5;i++){ //i=5
    //     for(int j=1;j<=i;j++){ //j=1
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=5-i;j++){// j=1
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //ques 2
    // //* * * * * * * * * * * * * * * * * * * * * * * * * 

    // for(int i=1; i<=5; i++){ //i=1
    //     for(int j=1;j<=i;j++){ //j=1
    //         cout<<"* ";
    //     }
    // }
    // for(int i=1; i<=5; i++){ //i=2
    //     for(int j=1;j<=5-i;j++){ //j=1
    //         cout<<"* ";
    //     }
    // }


    // //ques 3
    // //* * * * * * * * * * * * * * *
    // //* * * * * * * * * * 


    // // *
    // // * *
    // // * * *
    // // * * * *
    // // * * * * *
    // // * * * *
    // // * * *
    // // * *
    // // *
    // for(int i=1; i<=5; i++){ //i=2
    //     for(int j=1;j<=i;j++){ //j=1
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=5; i++){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //ques 4
    // //         * 
    // //       * * 
    // //     * * *
    // //   * * * *        
    // // * * * * *

    // for(int i=1; i<=5; i++){ //i=2
    //     for(int j=1;j<=5-i;j++){ //j=1
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){ //j=1
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // // ques 5

    // // * * * * *
    // //   * * * *
    // //     * * *
    // //       * * 
    // //         * 
    // for( int i=5; i>=1; i--){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<"  ";
    //     } 
    //     for( int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // // ques 6

    // //        * 
    // //      * * *
    // //    * * * * *
    // //  * * * * * * *
    // //* * * * * * * * *
    // //  * * * * * * *
    // //    * * * * *
    // //      * * *
    // //        *



    // //        * 
    // //      * *
    // //    * * *
    // //  * * * *
    // //* * * * *

    // //        *
    // //      * *


    // for(int i=1; i<=5; i++){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=(i*2)-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // //* * * * *
    // //  * * * *
    // //    * * *
    // //      * *
    // //        *
    // for(int i=1; i<=5; i++){ //i=2
    //     for(int j=2;j<=i;j++){ 
    //         cout<<"  ";
    //     }
    //     for(int j=5;j>=i;j--){  //j=5
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //    *       4 space 1-2 star
    //   ***      3 space 3-4 star
    //  *****     2 space 5-6 star
    // *******    1 space 7-8 star
    //*********   0 space 9-10 star


    //* * * * * * * * *
    //  * * * * * * *
    //    * * * * *
    //      * * *
    //        *







    //    *
    //   **
    //  ***
    // ****
    //*****

    for( int i=1; i<=5; i++ ){ //ascending
        for(int j=4; j>=i; j--){ //decending
            cout<<" ";
        }
        for( int j=1; j<=i; j++ ){ //ascending
            cout<<"* ";
        }
        cout<<endl;
    }

    //    *       //4 space
    //   * *      //3 spce
    //  * * *     //2 space
    // * * * *    //1 space
    //* * * * *   //0 space

    for( int i=1; i<=5; i++ ){ //ascending
        for(int j=4; j>=i; j--){ //decending
            cout<<" ";
        }
        for( int j=1; j<=i; j++ ){ //ascending
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}