#include<stdio.h>

int main() {
    // int a2[]={1,2,3,4};
    // int a[][2]=a2;

    // //print 2d array
    // for( int i=0;i<2;i++){
    //     for( int j=0;j<2;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // char arr[]={'r','a','h','u','l','\0'};
    char *a="rahul";
    *(a+1)='z';
    // int arr[]={1,2,3,4};
    printf("%s",a);

    return 0;
}