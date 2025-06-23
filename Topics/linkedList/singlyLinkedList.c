#include<stdio.h>
#include<stdlib.h>

//user defined Datatype
struct Node{
    int data;//4
    struct Node* next;//8 
};


struct Node* head=NULL;

struct Node* CreateNode(int item){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=item;
    newNode->next=NULL;
    return newNode;
}

void traverse(){
    struct Node* temp=head; //1,2,3
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

// MORE optimized code :--
// void insertAtBegining(int value){
//     struct Node* newNode=CreateNode(value);
//     if(head!=NULL){
//         newNode->next=head; // since newnode comes before old firstnode, so newnode should point to old firstnode.
//     }
//     head=newNode; //since newnode is our new firstnode, thatswhy head should point to newnode.
// }


void insertAtBegining(int value){
    struct Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head; // since newnode comes before old firstnode, so newnode should point to old firstnode.
        head=newNode; //since newnode is our new firstnode, thats why head should point to newnode.
    }
}

void insertAtEnd(int value){
    struct Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        //temp here will be pointing to lastNode
        temp->next=newNode;
    }
}

//after the position  //5
void insertAtmiddle(int value, int pos){
    struct Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node* temp=head;
        for(int i=1; i<pos; i++){ //3
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}


int deleteAtBegining(){
    int value;
    if(head==NULL){
        printf("Error, Empty LinkedList");
    }
    else if(head->next==NULL){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        value=head->data;
        head=temp->next;
        free(temp);
        
    }
    return value;
}

int deleteAtEnd(){
    int value;
    if(head==NULL){
        printf("Error, Empty LinkedList");
    }
    else if(head->next==NULL){
        value=head->data;
        free(head);
        head=NULL;
    }
    else{
        struct Node* temp=head;
        struct Node* temp2=NULL;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        free(temp);
        temp2->next=NULL;
    }
    return value;
}

int deleteAtMiddle(int pos){
    int value;
    if(pos==0){
        printf("Error, Enter a valid position!!");
    }
    else if(pos==1){
        value=deleteAtBegining();
    }
    else{
        struct Node* temp=head;
        struct Node* temp2=NULL;
        for(int i=1; i<pos; i++){
            temp2=temp;
            temp=temp->next;
        }
        value=temp->data;
        temp2->next=temp->next;
        free(temp);
    }
    return value;
}

// SecondNode---->ThirdNode--->fourthNode

int main() {
    int value;
    for(int i=1; i<5; i++){
        printf("Enter data no %d: ",i);
        scanf("%d",&value);
        insertAtEnd(value);
    }

    traverse();

    insertAtmiddle(44,3);
    traverse();

    
    return 0;
}