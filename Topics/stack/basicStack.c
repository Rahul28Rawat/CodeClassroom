#include<stdio.h>

char stack[6];
int maxSize=sizeof(stack)/sizeof(stack[0]);
int top=-1;

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{ 
        return 0;
    }
}

int isFull(){
    if(top==maxSize-1){ 
        return 1; 
    } 
    else{
        return 0;
    }
}

void push(char data){
    if(isFull()){
        printf("Failed to push %c, Stack Overflow\n",data);
        return;
    }
    stack[++top]=data;
    printf("Successfully pushed %c onto stack\n", data);
}

char pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
        return -1;
    }
    char value=stack[top];
    top--;
    return value;
}

void display(){
    for(int i=top; i>=0; i--){
        printf("|  %c  |\n",stack[i]);
    }
}

char peek(){
    if(isEmpty()){
        return stack[top];
    }
    else{
        printf("Stack is empty\n");
        return -1;
    }
}

int size(){
    return top+1;
}

void clear(){
    printf("Clearing stack...\n");
    while(top!=-1){
        printf("Popped character: %c\n", pop());
    }
}

int main() {

    while(1){
        printf("\nwhat do u want to do? 1->push(), 2->pop(), 3->display(), 4->peek(), 5->size, 6->isEmpty, 7->clear(), 0->exit\n");
        int choice;
        scanf("%d", &choice);
        if(choice==1){
            char data;
            printf("Enter a character to push: ");
            scanf(" %c", &data);
            push(data);
        }
        else if(choice==2){
            char value = pop();
            if(value!=-1){
                printf("Popped character: %c\n", value);
            }
        }
        else if(choice==3){
            display();
        }
        else if(choice==4){
            char value = peek();
            if(value!=-1){
                printf("Top character: %c\n", value);
            }
        }
        else if(choice==5){
            printf("Current stack size: %d\n", size());
        }
        else if(choice==6){
            if(isEmpty()==0){
                printf("Stack is not empty.\n");
            }
            else {
                printf("Stack is empty.\n");
            }
        }
        else if(choice==7){
            clear();
        }
        else if(choice==0){
            printf("Exiting program.\n");
            break;
        }
        else {
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}