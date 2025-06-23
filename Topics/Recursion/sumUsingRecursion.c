#include<stdio.h>

// void numberPrinter( int a ){ //function defination 
//     printf("%d ",a);
//     //base condition
//     if(a==1){
//         return;
//     }
//     numberPrinter(a-1); // function call
// }

void sumprinter( int a, int *sum ){ 
    *sum=*sum + a;
    //base condition
    if(a==1){
        return;
    }
    sumprinter(a-1, sum );
}

int main() {

    int add=0;
    sumprinter(3, &add ); //function call
    printf("sum of values: %d",add);

    return 0;
}