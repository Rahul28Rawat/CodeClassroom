//Dynamic Memory allocation to an array using malloc 
//1st version 

#include <stdio.h> 
#include <stdlib.h> // For malloc and free 
 
int main() { 
    int *ptr; // Pointer to hold the address of the allocated memory 
    int n; // Variable to store the size of the array 
 
    // Ask the user for the size of the array 
    printf("Enter the size of the array: "); 
    scanf("%d", &n); 
 
    // Allocate memory dynamically using malloc to dynamically allocate memory to array 
    ptr = (int *)malloc(n * sizeof(int)); // Allocates memory for 'n' integers 
 
    // Check if memory allocation was successful 
    if (ptr == NULL) { 
        printf("Memory allocation failed.\n"); 
        return 1; // Exit the program with an error code 
    } 
 
    // Input values into the array 
    printf("Enter %d elements:\n", n); 
int c=0; 
    for (int i = 0; i < n; i++) { 
        scanf("%d", ptr+c); 
c=c+4; 
    } 
c=0; //reset c to 0
// Display the array 
printf("The elements of the array are:\n"); 
for (int i = 0; i < n; i++) { 
printf("%d ", *(ptr+c)); 
} 
printf("\n"); 
// Free the dynamically allocated memory 
free(ptr); 
return 0; 
} 