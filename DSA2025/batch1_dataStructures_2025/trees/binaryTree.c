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

struct Node** stack;
int top=-1;

void push(struct Node* node){
    stack=(struct Node**)realloc(stack,(top+2)*sizeof(struct Node));
    top++;
    stack[top]=node;
}

struct Node* pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* node=stack[top];   
        stack=(struct Node**)realloc(stack,top*sizeof(struct Node));
        top--;
        return node;
    }
}

// void display(){
//     printf("Elements of Stack : ");
//     for( int i=top; i>=0; i--){
//         printf("%d ",stack[i]);
//     }
//     printf("\n");
// }

int size(){
    return top+1;
}

// int peek(){
//     if(top==-1){
//         printf("Stack is empty\n");
//     }
//     else{
//         return stack[top];
//     }
// }

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
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

void preorder(struct Node* node){
    printf("%c",node->Data);
    if(node->left!=NULL){
        preorder(node->left);
    }
    if(node->right!=NULL){
        preorder(node->right);
    }
}

void inorder(struct Node* node){
    if(node->left!=NULL){
        inorder(node->left);
    }
    printf("%c",node->Data);
    if(node->right!=NULL){
        inorder(node->right);
    }
}

void postorder(struct Node* node){
    if(node->left!=NULL){
        postorder(node->left);
    }
    if(node->right!=NULL){
        postorder(node->right);
    }
    printf("%c",node->Data);
}

void preorderWithoutRecursion(struct Node* root){
    push(root);
    while(!isEmpty()){
        struct Node* node=pop();
        printf("%c ",node->Data);
        if(node->right!=NULL){
            push(node->right);
        }
        if(node->left!=NULL){
            push(node->left);
        } 
    }
}

void inorderWithoutRecursion(struct Node* root){
    struct Node* curr=root;
    while(1){
        while(curr!=NULL){
            push(curr);
            curr=curr->left;
        }
        if(curr==NULL && !isEmpty()){
            struct Node* popped_val = pop();
            printf("%c",popped_val->Data);
            curr=popped_val->right;
        }
        if(isEmpty() && curr==NULL){
            break;
        }
    }
}

int main() {

    struct Node* root = buildTree();
    // printf("\nPREORDER : ");
    // preorder(root);
    // printf("\nPREORDER NON RECURSIVE : ");
    // preorderWithoutRecursion(root);
    printf("\nINORDER : ");
    inorder(root);
    printf("\nINORDER NON RECURSIVE : ");
    inorderWithoutRecursion(root);
    // printf("\nPOSTORDER : ");
    // postorder(root);
    return 0;
}