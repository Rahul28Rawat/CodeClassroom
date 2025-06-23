#include<stdio.h>

int *stack;
int maxSize;
int top=-1;

// void push(){
//     if(top==MaxSize-1){
//         printf("Stack Overflow\n");
//     }
//     else{
//         top++; //top=4
//         stack[top]=item;
//     }
// }

void push(int item){
    if(top==maxSize-1){
        printf("Stack Overflow\n");
    }
    else{
        stack=(int*)realloc(stack,(top+2)*sizeof(int));
        top++;
        stack[top]=item;
    }
}

// int pop(){
//     if(top==-1){
//         printf("Stack Underflow\n");
//     }
//     else{
//         int item=stack[top];
//         top--;
//         return item;
//     }
// }

int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        int item=stack[top];   
        stack=(int*)realloc(stack,top*sizeof(int));
        top--;
        return item;
    }
}

void display(){
    printf("Elements of Stack : ");
    for( int i=top; i>=0; i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int size(){
    return top+1;
}

int peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        return stack[top];
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {

    return 0;
}