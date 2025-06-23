#include<stdio.h>

int main() {


    int arr[4][4]={ {10,20,30,40},{66,77,33,44},{50,60,70,80},{90,77,25,88} };
    // //1st row
    // arr[0][0] = 10;
    // arr[0][1] = 20;
    // arr[0][2] = 30;
    // arr[0][3] = 40;
    // //2nd row
    // arr[1][0] = 50;
    // arr[1][1] = 60;
    // arr[1][2] = 70;
    // arr[1][3] = 80;
    // //3rd row
    // arr[2][0] = 90;
    // arr[2][1] = 100;
    // arr[2][2] = 110;
    // arr[2][3] = 120;

    int rows=sizeof(arr)/sizeof(arr[0]);
    int cols=sizeof(arr[0])/sizeof(arr[0][0]);

    //Displaying array.
    for(int i=0; i<rows; i++){ 
        for(int j=0; j<cols; j++){ 
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}