#include<stdio.h>

// void LinearSearch( int a[], int key, int length ){
//     for( int i=0; i<length; i++ ){
//         if(a[i]==key){
//             printf("%d found at index %d\n",key,i);
//             break;
//         }
//     }
// }

int main(){

    int arr[]={54,76,12,4,33,22,52,66,80,90,2};//44/4=11

    //traversing a array
    int n;
    printf("Enter the number to search : ");
    scanf("%d",&n);

    int length= sizeof(arr)/4;

    // LinearSearch(arr,n,length);

    for( int i=0; i<=12; i++ ){
        if(arr[i]==n){
            printf("%d found at index %d\n",n,i);
            break;
        }
    }

    return 0;
}