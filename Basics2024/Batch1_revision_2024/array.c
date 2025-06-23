#include<stdio.h>

int main(){

    // int marks[10];
    // // int marks[]={8,45,33,21,11};
    // marks[3]=30;
    
    // for( int i=0; i<10; i++){
    //     scanf("%d",&marks[i]);
    // }
    
    // for( int  i=0; i<10; i++){
    //     printf("%d ",marks[i]);
    // }

    int arr[]={73,21,55,99,41};

    int position;
    printf("Enter position: ");
    scanf("%d",&position); 

    int index=position-1;

    printf("%d",arr[index]);

    
    return 0;
}