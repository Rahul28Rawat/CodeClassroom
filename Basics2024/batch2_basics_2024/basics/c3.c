#include<stdio.h>

int greatestnumber( int a, int b, int c){
    int result;
    if(a>b){
        if(a>c){
            result=a;
        }
        else{
            result=c;
        }
    }
    else{
        if(b>c){
            result=b;
        }
        else{
            result=c;
        }
    }
    return result;

}

int main(){

    int ans= greatestnumber(16,3,16);
    printf("%d",ans);

    return 0;
}