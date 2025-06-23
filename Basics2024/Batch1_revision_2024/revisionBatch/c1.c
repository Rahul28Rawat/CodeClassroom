#include<stdio.h>

//Recursion - function calls itself

void func1( int a ){ 
    //base condition
    printf("%d \n",a);
    if(a==1){
        return;
    }
    func1(a-1);
    

}

int main() {

    func1(5);

    return 0;
}