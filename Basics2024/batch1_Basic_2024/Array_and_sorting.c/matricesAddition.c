#include<stdio.h>

int main() {

    //matrix 1
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //matrix 2
    int matrix2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int matrix3[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    //print 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}