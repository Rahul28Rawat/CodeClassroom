#include<stdio.h>

int main() {

    //static memory or stack memory
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",arr+i);
        scanf("%d",&arr[i]);
    }
    char vowels[5];
    double marks[]={5.2, 7.2, 9.0, 1.1};
    // double marks[4]={5.2, 7.2, 9.0, 1.1};

    // ** wrong method
    // int size;
    // scanf("%d",size); // Run time
    // int arr[size]; //wrong 
    //while declaring a array of stack memory, wee need to
    //define the size of the array in compile time.

    //dynamic memory or heap memory
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));

    for(int i=0; i<5; i++){
        scanf("%d",ptr+i);
        scanf("%d",&ptr[i]);
    }

    //In dynamic memory u can input size of array at runtime
    int n;
    scanf("%d",&n);
    int *ptr2;
    ptr2=(int*)malloc(n*sizeof(int));

    free(ptr);


{
    // int marks;
    // marks=94; //compile time 
    // printf("my marks is %d",marks);

    // int marks;
    // scanf("%d",&marks); //Run time 
    // printf("my marks is %d",marks);
}

    return 0;
}