#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

//head as a pointer
struct Node* head=NULL;

struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory error\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void traverse(){
    if(head==NULL || head->next==NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertAtBegining(int data){
    struct Node* newNode=createNode(data); 
    newnode->next=head;
    head->prev=newNode;
    head=newNode;
    printf("Inserted %d at the beginning.\n", data);
}

void insertAtEnd(int data){
    struct Node* newNode=createNode(data);
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAtMiddle(int data, int position){
    struct Node* newNode=createNode(data);
    struct Node* temp=head;
    int count=0;
    while(temp!=NULL && count<position){
        temp=temp->next;
    }
    struct Node* pretemp=temp->prev;
    pretemp->next=newNode;
    newNode->prev=pretemp;
    newNode->next=temp;
    temp->prev=newNode;
}

int deleteAtBegining(){
    int value=head->data;
    struct Node* temp=head;
    if(head==NULL ){
        printf("List is empty\n");
        return;
    }
    else if(head->next==NULL){
        head=NULL;
    }
    else{
        head=head->next;
        head->prev=NULL;
    }
    free(temp);
    printf("Deleted %d from the beginning.\n", value);
    return value;   
}

int deleteAtEnd(){
    int value;
    struct Node* temp=head;
    if(head==NULL ){
        printf("List is empty\n");
        return;
    }
    else if(head->next==NULL){
        value=head->data;
        head=NULL;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        value=temp->data;
        struct Node* temp2=temp->prev;
        temp2->next=NULL;
    }
    free(temp);
    printf("Deleted %d from the beginning.\n", value);
    return value;  
}

int deleteAtMiddle(int position){
    int value;
    struct Node* temp=head;
    if(head==NULL ){
        printf("List is empty\n");
        return;
    }
    else if(head->next==NULL){
        value=head->data;
        head=NULL;
    }
    else{
        int count=0;
        while(temp!=NULL && count<position-1){
            temp=temp->next;
        }
        struct Node* temp2=temp->prev;
        struct Node* temp3=temp->next;
        value=temp->data;
        temp2->next=temp3;
        temp3->prev=temp2;
    }
    free(temp);
    printf("Deleted %d from the middle.\n", value);
    return value;
}

int main() {

    

    return 0;
}