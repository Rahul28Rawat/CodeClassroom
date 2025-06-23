//Dynamic Memory allocation to an array using malloc 
//3rd version 
// Online C compiler to run C program online 
#include <stdio.h> 
#include <stdlib.h> // For malloc and free 
int main() { 
    int *ptr; // Pointer to hold the address of the allocated memory 
    int n; // Variable to store the size of the array 
    // Ask the user for the size of the array 
    printf("Enter the size of the array: "); 
    scanf("%d", &n); 
    // Allocate memory dynamically using malloc 
    ptr = (int *)malloc(n * sizeof(int)); // Allocates memory for 'n' integers 
    // Check if memory allocation was successful 
    if (ptr == NULL) { 
        printf("Memory allocation failed.\n"); 
        return 1; // Exit the program with an error code 
    } 
    // Input values into the array 
    printf("Enter %d elements:\n", n); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", ptr+i); 
    } 
    // Display the array 
    printf("The elements of the array are:\n"); 
    for (int i = 0; i < n;i++)  
        printf("%d ",*(ptr +i)); 
    // Free the dynamically allocated memory 
    free(ptr); 
    return 0; 
} 