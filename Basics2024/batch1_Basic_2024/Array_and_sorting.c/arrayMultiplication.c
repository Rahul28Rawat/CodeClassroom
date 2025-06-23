#include<stdio.h>

void matrixMutiply(int arr1[], int arr2[], int arr[3], int i, int j){
    
}

int main() {

    //matrix 1
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //matrix 2
    int matrix2[3][2] = {
        {1, 3 },
        {2, 4 },
        {6, 1 }
    };

    int r1=3;
    int c1=3;
    int r2=3;
    int c2=2;
    if(c1!=r2){
        printf("Multiplication not possible");
        return 0;
    }
    int matrix3[r1][c2];

    for(int i=0; i<r1; i++){ //i=0
        for(int j=0; j<c2; j++){ //j=0
            int sum=0;  //matrix3[i][j]
            for(int k=0; k<c1; k++){
                int value=matrix1[i][k]*matrix2[k][j];
                sum+=value;
            }
            matrix3[i][j]=sum;
        }
    }

    //print 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //print 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //print 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}