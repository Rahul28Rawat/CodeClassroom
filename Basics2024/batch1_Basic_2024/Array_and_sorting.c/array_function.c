#include<stdio.h>

// &variable --> address of that variable
// *addr --> value at that addr

// //call by value
// void func1( int value ){
//     value=100;
//     printf("this is my marks : %d",value);
// }

// // //call by reference
// void func1( int *ptr ){
//     *ptr=100;
//     printf("my marks is %d\n", *ptr);
// }

// void Display( int arr[] ){
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }

// void Display( int *age ){
//     for(int i=0;i<5;i++){
//         printf("%d ",age[i]);
//     }
// }

void maximum( int ptr[] ){
    int max=ptr[0];
    for(int i=1;i<5;i++){
        if(max<ptr[i]){
            max=ptr[i];
        }
    }
    printf("maximum is %d\n",max);
}

int main() {

    int arr[5]={40,10,70,60,100}; 

    // Display(arr);

    maximum(arr);

    return 0;
}