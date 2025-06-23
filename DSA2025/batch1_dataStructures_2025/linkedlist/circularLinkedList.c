#include<stdio.h>

stuct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

struct Node* createNode(int data){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory error\n");
        exit(1);
    }
    // (*newNode).data
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void insertAtBegining(int data){
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
        newNode->next=newnode;
    }
    else{
        newNode->next=head;
        struct Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        head=newNode;
    }
}

void insertionAtEnd(int data){
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
        newNode->next=newnode;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}

void  insertAtmiddle(int data, int position){
    struct Node* newNode=createNode(data);
    if(head==NULL){
        head=newNode;
        newNode->next=newnode;
    }
    else{
        struct Node* temp=head;
        int count=1;
        while(count<position-1){
            temp=temp->next;
            count++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int deleteAtStart(){
    int value;
    if(head==NULL){
        printf("List is empty");
        return;
    }
    else if(head->next==head){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        value=head->data;
        temp->next=head->next;
        free(head);
        head=temp->next;
    }
    printf("the deleted value is : %d\n",value);
    return value;
}

int deleteAtEnd(){
    int value;
    if(head==NULL){
        printf("List is empty");
        return;
    }
    else if(head->next==head){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        struct Node* temp2=NULL;
        while(temp->next!=head){
            temp2=temp;
            temp=temp->next;
        }
        value->temp->data;
        free(temp);
        temp2->next=head;
    }
    printf("the deleted value is : %d\n",value);
    return value;
}

int deleteAtMiddle(int position){
    int value;
    if(head==NULL){
        printf("List is empty");
        return;
    }
    else if(head->next==head){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        struct Node* temp2=NULL;
        int count=1;
        while(count<position){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        temp2->next=temp->next;
        free(temp);
    }
    printf("the deleted value is : %d\n",value);
    return value;
}

int main() {

    

    return 0;
}