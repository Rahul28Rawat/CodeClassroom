#include<stdio.h>
#include<stdlib.h>

//Node declartion for circular linked list
struct Node {
    int data;
    struct Node* next;
}*head=NULL;

//Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//traverse function for circular linkedlist
void traverse() {
    struct Node* temp = head;
    while (temp->next!= head) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}

void insertAtBegining(int data){
    struct Node* newNode = createNode(data);
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }
    else{
        newNode->next=head;
        struct Node* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next= newNode;
        head=newNode;
    }
}

void insertAtEnd(int data){
    struct Node* newNode = createNode(data);
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }
    else{
        struct Node* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}

void insertAtMiddle(int data, int pos){
    struct Node* newNode = createNode(data);
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }
    else if(pos==0){
        insertAtBegining(data);
    }
    else{
        struct Node* temp = head;
        for(int i=1; i<pos; i++){
            temp = temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}



int main() {

    

    return 0;
}