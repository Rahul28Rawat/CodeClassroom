#include<iostream>
using namespace std;
int main(){

    // if both outer and inner loop has same increment or decrement , then start inner loop with 1 and put condition equals to i
    // if both outer and inner loop has different increment or decremnt , then start inner loop with maximum value(5) and put condition equals i

    //same- j=minimum 
    //different - j=maximum

    //***** *****   //1 space
    //****   ****   //3 space
    //***     ***   //5 space
    //**       **   //7 space
    //*         *   //9 space
    //*         *   //9 space
    //**       **   //7 space
    //***     ***   //5 space  
    //****   ****   //3 space  
    //***** *****   //1 space
    

    for( int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<"*";
        }
        for( int a=1; a<=(i*2)-1; a++){
            cout<<" ";
        }
        for(int k=5; k>=i; k--){
            cout<<"*";
        }
        cout<<endl;
    }


    for( int i=1; i<=5; i++){ //ascending
        for( int j=1; j<=i; j++ ){ //ascending
            cout<<"*";
        }
        for( int j=9; j>=(i*2)-1; j-- ){ //decending
            cout<<" ";
        }
        for( int j=1; j<=i; j++ ){//ascending
            cout<<"*";
        }
        cout<<endl;
    }



    


    

    // for( int a=9; a>=(i*2)-1; a--){
    //         cout<<" ";
    //     }

    return 0;
}