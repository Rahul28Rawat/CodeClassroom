#include<stdio.h>

int main() {

    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];

    //inputing values in matrix1
    printf("Enter the elements of matrix1:\n");
    for( int i=0; i<2; i++){
        for( int j=0; j<2; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    //inputing values in matrix2
    printf("Enter the elements of matrix2:\n");
    for( int i=0; i<2; i++){
        for( int j=0; j<2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    for( int i=0; i<2; i++){
        for( int j=0; j<2; j++){
            matrix3[i][j]=0;
            for( int k=0; k<2; k++){
                matrix3[i][j] +=  matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print matrix 3
    printf("Cross Product of matrix1 and matrix2:\n");
    for( int i=0; i<2; i++){
        for( int j=0; j<2; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }


    return 0;
}