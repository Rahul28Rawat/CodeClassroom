#include<stdio.h>

int main() {

    int arr[4][5]={ 
        {1,2,3,4,5}, 
        {6,7,8,9,0}, 
        {1,3,0,4,9},
        {6,7,1,2,5} 
        };


    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // no of rows --> 4, count 0-3
    // no of columns --> 5, count 0-4
    
    //arr[row_index][col_index]

    
    

    return 0;
}