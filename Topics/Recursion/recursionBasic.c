#include<stdio.h>

void evenOddnumber( int n ){
    if(n%2==0){
        printf("%d\n",n);
    }
    if(n==0){
        return;
    }
    evenOddnumber(n-1); //resume
    if(n%2==1){
        printf("%d\n",n);
    }
}

int main(){

    evenOddnumber(5);
    // evenOddnumber(10);

    //swap using function
    
    return 0;
}
