#include<stdio.h>

int main(){

    //break, continue, goto , exit

    // for(int i=1; i<=10; i++){//i=7 //iteration
        
    //     if(i==7){
    //         break; //skip
    //     }
    //     printf("hello %d\n",i);
    // }

    // for(int i=1; i<=10; i++){//i=7
    //     printf("hello %d\n",i);
    //     if(i==7){
    //         break;
    //     }
    // }

    for(int i=1; i<=10; i++){ //odd
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}