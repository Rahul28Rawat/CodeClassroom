#include<stdio.h>

int main() {

    int arr[5]={1,2,3,4,5};
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    //arrays of arrray
    //matrices
    //[3]--> no of rows  // 0,1,2
    //[4]--> no of columns  // 0,1,2,3

    // int a[3][4]={ {10,20,30,40}, {50,60,70,80}, {90,91,92,93} };
    int a[3][4];
    // //row 0
    // a[0][0]=10;
    // a[0][1]=20;
    // a[0][2]=30;
    // a[0][3]=40;
    // //row 1
    // a[1][0]=50;
    // a[1][1]=60;
    // a[1][2]=70;
    // a[1][3]=80;
    // //row 2
    // a[2][0]=90;
    // a[2][1]=66;
    // a[2][2]=11;
    // a[2][3]=91;

    for(int i=0; i<3; i++ ){
        for(int j=0; j<4; j++){
            printf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<3; i++ ){ //i=0
        for(int j=0; j<4; j++){ //j=0-3
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}