#include<stdio.h>

int fact( int a ){
    if(a==0){
        return 1;
    }
    int ans=1;
    for( int i=1; i<=a; i++){
        ans=ans*i;
    }
    return ans;
}

int nCr( int n, int r){

    int numerator= fact(n);
    int denominator= fact(r)*fact(n-r);
    int result= numerator/denominator;
    return result;

}

int main(){

    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    for( int i=0; i<n; i++){

        for( int k=n-1; k>i; k--){
            printf(" ");
        }

        for( int j=0; j<=i; j++){
            int value=nCr(i,j);
            printf("%d ",value);
        }
        printf("\n");
    }


    return 0;
}