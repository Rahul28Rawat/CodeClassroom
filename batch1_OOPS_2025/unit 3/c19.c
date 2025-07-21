#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};


int main() {

    int* ptr= (int*)(malloc(sizeof(int)));    
    double* ptr2=(double*)(malloc(sizeof(double)));
    int* ptr3= (int*)(calloc(10,sizeof(int)));
    // int marks[10];    

    struct node* newNode=(struct node*)
    (malloc(sizeof(struct node)));

    newNode->data;
    (*newNode).data;
    newNode->next;


    free(ptr);
    free(ptr2);

    return 0;
}