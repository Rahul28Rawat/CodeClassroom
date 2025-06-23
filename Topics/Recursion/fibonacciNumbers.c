#include<stdio.h>

int fibonacci( int a ){ 
    if(a==0){
        return 0;
    }
    else if( a==1 ){
        return 1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}

int main() {

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: \n");
    for( int i=0; i<n; i++){
        int ans=fibonacci(i);
        printf("%d ", ans);
    }

    return 0;
}