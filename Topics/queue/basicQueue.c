#include<stdio.h>

char queue[5];
int maxsize=sizeof(queue)/sizeof(queue[0]);
int front=-1;
int end=-1;


void enqueue(char data){
    if(front==-1 && end==-1){
        front=0;
        end=0;
        queue[end]=data;
    }
    else if(end==maxsize-1){
        printf("Queue is full");
    }
    else{
        end++;
        queue[end]=data;
    }
}

char dequeue(){
    char value;
    if(front==-1 && end==-1){
        printf("Queue is empty");
        return -1;
    }
    else if(front==end){
        value=queue[front];
        front=-1;
        end=-1;
    }
    else{
        value=queue[front];
        front++;
    }
}

void display(){
    for(int i=front; i<=end; i++){
        printf("%c",queue[i]);
    }
    printf("\n");
}

int main() {

    enqueue('a');
    enqueue('b');
    enqueue('c');
    enqueue('d');
    dequeue();
    dequeue();
    display();


    return 0;
}