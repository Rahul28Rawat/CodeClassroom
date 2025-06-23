#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head=NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverse(){
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        struct Node* temp = head;
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void insertAtBegining(int data){
    struct Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
        printf("Inserted %d at the beginning.\n", data); 
    }
}

void insertAtEnd(int data){
    struct Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        struct Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=newNode; 
    }
    printf("Inserted %d at the End.\n", data);
}


void insertAtMiddle(int data, int position){ //10
    struct Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        struct Node* temp=head; //1st-->9th
        int count = 1;
        while(temp!=NULL && count<position-1){
            temp = temp->next;
            count++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int deleteAtBegining(){
    int data;
    if(head == NULL){
        printf("List is empty.\n");
    }
    else if(head->next==NULL){
        data = head->data;
        free(head);
        head = NULL;
    }
    else{
        data = head->data;
        struct Node* temp = head;
        head=temp->next;
        free(temp);
    }
    printf("the deleted value from begining is %d.\n",data);
    return data;
}

int deleteAtEnd(){
    int data;
    if(head == NULL){
        printf("List is empty.\n");
    }
    else if(head->next==NULL){
        data = head->data;
        free(head);
        head = NULL;
    }
    else{
        struct Node* temp = head;
        struct Node* temp2 = NULL;
        while(temp!=NULL && temp->next!=NULL){
            temp2 = temp;
            temp = temp->next;
        }
        data=temp->data;
        temp2->next=NULL;
        free(temp);
    }
    printf("the deleted value from end is %d.\n",data);
    return data;
}

int deleteAtMiddle(int position){//10 temp=9
    int data;
    if(head == NULL){
        printf("List is empty.\n");
    }
    else if(position == 1){
        return deleteAtBegining();
    }
    else{
        struct Node* temp=head; //1 
        int count = 1;
        while(temp!=NULL && count<position-1){
            temp = temp->next;
            count++;
        }
        struct Node* temp2=temp->next;
        data = temp2->data;
        temp->next = temp2->next;
        free(temp2);
    }
    printf("the deleted value is %d.\n",data);
    return data;
}

//while(temp!=NULL)
//while(temp->next!=NULL)
//while(temp!=head)
//while(temp->next!=head)

// struct Node* temp = head;
// struct Node* temp2 = NULL;
// while(temp!=NULL && temp->next!=NULL){
//     temp2 = temp;
//     temp = temp->next;
// }


int main() {

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    insertAtEnd(60);
    insertAtEnd(70);

    for(int i=1; i<5; i+=2){
        deleteAtMiddle(i);
    }

    return 0;
}