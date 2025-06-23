#include<iostream>
using namespace std;

//create a function which takes 2 numbers as input returns the greatest number between them.
int greater( int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

//create a function which takes 3 numbers as input returns the lowest number between them.
int lowest( int x, int y, int z){
    if( x<y ){
        if(x<z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y<z){
            return y;
        }
        else{
            return z;
        }
    }
}


int lowest( int x, int y, int z){
    if( x<y && x<z ){
        return x;
    }
    else if( y<x && y<z ){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    lowest( 5,7,9);
    return 0;
}