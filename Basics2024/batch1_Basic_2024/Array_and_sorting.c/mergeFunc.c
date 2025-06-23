#include<stdio.h>

void merge( int arr[], int p, int q, int r){
    int i=p;
    int j=q+1;
    int n1=q;
    int n2=r;
    int size=r-p+1;
    int temp[size];
    int k=0;

    while(i<=n1 && j<=n2){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++,k++;
        }
        else{
            temp[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=n1){
        temp[k]=arr[i];
        i++,k++;
    }
    while(j<=n2){
        temp[k]=arr[j];
        j++,k++;
    }
    for(int x=0; x<size; x++){
        arr[x+p]=temp[x];
    }
}

void mergesort( int A[], int p, int r){
    if (p >= r){
        return;
    }
    int q=(p+r)/2;
    mergesort(A, p, q);
    mergesort(A, q+1, r);
    merge(A, p, q, r);
}

int main() {

    int arr[8]={3,25,7,1,11,20,2,30};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("array before sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }
    printf("\n");

    mergesort(arr,0,size-1);

    printf("\narray after sorting : ");
    for( int k=0; k<size; k++ ){
        printf("%d ",arr[k]);
    }


    return 0;
}