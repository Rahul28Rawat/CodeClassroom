#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}*head=NULL;

// struct Node*head=NULL;

struct Node* CreateNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void insertAtBegining(int value){
    struct Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtend(int value){
    struct Node* newNode=CreateNode(value);
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

void insertAtMiddle(int value, int pos){
    struct Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node* temp=head;
        for(int i=1; i<pos;i++){
            temp=temp->next;
        }
        struct Node* temp2=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=temp2;
        temp2->prev=newNode;
    }
}

int deleteAtBegin(){
    int deletedValue;
    if(head==NULL){
        printf("empty LL");
        deletedValue=-1;
    }
    else if(head->next==NULL){
        deletedValue=head->data;
        free(head);
        head=NULL;
    }
    else{
        deletedValue=head->data;
        struct Node* temp=head->next;
        free(head);
        temp->prev=NULL;
        head=temp;
    }
    return deletedValue;
}

int deleteAtEnd(){
    int deletedValue;
    if(head==NULL){
        printf("empty LL");
        deletedValue=-1;
    }
    else if(head->next==NULL){
        deletedValue=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        deletedValue=temp->data;
        struct Node* temp2=temp->prev;
        free(temp);
        temp2->next=NULL;
    }
    return deletedValue;
}

int deleteAtMiddle(int pos){
    int deletedValue;
    if(head==NULL){
        printf("empty LL");
        deletedValue=-1;
    }
    else if(head->next==NULL){
        deletedValue=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        for(int i=1; i<pos; i++){
            temp=temp->next;
        }
        deletedValue=temp->data;
        struct Node* temp2=temp->prev;
        struct Node* temp3=temp->next;
        free(temp);
        temp2->next=temp3;
        temp3->prev=temp2;
    }
    return deletedValue;
}

void traverse(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main() {

    
    traverse();

    return 0;
}