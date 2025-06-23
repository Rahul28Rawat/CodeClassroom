#include<stdio.h>

void merge( int arr[], int p, int q, int r){
    int i=p;
    int j=q+1;
    int n1=q;
    int n2=r;

    int temp[r+1];
    int k=0;
    while(i<=n1 && j<=n2){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(j<=n2){
        temp[k]=arr[j];
        j++;
        k++;
    }
    while(i<=n1){
        temp[k]=arr[i];
        i++;
        k++;
    }
    for(int i=0;i<=r;i++){
        arr[i]=temp[i];
    }
}

int main() {

    

    return 0;
}