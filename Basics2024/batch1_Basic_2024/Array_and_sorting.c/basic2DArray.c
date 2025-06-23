#include<stdio.h>

// |3 4 5|
// |6 8 2|
// |6 8 4|

// |3 4 5|
// |6 8 2|
// |6 8 4|

// |3 4 5|
// |6 8 2|
// |6 8 4| 

int main() { 

    int arr[4][4];
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/sizeof(arr[0][0]);
    
    // how to input 2d array
    for( int i=0; i<m; i++){
        printf("\nEnter the row: ");
        for( int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // adds 2 to the number of arrays
    // for( int i=0; i<m; i++){ 
    //     for( int j=0; j<n; j++){ 
    //         arr[i][j]=arr[i][j]+2;
    //     }
        
    // }

    // how to traverse/print 2d array
    for( int i=0; i<m; i++){ 
        for( int j=0; j<n; j++){ 
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}