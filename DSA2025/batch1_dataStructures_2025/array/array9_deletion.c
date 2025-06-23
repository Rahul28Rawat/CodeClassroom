#include<stdio.h>
//global variables
int arr[20];
int count=0;

void display(){
    printf("Elements of your array are : \n");
    for( int i=0; i<count; i++ ){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int array_delete( int pos ){
    int value=arr[pos-1];
    for( int i=pos; i<count; i++ ){ //pos=index+1
        arr[i-1]=arr[i];
    }
    count--;
    return value;
}

int main() {

    arr[0]=10,
    arr[1]=20,
    arr[2]=30,
    arr[3]=40,
    arr[4]=50,
    arr[5]=60,
    arr[6]=70,
    arr[7]=80,
    arr[8]=90,
    arr[9]=100;
    count=10;

    display();

    int pos;
    printf("Enter the pos which you want to delete : ");
    scanf("%d", &pos);

    int ans = array_delete(pos);
    printf("Deleted element is : %d\n", ans);

    display();

    return 0;
}

// int array_delete( int pos ){
//     int value=arr[pos-1];
//     for( int i=pos-1; i<count; i++ ){
//         arr[i]=arr[i-1];
//     }
//     count--;
//     return value;
// }