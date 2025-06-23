#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data; //4
    struct Node* next; //8
    struct Node* prev; //8
}*head=NULL;

struct Node* createNode(int data){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void traverse(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertAtBegining(int data){
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtEnd(int data){
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void insertAtmiddle(int data, int pos){ //after the given position
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
    }
    else if(pos==0){
        insertAtBegining(data);
    }
    else{
        struct Node* temp=head;
        for(int i=1; i<pos; i++){ //pos=3
            temp=temp->next;
        }
        struct Node* temp2=temp->next; //pos=4
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=temp2;
        temp2->prev=newNode;
    }
}

int deleteAtbegining(){
    int value;
    if(head==NULL){
        printf("Error, linked list is empty");
        return;
    }
    else if(head->next==NULL){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head->next; //2nd node
        value=head->data;
        free(head);
        temp->prev=NULL;
        head=temp;
    }
    return value;
}

int deleteAtEnd(){
    int value;
    if(head==NULL){
        printf("Error, linked list is empty");
        return;
    }
    else if(head->next==NULL){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        value=temp->data;
        struct Node* temp2=temp->prev;
        temp2->next=NULL;
        free(temp);
    }
    return value;
}

int deleteAtMiddle( int pos ){
    int value;
    if(head==NULL){
        printf("Error, linked list is empty");
        return;
    }
    else if(head->next==NULL){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        for(int i=1; i<pos; i++){
            temp=temp->next;
        }
        value=temp->data;
        struct Node* temp1=head;
        struct Node* temp2=head;
        free(temp);
        temp1->next=temp2;
        temp2->prev=temp1;
    }
    return value;
}

int main() {

    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtBegining(5);
    insertAtmiddle(8,2);
    traverse();
    
    return 0;
}