#include<iostream>
#include<cstdlib>
using namespace std;

//user defined datatype
struct Node{ //12
    int data; //4
    struct Node* next; //8
};

struct Node* Last=NULL;

//function who can create a dynamic node for me
struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

void traverse(){
    
}

void insertAtBegining(int val){
    struct Node* newNode= createNode(val);
    if(Last==NULL){
        Last=newNode;
    }
    else{
        newNode->next=Last->next;
    }
    Last->next=newNode;
}

void insertAtEnd(int val){
    struct Node* newNode=createNode(val);
    if(Last==NULL){
        newNode->next=newNode;
    }
    else{
        newNode=Last->next;
        Last->next=newNode;
    }
    Last=newNode;
}


void insertAtMiddle(int val, int pos){ //after position
    struct Node* newNode=createNode(val);
    if(pos==0){
        printf("Error no such position");
    }
    else if(pos==1){
        insertAtBegining(val);
    }
    else{
        struct Node* temp=Last;
        for(int i=1; i<=pos; i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int deleteAtBegining(){
    int value;
    if(Last==NULL){
        printf("error empty LL");
    }
    else if(Last->next==Last){
        value=Last->data;
        free(Last);
        Last=NULL;
    }
    else{
        struct Node* temp=Last->next;
        Last->next=temp->next;
        value=temp->data;
        free(temp);
    }
    return value;
}

int deleteAtEnd(){
    int value;
    if(Last==NULL){
        printf("error empty LL");
    }
    else if(Last->next==Last){
        value=Last->data;
        free(Last);
        Last=NULL;
    }
    else{
        struct Node* temp=Last;
        while(temp->next!=Last){
            temp=temp->next;
        }
        temp->next=Last->next;
        value=Last->data;
        free(Last);
        Last=temp;
    }
    return value;
}

int deleteAtMiddle(int pos){
    int value;
    if(pos==0){
        printf("Error empty LL");
    }
    else if(pos==1){
        value=deleteAtBegining();
    }
    else{
        struct Node* temp=Last;
        struct Node* temp2=NULL;
        for(int i=1; i<=pos; i++){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=temp->next;
        value=Last->data;
        free(temp);
    }
    return value;
}

int main(){
    
    

    return 0;
}