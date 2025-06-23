#include<stdio.h>

int sumofdigits( int n ){ //547

    if(n==0){
        return 0;
    }

    int ld=n%10;
    n=n/10;
    int sum= ld + sumofdigits(n);
    return sum;

}

int sumofdigits( int n ){
    int sum=0;
    while(n>0){ //54
        int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    return sum;
}

int main() {

    int n;
    printf("Enter the number: ");
    scanf("%d", &n); //547 --> 7+4+5 

    int ans= sumofdigit(n);

    return 0;
}