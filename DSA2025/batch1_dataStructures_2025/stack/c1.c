#include<stdio.h>

//global variable
int stack[10];
int MaxSize=10;
int top = -1;

void push(int item){
    if(top==MaxSize-1){
        printf("Stack Overflow\n");
    }
    else{
        top++; //top=4
        stack[top]=item;
    }
}

int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        int item=stack[top];
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
    while(1){
        int choice;
        printf("Enter '1' for push in stack, Enter '2' for pop in stack, Enter 3 for Displaying Stack.\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice==1){
            int item;
            printf("Enter the item to be pushed in stack : ");
            scanf("%d",&item);
            push(item);
        }
        else if(choice==2){
            pop();
        }
        else if(choice==3){
            display();
        }
        
        printf("Continue : 1, Exit : 0\n");
        int value;
        scanf("%d",&value);
        if(value==0){
            break;
        }
        printf("\n");
    }

    return 0;
}