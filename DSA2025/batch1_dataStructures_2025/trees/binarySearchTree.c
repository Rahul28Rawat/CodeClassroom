#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
}



int main() {

    struct Node* root=createNode('R');
    root->left=createNode('C');
    root->right=createNode('C');
    

    return 0;
}