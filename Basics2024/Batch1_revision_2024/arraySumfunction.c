#include<stdio.h>

void SumArray( int arr[], int length ){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    printf("SUM: %d\n",sum);
}

int main(){

    int marks[]={44,22,11};
    int l = sizeof(marks)/4;
    SumArray(marks,l);

    return 0;
}