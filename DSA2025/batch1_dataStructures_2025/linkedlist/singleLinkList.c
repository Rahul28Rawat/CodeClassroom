#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

// struct node* var1;
// (*var1).data
// var1->data

struct Node* head = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory error\n");
        exit(1);
    }
    // (*newNode).data
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void traverse(){
    if(head->next==NULL || head==NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp=head->next;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertAtBegining(int data){
    struct Node* newNode=createNode(data);
    newNode->next=head->next;
    head->next=newNode;
    printf("Inserted %d at the beginning.\n", data); 
}

    // while(temp->next!=NULL) --> it will stop when temp is equal to last element
    // while(temp!=NULL) --> jab temp mere last element se aage nikal jayega

void insertAtEnd(int data){
    struct Node* newNode=createNode(data);
    struct Node* temp=head->next;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

// head was a node


void insertAtmiddle(int data, int position){
    struct Node* newNode=createNode(data);
    struct Node* temp=head;
    int count=0;
    while(temp!=NULL && count<position-1){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next= newNode;
}

int deleteAtBegining(){
    int value;
    struct Node* temp=head->next;
    if(head==NULL ){
        printf("List is empty\n");
        return;
    }
    else if(head->next==NULL){
        head=NULL;
    }
    else{
        head=temp->next;
    }
    free(temp);
    printf("Deleted %d from the beginning.\n", value);
    return value;   
}

int deletionAtEnd(){
    int value;
    struct Node* temp=head->next;
    if(head==NULL ){
        printf("List is empty\n");
        return;
    }
    else if(head->next==NULL){
        head=NULL;
    }
    else{
        struct Node* temp2=NULL;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        temp2->next=NULL;
    }
    free(temp);
    printf("Deleted %d from the beginning.\n", value);
    return value;  
}

int deleteAtMiddle(int position){
    int value;
    struct Node* temp=head->next;
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
        struct Node* temp2=NULL;
        while(temp!=NULL && count<position-1){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        temp2->next=temp->next;
    }
    free(temp);
    printf("Deleted %d from the middle.\n", value);
    return value;
}


int main() {

    

    return 0;
}