#include<iostream>
#include<cstdlib>
using namespace std;

//user defined datatype
struct Node{ //12
    int data; //4
    struct Node* next; //8
};

struct Node* Head=NULL;

//function who can create a dynamic node for me
struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

void traverse(){
    struct Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";//2
        temp=temp->next;//3
    }
    cout<<endl;
}

void insertAtBegining(int val){
    struct Node* newNode=createNode(val);
    if(Head==NULL){
        Head=newNode;
    }
    else{
        newNode->next=Head;
        Head=newNode;
    }
}

void insertAtEnd(int val){
    struct Node* newNode=createNode(val);
    if(Head==NULL){
        Head=newNode;
    }
    else{
        struct Node* temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}


void insertAtMiddle(int val, int pos){ //after position
    struct Node* newNode= createNode(val);
    if(Head==NULL){
        Head=newNode;
    }
    else{
        struct Node* temp=Head;
        for(int i=1; i<pos-1; i++){
            if(temp->next==NULL){
                break;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int deleteAtBegining(){
    int value;
    if(Head==NULL){
        cout<<"Empty LL."<<endl;
    }
    else if(Head->next==NULL){
        value=Head->data;
        free(Head);
        Head=NULL;
        return value;
    }
    else{
        value=Head->data;
        struct Node* temp=Head;
        Head=Head->next;
        free(temp);
        return value;
    }
}

int deleteAtEnd(struct Node* Head){
    int value;
    if(Head==NULL){
        cout<<"Empty LL."<<endl;
    }
    else if(Head->next==NULL){
        value=Head->data;
        free(Head);
        Head=NULL;
        return value;
    }
    else{
        struct Node* temp=Head;
        struct Node* temp2=NULL;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        free(temp);
        temp2->next=NULL;
        return value;
    }
}

int deleteAtMiddle(int pos){
    int value;
    if(Head==NULL){
        cout<<"Empty LL."<<endl;
    }
    else if(Head->next==NULL){
        value=Head->data;
        free(Head);
        Head=NULL;
        return value;
    }
    else{
        struct Node* temp=Head;
        struct Node* temp2=NULL;
        for(int i=1; i<pos; i++){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        temp2->next=temp->next;
        free(temp);
        return value;
    }
}

void RemoveDuplicate(){
    struct Node* temp=Head;
    struct Node* temp2=Head->next;
    while(temp2!=NULL){
        if(temp->data==temp2->data){
            temp->next=temp2->next;
            free(temp2);
            temp2=temp->next;
        }
        else{
            temp=temp2;
            temp2=temp2->next;
        }
    }
}




int main(){
    
    insertAtEnd(10);//1
    insertAtEnd(20);//2
    insertAtEnd(20);//3
    insertAtEnd(20);//3
    insertAtEnd(20);//3
    insertAtEnd(20);//3
    insertAtEnd(30);//4
    insertAtEnd(40);
    insertAtEnd(40);
    insertAtEnd(50);
    
    traverse();
    RemoveDuplicate();
    traverse();

    return 0;
}