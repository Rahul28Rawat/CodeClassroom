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

void insert( int item, int pos){ //pos=15 index=14 
    if(pos>count){
        arr[count]=item;
        count++;
    }
    else{
        for(int i=count-1; i>=pos-1; i--){ //pos=3, index=2, 0,1,........
            arr[i+1]=arr[i];
        } 
        arr[pos-1]=item;
        count++;
    }
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

    int item, pos;
    printf("\nEnter the item you want to insert: ");
    scanf("%d", &item);
    printf("\nEnter the position where you want to insert the item: ");
    scanf("%d", &pos);
    printf("\n");

    insert(item,pos);

    display();



    return 0;
}


// void insert( int item, int index){ //pos=15 index=14
//     if(index+1>count){
//         arr[count]=item;
//         count++;
//     }
//     else{
//         for(int i=count-1; i>=index; i--){ //pos=3, index=2, 0,1,........
//             arr[i+1]=arr[i];
//         } 
//         arr[index]=item;
//         count++;
//     }
// }