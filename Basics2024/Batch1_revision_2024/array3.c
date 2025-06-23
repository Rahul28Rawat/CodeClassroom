#include<stdio.h>

int main(){

    //input a number from user , then print all the values of arr
    // which are greater than this number
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    double arr[5]={2,4,6,7,8};

    for(int i=0; i<5; i++){
        printf("value :%lf , address:  %u \n",arr[i], &arr[i]);
    }



    //take a input number from user and then check if it exist in the array or not.

    return 0;
}