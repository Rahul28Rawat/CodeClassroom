#include<stdio.h>

// STRUCTURES
struct employee{
    int id;
    float salary;
    int age;
};

int main() {
    
    // int a;
    // int arr[10];
    // char a;
    // char arr[10];

    struct employee e;
    e.age=20;
    e.id = 1;
    e.salary = 5000.0;

    struct employee arr[4];
    int empid=104;
    for( int i=0; i<4; i++){
        arr[i].id=empid--;
        arr[i].age=25;
        arr[i].salary=27000.0;
    }

    // printing values of structure array
    for(int i=0; i<4; i++){
        printf("Employee ID: %d\n", arr[i].id);
        printf("Employee Age: %d\n", arr[i].age);
        printf("Employee Salary: %f\n\n", arr[i].salary);
    }

    // for(int i=0;  i<4; i++){
    //     if(arr[i].id==103){
    //         printf("I found employee with id 103");
    //     }
    // }

    //Bubble Sort 
    int n=4;
    for( int j=0; j<n-1; j++){
        for( int i=0; i<n-1-j; i++ ){ //i=0
            if( arr[i].id>arr[i+1].id ){
                int temp=arr[i].id;
                arr[i].id=arr[i+1].id;
                arr[i+1].id=temp;
            }
        }
    }

    // printing values of structure array
    for(int i=0; i<4; i++){
        printf("Employee ID: %d\n", arr[i].id);
        printf("Employee Age: %d\n", arr[i].age);
        printf("Employee Salary: %f\n\n", arr[i].salary);
    }

    // int key;
    // printf("Enter a key: ");
    // scanf("%d",&key);

    // int start=0;
    // int end=3;
    // int mid;
    // int found=0;
    // while(start<=end){
    //     mid=(start+end)/2;
    //     if(key==arr[mid].id){
    //         printf("Element is found at index %d\n",mid);
    //         found=1;
    //         break;
    //     }
    //     else if(key>arr[mid].id){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }

    // if(found==0){
    //     printf("Element is not found in the array\n");
    // }

    return 0;
}