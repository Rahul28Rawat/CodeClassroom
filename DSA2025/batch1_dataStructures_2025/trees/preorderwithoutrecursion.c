#include<stdio.h>
#include<stdlib.h>

struct Node{
    char Data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->Data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* buildSubtree(struct Node* node){
    char choice;
    char leftChild;
    char rightChild;

    //add left child if exist
    printf("Does %c has left child (y/n): ",node->Data);
    scanf(" %c",&choice);
    if(choice == 'y'){
        printf("Enter the value of left child of %c: ",node->Data);
        scanf(" %c",&leftChild);
        node->left = createNode(leftChild);
    }

    //add right child if exist
    printf("Does %c has right child (y/n): ",node->Data);
    scanf(" %c",&choice);
    if(choice == 'y'){
        printf("Enter the value of right child of %c: ",node->Data);
        scanf(" %c",&rightChild);
        node->right = createNode(rightChild);
    }

    if(node->left!=NULL){
        node->left=buildSubtree(node->left);
    }
    if(node->right!=NULL){
        node->right=buildSubtree(node->right);
    }
    return node;
}

// Build the tree  
struct Node* buildTree(){
    char value;
    printf("Enter ROOT node value: ");
    scanf(" %c", &value);
    struct Node* root=createNode(value);
    root=buildSubtree(root);
    return root;
}

void inorderWithoutRecursion(struct Node* root){

    struct Node* stack[20]; //static stack
    struct Node* curr=root;
    int top=-1;
    while(1){
        while(curr!=NULL){
            stack[++top]=curr;
            curr=curr->left;
        }
        if(curr==NULL && top!=-1 ){
            struct Node* popped_val = stack[top--];
            printf("%c",popped_val->Data);
            curr=popped_val->right;
        }
        if(top==-1 && curr==NULL){
            break;
        }
    }
}

int main() {

    struct Node* root = buildTree();
    printf("\nINORDER NON RECURSIVE : ");
    inorderWithoutRecursion(root);

    return 0;
}