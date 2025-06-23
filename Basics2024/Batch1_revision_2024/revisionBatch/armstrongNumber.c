#include<stdio.h>

int main(){
    
    int n; //912 
    printf("Enter a number : ");
    scanf("%d", &n);

    int sum= 0;
    int x = n;

    //loop
    while(n>0){
        int D= n%10;
        sum= sum + (D*D*D);
        n/=10;
    }

    if(sum==x){
        printf("The number armstrong number");
    }
    else{
        printf("The number is not armstrong number");
    }

    

    return 0;
}