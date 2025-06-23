#include<stdio.h>

// int SOD( int n ){
//     int sum=0;
//     while(n>0){
//         sum=sum+(n%10);
//         n=n/10;
//     }
//     return sum;
// }

// int POD( int n){
//     int product=1;
//     while(n>0){
//         product=product*(n%10);
//         n=n/10;
//     }
//     return product;
// }

// int spyNumber(int n){
//     int sum=0, product=1;
//     int ld;
//     while(n>0){
//         ld=n%10;
//         sum+=ld;
//         product*=ld;
//         n/=10;
//     }
//     if(sum==product){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

//0,1,1,2,3,5,8,13,21,34,55,89,
// void fibonacci( int n){
//     if(n==1){
//         printf("%d ", 0);
//     }
//     else if(n==2){
//         printf("%d %d ",0,1);
//     }
//     else{
//         int num1=0, num2=1, num3;
//         printf("%d %d ", 0, 1);
//         for(int i=2;i<n;i++){
//             num3=num1+num2;
//             printf("%d ", num3);
//             num1=num2;
//             num2=num3;
//         }
//     }
// }

int prime( int a ){
    int prime=1;
    for(int i=2; i<a;i++ ){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    return prime;
}

void Primefactor( int n ){
    for(int i=1; i<n; i++){
        if(n%i==0 && prime(i)==1){
            printf("%d ", i);
        }
    }
}

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    Primefactor(num);


    return 0;
}
