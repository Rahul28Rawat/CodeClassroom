#include<stdio.h>

int main(){
    // print first 10 numbers of fibonacci series.
    // 0,1,1,2,3,5,8,13,21,34,55,89,148,...

    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);

    int num1=0; //1
    int num2=1; //2
    printf("%d %d ",num1,num2);
    
    for(int i=1; i<=(n-2); i++){
        int nextnum = num1 + num2;
        printf("%d ",nextnum);
        num1=num2;
        num2=nextnum;
    }

    return 0;
}