#include<stdio.h>

char queue[10];//0 to 9
int maxSize=sizeof(queue)/sizeof(queue[0]);
int start=-1;
int end=-1;

void enqueue(char data){
    if(start==-1 && end==-1){
        start++;
        end++;
        queue[end]=data;
    }
    else if(end<maxSize-1){
        end++;
        queue[end]=data;
    }
    else{
        printf("queue Overflow\n");
    }  
}

char dequeue(){
    if(start==-1 && end==-1){
        printf("Queue underflow\n");
        return -1;
    }
    else{
        char val;
        val=queue[start];
        start++;
        if(start>end){
            start=-1;
            end=-1;
        }
        return val;
    }  
}

void traverse(){
    if(start==-1 && end==-1){
        printf("empty queue\n");
    }
    else{
        for(int i=start; i<=end; i++){
            printf("%d ",queue[i]);
        }
    }
    printf("\n");
}

char peek(){
    if(start==-1){
        return -1;
    }
    else{
        return queue[start];
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    dequeue();  
    dequeue();  
    traverse();

    return 0;
}