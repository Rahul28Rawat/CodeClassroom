#include<stdio.h>

int main() {

    int arr[4];
    int size= sizeof(arr)/sizeof(arr[0]);

    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // arr[3]=40;

    // *(arr+0)=10;
    // *(arr+1)=20;
    // *(arr+2)=30;
    // *(arr+3)=40;

    //inputting array: 
    printf("INPUT ARRAY : \n");
    for(int i=0; i<size; i++){
        // scanf("%d",&arr[i]);
        scanf("%d",arr+i );
    }

    //printing array: 
    printf("OUTPUT ARRAY : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}